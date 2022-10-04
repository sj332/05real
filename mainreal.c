#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int x;
	int trial =0;
	
	do {
	// 입력해라 문구 출력
	trial++;
	printf("Guess a number: ");
	scanf("%i",&x);
	
	if (x<answer)
		printf("low!");
	else if(x>answer)
		printf("high!");	
	}
	while (answer!=x);
	
	printf("Congratulation! Number of trial=%i\n",trial);
			

}
