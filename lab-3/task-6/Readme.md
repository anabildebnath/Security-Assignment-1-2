## Task 6

The instructions are followed in the given steps:

1. Create a text file and add some text.
2. Generate a keyed hash using `HMAC-MD5` algorithm

```bash
openssl dgst -md5 -hmac "abcdefg" plain.txt
```

Generated Hash:

```
HMAC-MD5(plain.txt)= 9d6922d9ac143565588dbcfe4d606251
```

3. Generate a keyed hash using `HMAC-SHA256` algorithm

```bash
openssl dgst -sha256 -hmac "abc123" plain.txt
```

Generated Hash:

```
HMAC-SHA2-256(plain.txt)= fc1d05cc956ecd59432062ee2dab4b150fcbc4650562bd6f264a1e834fa2ae63
```

4. Generate a keyed hash using `HMAC-SHA1` algorithm

```bash
openssl dgst -sha1 -hmac "abc123efg" plain.txt
```

Generated Hash:

```
HMAC-SHA1(plain.txt)= 0abe0439a58f1dd29ad569d6191386f67a72416f
```


Concerning the key size in HMAC:

1. **Fixed Size:** No, HMAC doesn't mandate a key with a fixed size; it accommodates keys of varying lengths.
2. **Key Size:** The optimal key size should align with the security requisites of the application and the cryptographic algorithm in use. Nonetheless, for HMAC, it's advisable to employ keys at least as lengthy as the block size of the underlying hash function. For instance:

- For HMAC-MD5: A recommended minimum key size of 128 bits (16 bytes).
- For HMAC-SHA1: A recommended minimum key size of 160 bits (20 bytes).
- For HMAC-SHA256: A recommended minimum key size of 256 bits (32 bytes).

Longer keys can bolster resistance against brute-force attacks, yet excessively lengthy keys might not significantly enhance security and may incur added processing and storage overhead.
