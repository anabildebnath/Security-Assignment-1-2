## Task 5

The instructions are followed by the given steps:

1. Create a text file with some text in it.
2. Use the `SHA-256` (Secure Hash Algorithm) hashing algorithm by the following command:

```bash
openssl dgst -sha256 sample.txt
```

Generated hash:

```
SHA2-256(sample.txt)= 19c35534df2643f9df4d0ca479bd0800903dc8f0207af562e659c513ac68ada1
```

3. Use the `Message digest 5` hashing algorithm by the following command:

```bash
openssl dgst -md5 sample.txt
```

Generated hash:

```
MD5(sample.txt)= 66ec600013182b19c6507c6b727d7628
```

4. Use the `SHA-1` hashing algorithm by the following command:

```bash
openssl dgst -sha1 sample.txt
```

Generated hash:

```
SHA1(sample.txt)= 08fee9c47c082aeb6b29136882f9ceac502e0083
```


### Analysis

Insights into the three hashing algorithms:

1. **SHA-256**:

- SHA-256 generates a 256-bit (32-byte) hash.
- It's extensively employed in cryptographic contexts and for digital signatures.
- The longer hash enhances security against collisions compared to MD5 and SHA-1.

2. **MD5**:

- MD5 produces a 128-bit (16-byte) hash.
- It's fast and commonly used for checksums and data integrity checks.
- However, MD5's susceptibility to collision attacks renders it insecure for sensitive applications.

3. **SHA-1**:

- SHA-1 yields a 160-bit (20-byte) hash.
- Previously popular, it's now considered weak due to susceptibility to collision attacks.
- Despite its flaws, it's still encountered in legacy systems.

**Comparison**

- SHA-256 boasts the longest hash and offers superior security.
- MD5, although swift, is insecure and unsuitable for secure applications.
- SHA-1, while stronger than MD5, is still vulnerable, prompting a shift towards more secure algorithms like SHA-256.
