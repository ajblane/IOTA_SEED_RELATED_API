# The seed-related IOTA API fucntions

# Introduction 

The code in repository is extracted form [iotaledger/entangled](https://github.com/iotaledger/entangled), [XKCP/XKCP](https://github.com/XKCP/XKCP) and [ThrowTheSwitch/Unity](https://github.com/ThrowTheSwitch/Unity).

Here are seed-related IOTA API fucntions:
* iota_sign_address_gen
* iota_sign_signature_gen

The used hash function when signing is Keccak.

# Build

```
$ make
```

# Test

```
$ make test
```

* Expected Results
```
./build/test_converter
tests/test_converter.c:131:test_trits_all_bytes:PASS
tests/test_converter.c:132:test_trits_bytes_trits:PASS
tests/test_converter.c:133:test_bytes_trits:PASS

-----------------------
3 Tests 0 Failures 0 Ignored 
OK
./build/test_kerl
tests/test_kerl.c:96:test_one_absorb:PASS
tests/test_kerl.c:97:test_multi_squeeze_multi_absorb:PASS
tests/test_kerl.c:98:test_multi_squeeze:PASS

-----------------------
3 Tests 0 Failures 0 Ignored 
OK
./build/test_iss_kerl
tests/test_iss_kerl.c:112:test_iss:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
```
