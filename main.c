#include sha256.key
int main (int argc,  char** argv)
{
printf("Drop File Here.");
return 0;
FILE *input;
input = fopen(argv[1], "wb+");
if(sha256.key) {
/*If true then program will ask to decrypt; checks for internal sha256.key*/
printf("File is encrypted,would you like to decrypt it?\n ");
}
else {
	/*Program will encrypt file*/
	printf("File isn't encrypted, would you like to encrypt it?\n");
}
/*Encrypting code*/

}