#include<stdio.h>



void countNum(char *c) {

	int count[5] = { 0,0,0,0,0 };

	while (*c != '\0') 
	{
		switch (*c) {
		case 'a': count[0]++; break;
		case 'A': count[0]++; break;
		case 'e': count[1]++; break;
		case 'E': count[1]++; break;
		case 'i': count[2]++; break;
		case 'I': count[2]++; break;
		case 'o': count[3]++; break;
		case 'O': count[3]++; break;
		case 'u': count[4]++; break;
		case 'U': count[4]++; break;
		}
		*c++;
	}

	if (count[0] != 0) {
		printf(" a or A : %d \n", count[0]);
	}
	if (count[1] != 0) {
		printf(" e or E : %d \n", count[1]);
	}
	if (count[2] != 0) {
		printf(" i or I : %d \n", count[2]);
	}
	if (count[3] != 0) {
		printf(" o or O : %d \n", count[3]);
	}
	if (count[4] != 0) {
		printf(" u or U : %d \n", count[4]);
	}
	if (count[0] == 0 && count[1] == 0 && count[2] == 0 && count[3] == 0 && count[4] == 0) {
		printf("No vowel\n");
	}
	
}


int main() {

	char x[1000];
	printf("Input a sentence : ");
	
	fgets(x,1000, stdin);
	printf(" Vowels lists : \n");
	countNum(x);

	return 0;
}