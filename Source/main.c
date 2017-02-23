#include <stdio.h>
#include <windows.h>
#include <Wincrypt.h>
#include <Randomizer.h>
#include sha256.key

#define BUFSIZE 1024
#define MD5LEN  16
int main (int argc,  char** argv)
{
printf("Drop File Here.");
return 0;
FILE *fopen( const char * /sha256.key, const char * w+ );
if(sha256.key) {
/*If true then program will ask to decrypt; checks for internal sha256.key and compares hash*/
printf("File is encrypted,would you like to decrypt it?\n ");
}
	if(sha256.key) {
	/*If manual key is supplied, then hash and decrypt*/	
		
else (Randomize);{
	/*Program will encrypt file*/
	printf("File isn't encrypted, would you like to encrypt it?\n");
}
int Randomize(1); {
	Randomizer.h
}
return 0;

/*Return file with Key A*/
/*Generate random key B*/
	int Randomize(2); {
	Randomizer.h
}
return 0;
	/*Return file with Key B*/
int Ecryption(3){
	
		

/*Generate MD5*/

from wincrypto import CryptCreateHash, CryptHashData, CryptDeriveKey, CryptEncrypt, CryptImportKey, CryptExportKey
from wincrypto.constants import CALG_SHA1, CALG_AES_256, bType_SIMPLEBLOB

#derive key from password
sha1_hasher = CryptCreateHash(CALG_SHA1)
CryptHashData(sha1_hasher, 'Password')
aes_key = CryptDeriveKey(sha1_hasher, CALG_AES_256)

#encrypt data using key
encrypted_data = CryptEncrypt(aes_key, 'secret data')

#Import a PUBLICKEYBLOB and export the AES key as SIMPLEBLOB
TEST_RSA_PUBLIC_MSKEYBLOB = '0602000000a40000525341310004000001000100d1537575000617a37093cec958e8adedd347b5812f' \
                            '702595fc02fbb870f6a17a26780f9147a6cd938dffff842a1427f8200621f822caaf9b338b4bb3dbda' \
                            'ce58eedfc7b29b91a1f5ce628657f30f3feb9d909a1a00bd484f628f2db38087eec2f6bb4df1df024b' \
                            '19af1c97d316c86073c972059d65bc2b47f97e5462a2e8029a'.decode('hex')              
rsa_pub_key = CryptImportKey(TEST_RSA_PUBLIC_MSKEYBLOB)
encrypted_aes_key = CryptExportKey(aes_key, rsa_pub_key, bType_SIMPLEBLOB)

return 0;

/*Generate sha256.key File */

int Crypto (int argc, char** argv)
{
    char calc_hash[65];

    calc_sha256("file.file", calc_hash);
}

int calc_sha256 (char* path, char output[65])
{
    FILE* file = fopen(path, "rb");
    if(!file) return -1;

    char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    const int bufSize = 32768;
    char* buffer = malloc(bufSize);
    int bytesRead = 0;
    if(!buffer) return -1;
    while((bytesRead = fread(buffer, 1, bufSize, file)))
    {
        SHA256_Update(&sha256, buffer, bytesRead);
    }
    SHA256_Final(hash, &sha256);

    sha256_hash_string(hash, output);
    fclose(file);
    free(buffer);
    return 0;
}      

void sha256_hash_string (char hash[SHA256_DIGEST_LENGTH], char outputBuffer[65])
{
    int i = 0;

    for(i = 0; i < SHA256_DIGEST_LENGTH; i++)
    {
        sprintf(outputBuffer + (i * 2), "%02x", hash[i]);
    }

    outputBuffer[64] = 0;
}
return 0;
int End (void);
printf("Project Flashpoint encrypted.");
return 0;
