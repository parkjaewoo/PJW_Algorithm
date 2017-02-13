//GiveNumber.c
/**********************************************************************************************
����  ��Ī: GiveNumber
��		��: 2���� �迭�� ���ڸ� �����Ͽ� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 2�� 9��
**********************************************************************************************/
#include <stdio.h>
#define ROWS 5
#define COLUMNS 5
typedef unsigned short int UShort;
typedef signed short int Short;


int main(int argc, char *argv[]);
void GiveNumber(UShort (*arrangements)[COLUMNS]);
void Output(UShort (*arrangements)[COLUMNS]);

int main(int argc, char *argv[]){
	UShort arrangements[ROWS][COLUMNS];

	GiveNumber(arrangements);
	Output(arrangements);
	printf("\n");
	getchar();
	getchar();
	return 0;
}



/************************************************************************
����  ��Ī: GiveNumber
��		��: �迭�� ���ڸ� �����Ͽ� ����Ѵ�.
��		��: ����
��		��: �迭��
*************************************************************************/
void GiveNumber(UShort (*arrangements)[COLUMNS]){
	UShort i;
	Short j;
	UShort number = 1;
	UShort remainder;

	for (i = 0; i < ROWS; i++) {
	 remainder = i % 2;
	if (remainder == 0) {
		 for (j = 0; j < COLUMNS; j++) {
			  arrangements[i][j] = number;
			  number++;
	 }
  }
	else {
		for (j = COLUMNS - 1; j >= 0; j--) {
			arrangements[i][j] = number;
			number++;
   }
  }
 }
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �迭���� ����Ѵ�.
��		��: �迭��
��		��: ����.
**************************************************************************/

void Output(UShort (*arrangements)[COLUMNS]){
	UShort i;
	UShort j;

	printf("\n=====================================================\n");
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLUMNS;j++){
			printf("%3d",arrangements[i][j]);
	}
	printf("\n");
	}
	printf("\n=====================================================\n");
}

