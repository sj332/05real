#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	char op;//������ operator
	int result;
	
	printf("enter the calculation :");
	scanf("%d %c %d",&x,&op,&y);
	
	//�����ڿ� ���� ������� ���
	
	/*
 	if(op=='+')
 		result=x+y;
 	else if(op=='-')
 		result=x-y;
 	else if(op=='*')
 		result=x*y;
 	else 
 		result=x/y;
	*/
	
	switch(op)
	{
		case '+':
			result=x+y;
			break;
			
		case '-':
			result=x-y;
			break;
		case '*':
			result=x*y;
			break;
			 
		default :
			result=x/y;
			break;
	}
	
	printf("=%i\n", result);
	 
	
	return 0;
}
