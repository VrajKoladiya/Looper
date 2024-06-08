#include<stdio.h>

main()
{
	char alphabets='a';
	
	do
	{
		printf("%c,",alphabets);
		alphabets+=4;
	}
	while(alphabets<='z');
}