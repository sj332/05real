#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c; //문자를 받기 위함 
	int cnt=0;
	
	printf("input a string:");
	/*scanf("%s",char);*/
	while((c=getchar())!='\n') //문자 입력 ## 입력문자가 개행문자가 나올 때까지 반복 
	{if (c>='0' && c<='9') //숫자면 0~9임을 이용 
		cnt++;//반복 ## 입력된 글자가 숫자인가?
			// 그렇다면 하나를 센다. 
	}
	
	printf("the number of digits is %i.\n",cnt);


	return 0;
}
