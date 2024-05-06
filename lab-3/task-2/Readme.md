## Task 2

**AES ECB Encryption**

1. Download a .bmp file from internet & rename it sample.bmp
2. Encrypt the picture with (ECB) mode with the following command:

```bash
openssl enc -aes-128-ecb -e  -in sample.bmp -out encrypted-ecb.bmp -K 00112233445566778889aabbccd3322a
```

3. Now open the original picture with `ghex`:

```bash
ghex sample.bmp
```

4. Copy the first 54 bytes. (header information)
5. Now open the encrypted image with `ghex`:

```bash
ghex encrypted-ecb.bmp
```

6. Replace the first 54 bytes with the original header information
7. Now open the `encrypted-ecb.bmp` to see the encrypted image.
   We can see that the shape of the snail is understandable but the snail itself is not visible.

**AES CBC Encryption**

1. Encrypt the picture with (CBC) mode with the following command:

```bash
openssl enc -aes-128-cbc -e  -in sample.bmp -out encrypted-cbc.bmp \
                 -K  00112233445566778889aabbccddeeff \
                 -iv 01020304050607083241231213124f23
```

2. Now open the original picture with `ghex`:

```bash
ghex sample.bmp
```

3. Copy the first 54 bytes. (header information)
4. Now open the encrypted image with `ghex`:

```bash
ghex encrypted-cbc.bmp
```

5. Replace the first 54 bytes with the original header information
6. Now open the `encrypted-cbc.bmp` to see the encrypted image.
   Now we can see that the image is completely incomprehensible. Even the shape of the snail is not visible.


**_Analysis & Comparison of ECB and CBC Modes_**

CBC (Cipher Block Chaining) and ECB (Electronic Codebook) represent two distinct modes of operation in block cipher encryption:

1. **ECB Mode (Electronic Codebook)**:

   - In ECB mode, each plaintext block undergoes encryption independently using the same key.
   - It lacks diffusion, meaning identical plaintext blocks result in identical ciphertext blocks.
   - This characteristic can introduce vulnerabilities, particularly in scenarios like image encryption where patterns might persist.
2. **CBC Mode (Cipher Block Chaining)**:

   - In CBC mode, each plaintext block is XORed with the previous ciphertext block before encryption.
   - This introduces diffusion, making it more resilient against patterns and repetition in the plaintext.
   - CBC mode necessitates an Initialization Vector (IV) for the first block to initiate the chaining process.

**Comparison**:

- ECB offers simplicity and speed but compromises on security, especially in image encryption scenarios.
- CBC provides enhanced security through its chaining mechanism, albeit at a slight expense of speed and the necessity of an IV.

For tasks like image encryption, CBC is typically favored over ECB due to its superior ability to resist pattern preservation and its heightened security.
