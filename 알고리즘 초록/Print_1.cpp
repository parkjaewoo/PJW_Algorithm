//Print.c
/**********************************************************************************************
����  ��Ī: Print
��		��: 2���� �迭�� ������ ���� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 2�� 4��
**********************************************************************************************/
#include <stdio.h>
#define MAX 5
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Print(char (*patterns)[MAX]);
void Output(char (*patterns)[MAX]);

int main(int argc, char *argv[]){
	char patterns[MAX][MAX];

	Print(patterns);
	Output(patterns);
	printf("\n");
	getchar();
	getchar();
	return 0;
}



/************************************************************************
����  ��Ī: Patterns
��		��: ������ �����Ͽ� ����Ѵ�
��		��: ����
��		��: ���ϵ�
*************************************************************************/
void Print(char (*patterns)[MAX]){
	UShort i;
	UShort j=MAX;

	for(i = 0; i<MAX; i++){
		for(j=0;j<MAX;j++){
			if(i==j || i+j == MAX-1){patterns[i][j] = '*';}
			else{patterns[i][j] = ' ';}
		}
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ����, �������� ����Ѵ�.
��		��: ���� ����, ������
��		��: ����.
**************************************************************************/

void Output(char (*patterns)[MAX]){
	UShort i;
	UShort j;

	printf("\n=====================================================\n");
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			printf("%c",patterns[i][j]);
	}
	printf("\n");
	}
	printf("\n=====================================================\n");
}

