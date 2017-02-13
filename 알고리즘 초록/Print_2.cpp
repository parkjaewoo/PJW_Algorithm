//Print.c
/**********************************************************************************************
����  ��Ī: Print
��		��: 2���� �迭�� ������ ���� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 2�� 9��
**********************************************************************************************/
#include <stdio.h>
#define ROWS 5
#define COLUMNS 5
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Print(char (*patterns)[COLUMNS]);
void Output(char (*patterns)[COLUMNS]);

int main(int argc, char *argv[]){
	char patterns[ROWS][COLUMNS];

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
void Print(char (*patterns)[COLUMNS]){
	UShort i;
	UShort j;
	UShort remainder;

	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			remainder = (i+j)%2;
			if(remainder == 0){patterns[i][j] = '*';}
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

void Output(char (*patterns)[COLUMNS]){
	UShort i;
	UShort j;

	printf("\n=====================================================\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			printf("%c",patterns[i][j]);
	}
	printf("\n");
	}
	printf("\n=====================================================\n");
}

