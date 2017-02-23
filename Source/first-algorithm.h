#ifndef __first-algorithm
#define __first-algorithm

#define MAXKC	(256/32)
#define MAXKB	(256/8)
#define MAXNR	14

typedef unsigned char	u8;	
typedef unsigned short	u16;	
typedef unsigned int	u32;

int KeySetupEnc(u32 rk[/*4*(Nr + 1)*/], const u8 cipherKey[], int keyBits);
int KeySetupDec(u32 rk[/*4*(Nr + 1)*/], const u8 cipherKey[], int keyBits);
void Encrypt(const u32 rk[/*4*(Nr + 1)*/], int Nr, const u8 pt[16], u8 ct[16]);
void Decrypt(const u32 rk[/*4*(Nr + 1)*/], int Nr, const u8 ct[16], u8 pt[16]);

#ifdef INTERMEDIATE_VALUE_KAT
void EncryptRound(const u32 rk[/*4*(Nr + 1)*/], int Nr, u8 block[16], int rounds);
void DecryptRound(const u32 rk[/*4*(Nr + 1)*/], int Nr, u8 block[16], int rounds);
#endif /* INTERMEDIATE_VALUE_KAT */

#endif /* __first-algorithm */