#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c; //���ڸ� �ޱ� ���� 
	int cnt=0;
	
	printf("input a string:");
	/*scanf("%s",char);*/
	while((c=getchar())!='\n') //���� �Է� ## �Է¹��ڰ� ���๮�ڰ� ���� ������ �ݺ� 
	{if (c>='0' && c<='9') //���ڸ� 0~9���� �̿� 
		cnt++;//�ݺ� ## �Էµ� ���ڰ� �����ΰ�?
			// �׷��ٸ� �ϳ��� ����. 
	}
	
	printf("the number of digits is %i.\n",cnt);


	return 0;
}
