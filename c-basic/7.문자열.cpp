#include<stdio.h> 

void main(void)
{
	//char str[12] = "Hello World"; // 끝에 null 값 추가되어서 12
	//char str2[] = "dodododododododododododododododododododoit!";
	
	/*char str[] = "Hello World";
	printf("%c\n",str[6]);

	str[6] = 'K';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'e';
	str[10] = 'a';

	printf("%s\n",str);*/

	char str[100] = "Hello\0World";
	printf("%s\n",str);

	str[3] = '\0';
	printf("%s\n",str);

	str[0] = '\0';
	printf("%s\n",str);
}