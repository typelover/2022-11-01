#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I love the woman";
	char str2[] = "I love";
	if (!strcmp(str1, str2))
	{
		printf("两个字符串一致");
	}
	else
	{
		printf("两个字符串不一致");
	}
	/*printf("%s", str1);*/
	return 0;
}


//int main()
//{
//	char str1[] = "To be or not to be ";
//	char str2[50];
//	strncpy(str2, str1, 5);
//	str2[5] = '\0';
//	printf("%s", str2);
//	return 0;
//}
//
//
////int main()
////{
////
//	return 0;
//}



//int main()
//{
//	char ch1[] = "hello girl";
//	char ch2[] = "there's a girl";
//	char ch3[100];
//	strcpy(ch1, ch2);
//	strcpy(ch3, "but I let her away");
//	printf("%s\n%s\n%s\n", ch1, ch2,ch3);
//	return 0;
//}


//
//
//
//int main()
//{
//	char ch[] = "hello word";
//	printf("%d\n", strlen(ch));
//	printf("%d\n", sizeof(ch));
//	return 0;
//}