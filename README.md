# The seed-related IOTA API fucntions

# Introduction 

The repository is extracted from [iotaledger/entangled](https://github.com/iotaledger/entangled), [XKCP/XKCP](https://github.com/XKCP/XKCP) and [ThrowTheSwitch/Unity](https://github.com/ThrowTheSwitch/Unity).

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

# Archives of cross-compiling tangle accelerator into HOST in build environment of OPTEE

* 

```
~/.cache/bazel/_bazel_ajubuntu/941ce6e20b79b04520f90b0f369e83f4/execroot/__main__$ ls
apis.c     common_core.c  external  README.md   server.cc    typescript
apis.h     common_core.h  hooks     request     tests        verbose-s.txt
bazel-out  config.h       LICENSE   response    third_party  WORKSPACE
BUILD      errors.h       Makefile  serializer  _tmp

```

* Bazel verbose
 
$ bazel build -s //:tangle_accelerator

```
...
regex [action 'Compiling external/boost/libs/regex/src/regex.cpp']
(cd /home/ajubuntu/.cache/bazel/_bazel_ajubuntu/941ce6e20b79b04520f90b0f369e83f4/execroot/__main__ && \
  exec env - \
    PATH=/bin:/usr/bin \
    PWD=/proc/self/cwd \
  /usr/bin/gcc -U_FORTIFY_SOURCE -fstack-protector -Wall -Wunused-but-set-parameter -Wno-free-nonheap-object -fno-omit-frame-pointer '-std=c++0x' -MD -MF bazel-out/k8-fastbuild/bin/external/boost/_objs/regex/regex.pic.d '-frandom-seed=bazel-out/k8-fastbuild/bin/external/boost/_objs/regex/regex.pic.o' -fPIC -DBOOST_FALLTHROUGH -iquote external/boost -iquote bazel-out/k8-fastbuild/genfiles/external/boost -iquote bazel-out/k8-fastbuild/bin/external/boost -isystem external/boost -isystem bazel-out/k8-fastbuild/genfiles/external/boost -isystem bazel-out/k8-fastbuild/bin/external/boost -isystem external/boost/boost/regex -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/regex -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/regex -isystem external/boost/boost/assert -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/assert -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/assert -isystem external/boost/boost/config -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/config -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/config -isystem external/boost/boost/version -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/version -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/version -isystem external/boost/boost/cstdint -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/cstdint -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/cstdint -isystem external/boost/boost/detail -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/detail -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/detail -isystem external/boost/boost/limits -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/limits -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/limits -isystem external/boost/boost/exception -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/exception -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/exception -isystem external/boost/boost/functional -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/functional -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/functional -isystem external/boost/boost/container_hash -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/container_hash -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/container_hash -isystem external/boost/boost/core -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/core -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/core -isystem external/boost/boost/integer -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/integer -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/integer -isystem external/boost/boost/static_assert -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/static_assert -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/static_assert -isystem external/boost/boost/type_traits -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/type_traits -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/type_traits -isystem external/boost/boost/mpl -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/mpl -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/mpl -isystem external/boost/boost/move -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/move -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/move -isystem external/boost/boost/preprocessor -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/preprocessor -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/preprocessor -isystem external/boost/boost/predef -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/predef -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/predef -isystem external/boost/boost/ref -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/ref -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/ref -isystem external/boost/boost/utility -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/utility -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/utility -isystem external/boost/boost/swap -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/swap -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/swap -isystem external/boost/boost/smart_ptr -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/smart_ptr -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/smart_ptr -isystem external/boost/boost/align -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/align -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/align -isystem external/boost/boost/scoped_array -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/scoped_array -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/scoped_array -isystem external/boost/boost/checked_delete -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/checked_delete -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/checked_delete -isystem external/boost/boost/scoped_ptr -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/scoped_ptr -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/scoped_ptr -isystem external/boost/boost/shared_array -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/shared_array -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/shared_array -isystem external/boost/boost/shared_ptr -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/shared_ptr -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/shared_ptr -isystem external/boost/boost/throw_exception -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/throw_exception -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/throw_exception -isystem external/boost/boost/current_function -isystem bazel-out/k8-fastbuild/genfiles/external/boost/boost/current_function -isystem bazel-out/k8-fastbuild/bin/external/boost/boost/current_function -Wno-unused-value -fno-canonical-system-headers -Wno-builtin-macro-redefined '-D__DATE__="redacted"' '-D__TIMESTAMP__="redacted"' '-D__TIME__="redacted"' -c external/boost/libs/regex/src/regex.cpp -o bazel-out/k8-fastbuild/bin/external/boost/_objs/regex/regex.pic.o)
[32m[56 / 59][0m 2 actions, 1 running
    Compiling external/boost/libs/regex/src/cregex.cpp; 13s linux-sandbox
    [-----] Compiling external/boost/libs/regex/src/regex.cpp
...

```

$ bazel build --explain=verbose.txt //:tangle_accelerator

```
Build options: --subcommands=1 --explain=verbose-s.txt
Executing action 'BazelWorkspaceStatusAction stable-status.txt': unconditional execution is requested.
Executing action 'Expanding template external/entangled/utils/containers/hash/hash81_queue.h': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_uthash//:uthash': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_uthash//:uthash': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_uthash//:uthash': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_uthash//:uthash': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_uthash//:uthash': no entry in the cache (action is new).
Executing action 'Expanding template external/entangled/utils/containers/hash/hash8019_queue.h': no entry in the cache (action is new).
Executing action 'Expanding template external/entangled/utils/containers/hash/hash8019_stack.h': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @com_github_embear_logger//:logger': no entry in the cache (action is new).
Executing action 'Expanding template external/entangled/utils/containers/hash/hash243_stack.h': no entry in the cache (action is new).
Executing action 'Symlinking virtual headers for @entangled//cclient/types:types': no entry in the cache (action is new).
Executing action 'Expanding template external/entangled/utils/containers/hash/hash243_queue.h': no entry in the cache (action is new).
Executing action 'Compiling external/entangled/common/curl-p/hashcash.c': no entry in the cache (action is new).
Executing action 'Compiling response/ta_send_transfer.c': no entry in the cache (action is new).
...

```

* #include <keccak/keccakHash.h>

~/.cache/bazel/_bazel_ajubuntu/941ce6e20b79b04520f90b0f369e83f4/execroot/__main__/bazel-out/k8-fastbuild/bin/external/keccak/_virtual_includes

-I./external/keccak/_virtual_includes/keccak

* #include "common/stdint.h" // in common/trinary/trits.h

-iquote 

* generate-cpio-rootfs.sh

```
LIBFILES=`find ${STAGEDIR}/lib -maxdepth 1 -type f -a -not -name "*.a" \
	-a -not -name "libstdc++*" -a -not -name "libasan*" \
	-a -not -name "libubsan*" -a -not -name "libgfortran*" \
	-a -not -name "libnss_nis*" -a -not -name "liblsan*" \
	-a -not -name "libtsan*" -a -not -name "libitm*"`
for file in ${LIBFILES} ; do
    BASE=`basename $file`
    echo "file /lib/${BASE} $file 755 0 0" >> filelist-tmp.txt
done;
```

remove -a -not -name "libstdc++*" 

* fail to run test_serializer

```
root@FVP:/ optee_example_hello_world 
test_serializer.c:12:test_serialize_ta_get_tips:FAIL: Expected '{"tips":["LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA"]}' Was '{"tips":["el",""]}'
test_serializer.c:25:test_serialize_ta_generate_address:FAIL: Expected '{"address":["LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA"]}' Was '{"address":["el",""]}'
test_serializer.c:50:test_deserialize_ta_send_transfer:FAIL: Memory Mismatch. Byte 0 Expected 0x4C Was 0x00
test_serializer.c:62:test_serialize_ta_send_transfer:FAIL: Expected '{"hash":"LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ"}' Was '{"hash":"el"}'
test_serializer.c:137:test_serialize_ta_get_transaction_object:FAIL: Expected '{"hash":"LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","signature_and_message_fragment":"BYSWEAUTWXHXZ9YBZISEK9LUHWGMHXCGEVNZHRLUWQFCUSDXZHOFHWHL9MQPVJXXZLIXPXPXF9KYEREFSKCPKYIIKPZVLHUTDFQKKVVBBN9ATTLPCNPJDWDEVIYYLGPZGCWXOBDXMLJC9VO9QXTTBLAXTTBFUAROYEGQIVB9MJWJKXJMCUPTWAUGFZBTZCSJVRBGMYXTVBDDS9MYUJCPZ9YDWWQNIPUAIJXXSNLKUBSCOIJPCLEFPOXFJREXQCUVUMKSDOVQGGHRNILCO9GNCLWFM9APMNMWYASHXQAYBEXF9QRIHIBHYEJOYHRQJAOKAQ9AJJFQ9WEIWIJOTZATIBOXQLBMIJU9PCGBLVDDVFP9CFFSXTDUXMEGOOFXWRTLFGV9XXMYWEMGQEEEDBTIJ9OJOXFAPFQXCDAXOUDMLVYRMRLUDBETOLRJQAEDDLNVIRQJUBZBO9CCFDHIX9MSQCWYAXJVWHCUPTRSXJDESISQPRKZAFKFRULCGVRSBLVFOPEYLEE99JD9SEBALQINPDAZHFAB9RNBH9AZWIJOTLBZVIEJIAYGMC9AZGNFWGRSWAXTYSXVROVNKCOQQIWGPNQZKHUNODGYADPYLZZZUQRTJRTODOUKAOITNOMWNGHJBBA99QUMBHRENGBHTH9KHUAOXBVIVDVYYZMSEYSJWIOGGXZVRGN999EEGQMCOYVJQRIRROMPCQBLDYIGQO9AMORPYFSSUGACOJXGAQSPDY9YWRRPESNXXBDQ9OZOXVIOMLGTSWAMKMTDRSPGJKGBXQIVNRJRFRYEZ9VJDLHIKPSKMYC9YEGHFDS9SGVDHRIXBEMLFIINOHVPXIFAZCJKBHVMQZEVWCOSNWQRDYWVAIBLSCBGESJUIBWZECPUCAYAWMTQKRMCHONIPKJYYTEGZCJYCT9ABRWTJLRQXKMWY9GWZMHYZNWPXULNZAPVQLPMYQZCYNEPOCGOHBJUZLZDPIXVHLDMQYJUUBEDXXPXFLNRGIPWBRNQQZJSGSJTTYHIGGFAWJVXWL9THTPWOOHTNQWCNYOYZXALHAZXVMIZE9WMQUDCHDJMIBWKTYH9AC9AFOT9DPCADCV9ZWUTE9QNOMSZPTZDJLJZCJGHXUNBJFUBJWQUEZDMHXGBPTNSPZBR9TGSKVOHMOQSWPGFLSWNESFKSAZY9HHERAXALZCABFYPOVLAHMIHVDBGKUMDXC9WHHTIRYHZVWNXSVQUWCR9M9RAGMFEZZKZ9XEOQGOSLFQCHHOKLDSA9QCMDGCGMRYJZLBVIFOLBIJPROKMHOYTBTJIWUZWJMCTKCJKKTR9LCVYPVJI9AHGI9JOWMIWZAGMLDFJA9WU9QAMEFGABIBEZNNAL9OXSBFLOEHKDGHWFQSHMPLYFCNXAAZYJLMQDEYRGL9QKCEUEJ9LLVUOINVSZZQHCIKPAGMT9CAYIIMTTBCPKWTYHOJIIY9GYNPAJNUJ9BKYYXSV9JSPEXYMCFAIKTGNRSQGUNIYZCRT9FOWENSZQPD9ALUPYYAVICHVYELYFPUYDTWUSWNIYFXPX9MICCCOOZIWRNJIDALWGWRATGLJXNAYTNIZWQ9YTVDBOFZRKO9CFWRPAQQRXTPACOWCPRLYRYSJARRKSQPR9TCFXDVIXLP9XVL99ERRDSOHBFJDJQQGGGCZNDQ9NYCTQJWVZIAELCRBJJFDMCNZU9FIZRPGNURTXOCDSQGXTQHKHUECGWFUUYS9J9NYQ9U9P9UUP9YMZHWWWCIASCFLCMSKTELZWUGCDE9YOKVOVKTAYPHDF9ZCCQAYPJIJNGSHUIHHCOSSOOBUDOKE9CJZGYSSGNCQJVBEFTZFJ9SQUHOASKRRGBSHWKBCBWBTJHOGQ9WOMQFHWJVEG9NYX9KWBTCAIXNXHEBDIOFO9ALYMFGRICLCKKLG9FOBOX9PDWNQRGHBKHGKKRLWTBEQMCWQRLHAVYYZDIIPKVQTHYTWQMTOACXZOQCDTJTBAAUWXSGJF9PNQIJ9AJRUMUVCPWYVYVARKR9RKGOUHHNKNVGGPDDLGKPQNOYHNKAVVKCXWXOQPZNSLATUJT9AUWRMPPSWHSTTYDFAQDXOCYTZHOYYGAIM9CELMZ9AZPWB9MJXGHOKDNNSZVUDAGXTJJSSZCPZVPZBYNNTUQABSXQWZCHDQSLGK9UOHCFKBIBNETK","address":"LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","value":100,"obsolete_tag":"TANGLEACCELERATOR9999999999","timestamp":1546436542,"current_index":1,"last_index":2,"bundle_hash":"RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA","trunk_transaction_hash":"RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA","branch_transaction_hash":"LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","tag":"TANGLEACCELERATOR9999999999","attachment_timestamp":1546436542,"attachment_timestamp_lower_bound":1546436542,"attachment_timestamp_upper_bound":1546436542,"nonce":"THISTANGLEACCELERATORNONCES"}' Was '{"hash":"el","signature_and_message_fragment":"BYSWEAUTWXHXZ9YBZISEK9LUHWGMHXCGEVNZHRLUWQFCUSDXZHOFHWHL9MQPVJXXZLIXPXPXF9KYEREFSKCPKYIIKPZVLHUTDFQKKVVBBN9ATTLPCNPJDWDEVIYYLGPZGCWXOBDXMLJC9VO9QXTTBLAXTTBFUAROYEGQIVB9MJWJKXJMCUPTWAUGFZBTZCSJVRBGMYXTVBDDS9MYUJCPZ9YDWWQNIPUAIJXXSNLKUBSCOIJPCLEFPOXFJREXQCUVUMKSDOVQGGHRNILCO9GNCLWFM9APMNMWYASHXQAYBEXF9QRIHIBHYEJOYHRQJAOKAQ9AJJFQ9WEIWIJOTZATIBOXQLBMIJU9PCGBLVDDVFP9CFFSXTDUXMEGOOFXWRTLFGV9XXMYWEMGQEEEDBTIJ9OJOXFAPFQXCDAXOUDMLVYRMRLUDBETOLRJQAEDDLNVIRQJUBZBO9CCFDHIX9MSQCWYAXJVWHCUPTRSXJDESISQPRKZAFKFRULCGVRSBLVFOPEYLEE99JD9SEBALQINPDAZHFAB9RNBH9AZWIJOTLBZVIEJIAYGMC9AZGNFWGRSWAXTYSXVROVNKCOQQIWGPNQZKHUNODGYADPYLZZZUQRTJRTODOUKAOITNOMWNGHJBBA99QUMBHRENGBHTH9KHUAOXBVIVDVYYZMSEYSJWIOGGXZVRGN999EEGQMCOYVJQRIRROMPCQBLDYIGQO9AMORPYFSSUGACOJXGAQSPDY9YWRRPESNXXBDQ9OZOXVIOMLGTSWAMKMTDRSPGJKGBXQIVNRJRFRYEZ9VJDLHIKPSKMYC9YEGHFDS9SGVDHRIXBEMLFIINOHVPXIFAZCJKBHVMQZEVWCOSNWQRDYWVAIBLSCBGESJUIBWZECPUCAYAWMTQKRMCHONIPKJYYTEGZCJYCT9ABRWTJLRQXKMWY9GWZMHYZNWPXULNZAPVQLPMYQZCYNEPOCGOHBJUZLZDPIXVHLDMQYJUUBEDXXPXFLNRGIPWBRNQQZJSGSJTTYHIGGFAWJVXWL9THTPWOOHTNQWCNYOYZXALHAZXVMIZE9WMQUDCHDJMIBWKTYH9AC9AFOT9DPCADCV9ZWUTE9QNOMSZPTZDJLJZCJGHXUNBJFUBJWQUEZDMHXGBPTNSPZBR9TGSKVOHMOQSWPGFLSWNESFKSAZY9HHERAXALZCABFYPOVLAHMIHVDBGKUMDXC9WHHTIRYHZVWNXSVQUWCR9M9RAGMFEZZKZ9XEOQGOSLFQCHHOKLDSA9QCMDGCGMRYJZLBVIFOLBIJPROKMHOYTBTJIWUZWJMCTKCJKKTR9LCVYPVJI9AHGI9JOWMIWZAGMLDFJA9WU9QAMEFGABIBEZNNAL9OXSBFLOEHKDGHWFQSHMPLYFCNXAAZYJLMQDEYRGL9QKCEUEJ9LLVUOINVSZZQHCIKPAGMT9CAYIIMTTBCPKWTYHOJIIY9GYNPAJNUJ9BKYYXSV9JSPEXYMCFAIKTGNRSQGUNIYZCRT9FOWENSZQPD9ALUPYYAVICHVYELYFPUYDTWUSWNIYFXPX9MICCCOOZIWRNJIDALWGWRATGLJXNAYTNIZWQ9YTVDBOFZRKO9CFWRPAQQRXTPACOWCPRLYRYSJARRKSQPR9TCFXDVIXLP9XVL99ERRDSOHBFJDJQQGGGCZNDQ9NYCTQJWVZIAELCRBJJFDMCNZU9FIZRPGNURTXOCDSQGXTQHKHUECGWFUUYS9J9NYQ9U9P9UUP9YMZHWWWCIASCFLCMSKTELZWUGCDE9YOKVOVKTAYPHDF9ZCCQAYPJIJNGSHUIHHCOSSOOBUDOKE9CJZGYSSGNCQJVBEFTZFJ9SQUHOASKRRGBSHWKBCBWBTJHOGQ9WOMQFHWJVEG9NYX9KWBTCAIXNXHEBDIOFO9ALYMFGRICLCKKLG9FOBOX9PDWNQRGHBKHGKKRLWTBEQMCWQRLHAVYYZDIIPKVQTHYTWQMTOACXZOQCDTJTBAAUWXSGJF9PNQIJ9AJRUMUVCPWYVYVARKR9RKGOUHHNKNVGGPDDLGKPQNOYHNKAVVKCXWXOQPZNSLATUJT9AUWRMPPSWHSTTYDFAQDXOCYTZHOYYGAIM9CELMZ9AZPWB9MJXGHOKDNNSZVUDAGXTJJSSZCPZVPZBYNNTUQABSXQWZCHDQSLGK9UOHCFKBIBNETK","address":"el","value":100,"obsolete_tag":"TANGLEACCELERATOR9999999999","timestamp":1546436542,"current_index":1,"last_index":2,"bundle_hash":"","trunk_transaction_hash":"","branch_transaction_hash":"el","tag":"TANGLEACCELERATOR9999999999","attachment_timestamp":1546436542,"attachment_timestamp_lower_bound":1546436542,"attachment_timestamp_upper_bound":1546436542,"nonce":"THISTANGLEACCELERATORNONCES"}'
test_serializer.c:152:test_serialize_ta_find_transactions_by_tag:FAIL: Expected '{"hashes":["LCIKYSBE9IHXLIKCEJTTIQOTTAWSQCCQQ9A9VOKIWRBWVPXMCGUENWVVMQAMPEIVHEQ9JXLCNZOORVZTZ","RVORZ9SIIP9RCYMREUIXXVPQIPHVCNPQ9HZWYKFWYWZRE9JQKG9REPKIASHUUECPSQO9JT9XNMVKWYGVA"]}' Was '{"hashes":["el",""]}'

-----------------------
6 Tests 6 Failures 0 Ignored 
FAIL

```
