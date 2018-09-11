/*
 * Copyright (c) 2018 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __COMMON_SIGN_DEFAULT_H_
#define __COMMON_SIGN_DEFAULT_H_

#include <stddef.h>

char* iota_sign_address_gen(char const* const seed,
                                        size_t const index,
                                        size_t const security);
char* iota_sign_signature_gen(char const* const seed,
                                          size_t const index,
                                          size_t const security,
                                          char const* const bundle_hash);


#endif  //__COMMON_SIGN_DEFAULT_H_

#ifdef __cplusplus
}
#endif
