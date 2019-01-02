/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sign.h"
#include "kerl.h"
#include "iss_kerl.h"
#include "trit_tryte.h"

#pragma GCC diagnostic ignored "-Wdeclaration-after-statement"

char* iota_sign_address_gen(char const* const seed,
                                        size_t const index,
                                        size_t const security) {
  if (!(security > 0 && security <= 3)) {
    return NULL;
  }

  Kerl kerl;
  trit_t* key = NULL;
  char* address = NULL;
  trit_t subseed[HASH_LENGTH];
  const size_t key_length = security * ISS_KEY_LENGTH;

  key = calloc(sizeof(trit_t) * key_length, sizeof(trit_t));
  if (!key) {
    return NULL;
  }
  address =
      calloc(sizeof(tryte_t) * (HASH_LENGTH / RADIX + 1), sizeof(tryte_t));
  if (!address) {
    goto cleanup;
  }
  init_kerl(&kerl);

  trytes_to_trits((tryte_t*)seed, subseed, HASH_LENGTH / RADIX);
  iss_kerl_subseed(subseed, subseed, index, &kerl);

  iss_kerl_key(subseed, key, key_length, &kerl);
  memset(subseed, 0, HASH_LENGTH * sizeof(trit_t));

  iss_kerl_key_digest(key, key, key_length, &kerl);
  iss_kerl_address(key, key, security * HASH_LENGTH, &kerl);

  kerl_reset(&kerl);

  trits_to_trytes(key, (tryte_t*)address, HASH_LENGTH);

cleanup:
  memset(key, 0, key_length * sizeof(trit_t));
  free(key);

  return address;
}

char* iota_sign_signature_gen(char const* const seed,
                                          size_t const index,
                                          size_t const security,
                                          char const* const bundle_hash) {
  Kerl kerl;
  trit_t* key = NULL;
  tryte_t* signature = NULL;
  trit_t hash[HASH_LENGTH];
  trit_t subseed[HASH_LENGTH];
  const size_t key_length = security * ISS_KEY_LENGTH;

  key = calloc(sizeof(trit_t) * key_length, sizeof(trit_t));
  if (!key) {
    return NULL;
  }
  signature =
      calloc(sizeof(tryte_t) * (key_length / RADIX + 1), sizeof(tryte_t));
  if (!signature) {
    goto cleanup;
  }

  init_kerl(&kerl);

  trytes_to_trits((tryte_t*)seed, subseed, HASH_LENGTH / RADIX);
  trytes_to_trits((tryte_t*)bundle_hash, hash, HASH_LENGTH / RADIX);
  iss_kerl_subseed(subseed, subseed, index, &kerl);
  iss_kerl_key(subseed, key, key_length, &kerl);
  memset(subseed, 0, HASH_LENGTH * sizeof(trit_t));

  iss_kerl_signature(key, hash, key, key_length, &kerl);
  trits_to_trytes(key, (tryte_t*)signature, key_length);

cleanup:
  memset(key, 0, key_length * sizeof(trit_t));
  free(key);

  return (char*)signature;
}

#undef RADIX
#undef NONCE_LENGTH
