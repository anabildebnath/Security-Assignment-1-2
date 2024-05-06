## Task 3

To explore the padding scheme, we'll utilize the AES block cipher. The block size of AES-128 is 128 bits or 16 bytes. Here are the steps for testing with this algorithm:

1. Prepare a text file with a size that is not a multiple of 16. You can verify the size using `ghex`.
2. Proceed to encrypt the file using the provided commands.

1. 1. Using `ECB mode`
      **Encrypt:**

   ```bash
   openssl enc -aes-128-ecb -e  -in plain.txt -out encrypted-ecb.bin -K 00112233445566778889aabbccd3322a
   ```

   2. Using `CBC mode`:
      **Encrypt:**

   ```bash
   openssl enc -aes-128-cbc -e  -in plain.txt -out encrypted-cbc.bin \
                   -K  00112233445566778889aabbccddeeff \
                   -iv 01020304050607083241231213124f23
   ```

   3. Using `CFB mode`:
      **Encrypt:**

   ```bash
   openssl enc -aes-128-cfb -e  -in plain.txt -out encrypted-cfb.bin \
                   -K  00112233445566778889aabbccddeeff \
                   -iv 01020304050607083241231213124f23
   ```

   4. Using `OFB mode`:
      **Encrypt:**

   ```bash
   openssl enc -aes-128-ofb -e  -in plain.txt -out encrypted-ofb.bin \
                   -K  00112233445566778889aabbccddeeff \
                   -iv 01020304050607083241231213124f23
   ```


### Results & Insights

**Findings**:

In this scenario, the plaintext size was 24 bytes. Both the `CFB` and `OFB` encrypted files also amounted to 24 bytes, indicating no requirement for padding with these algorithms.

However, with the `ECB` and `CBC` algorithms, the encrypted file size increased to 32 bytes, a multiple of 16 (the block size of AES-128). Thus, padding becomes necessary for these two algorithms.
