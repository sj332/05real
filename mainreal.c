#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	  
	printf("정수 하나를 입력하시오:");
	scanf("%d",&x);
	
	if (x>0) //양수인 경우 
		printf("절댓값은 %d입니다.",x);
	else if (x==0) //0인 경우 
		printf("절댓값은 0입니다.");
	else //음수인 경우 
		printf("절댓값은 %d입니다.",-x);

	return 0;
}
