Shared Libraries
================

## sdrtconsensus

The purpose of this library is to make the verification functionality that is critical to SDRT's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `sdrtconsensus.h` located in  `src/script/sdrtconsensus.h`.

#### Version

`sdrtconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`sdrtconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `sdrtconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `sdrtconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `sdrtconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/sdrt/bips/blob/master/bip-0016.mediawiki)) subscripts
- `sdrtconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/sdrt/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `sdrtconsensus_ERR_OK` - No errors with input parameters *(see the return value of `sdrtconsensus_verify_script` for the verification status)*
- `sdrtconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `sdrtconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `sdrtconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NSDRT](https://github.com/NicolasDorier/NSDRT/blob/master/NSDRT/Script.cs#L814) (.NET Bindings)
- [node-libsdrtconsensus](https://github.com/bitpay/node-libsdrtconsensus) (Node.js Bindings)
- [java-libsdrtconsensus](https://github.com/dexX7/java-libsdrtconsensus) (Java Bindings)
- [sdrtconsensus-php](https://github.com/Bit-Wasp/sdrtconsensus-php) (PHP Bindings)
