// C Program to Check Vowel or
// Consonant using switch case
#include <stdio.h>

int isVowel(char ch)
{
	int check = 0;
	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		check = 1;
	}
	return check;
}

int main()
{
	// 1 means Vowel
	printf("a is %d\n", isVowel('a'));

	// 0 means Consonant
	printf("x is %d", isVowel('x'));
	return 0;
}
