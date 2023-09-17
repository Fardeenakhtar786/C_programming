/*WAP to take input of any character and then check whether the 
character is vowel or consonant*/

#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any character:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='o'||
	ch=='O'||ch=='u'||ch=='U')
	printf("\n%c is vowel ",ch);
	else
	printf("\n%c is consonant",ch);
}
