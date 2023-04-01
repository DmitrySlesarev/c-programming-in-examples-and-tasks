#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

#define TRUE 1
#define MAX 1024

int htoi(char *arr);

/* Script to convert HEX 2 DEC */
int main(void)
{
	//char codeword[MAX] = {"B29E"};
	char c;
	char next[MAX];
	char codeword[MAX];
	
	while (TRUE) {
	
		puts("Press Ctrl + C to exit");
		puts("Enter HEX value:");
		gets(codeword);
		
		htoi(codeword);
		
	}
	
	return 0;
}

int htoi(char arr[])
{
	int i, j; // indexes
	int dec, degree, interim, result;
	int len;
	
	len = strlen(arr);
	//printf("STRLEN: %d\n", len);
	result = 0;
	
	for (i=0; i<=strlen; i++) {
		
		//printf("CHAR: %c\n", arr[i]);
		//printf("INDEX: %d\n", i);
		
		len--;
		j = len;
		dec = 0;
		degree = 1;
		interim = 0;
		
		if ( arr[i] == '\0' ) {
			break;
		}
		else if ( (arr[i] >= 48) and  (arr[i] < 58 )) {
			switch ((int)arr[i]) {
				case 48:
					dec = 0;
					//puts("0");
					break;
				case 49:
					dec = 1;
					//puts("1");
					break;
				case 50:
					dec = 2;
					//puts("2");
					break;
				case 51:
					dec = 3;
					//puts("3");
					break;
				case 52:
					dec = 4;
					//puts("4");
					break;
				case 53:
					dec = 5;
					//puts("5");
					break;
				case 54:
					dec = 6;
					//puts("6");
					break;
				case 55:
					dec = 7;
					//puts("7");
					break;
				case 56:
					dec = 8;
					//puts("8");
					break;					
				case 57:
					dec = 9;
					//puts("9");
					break;
				default:
					puts("ERROR");
					return 1;
			}
		}
		else {
			switch ((int)arr[i]) {
				case 65:
					dec = 10;
					//puts("A");
					break;
				case 97:
					dec = 10;
					//puts("a");
					break;
				case 66:
					dec = 11;
					//puts("B");
					break;
				case 98:
					dec = 11;
					//puts("b");
					break;
				case 67:
					dec = 12;
					//puts("C");
					break;
				case 99:
					dec = 12;
					//puts("c");
					break;
				case 68:
					dec = 13;
					//puts("D");
					break;
				case 100:
					dec = 13;
					//puts("d");
					break;
				case 69:
					dec = 14;
					//puts("E");
					break;
				case 101:
					dec = 14;
					//puts("e");
					break;
				case 70:
					dec = 15;
					//puts("F");
					break;
				case 102:
					dec = 15;
					//puts("f");
					break;
				default:
					puts("ERROR");
					return 2;
			}
		}
		
		//printf("DEC[converted]: %d\n", dec);
		
		while (j > 0) {
			degree *= 16;
			j--;	
		}
		
		//printf("DEGREE: %d\n", degree);
		 
		interim = dec * degree;
		
		//printf("DEC[interim]: %d\n", result);		
		
		result += interim;
			
	}
	
	printf("DEC: %d\n", result);
	
	return 0;

}
