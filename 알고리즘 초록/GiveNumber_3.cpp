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
void GiveNumber(Short (*arrangements)[COLUMNS]);
void Output(Short (*arrangements)[COLUMNS]);

int main(int argc, char *argv[]){
	Short arrangements[ROWS][COLUMNS];

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
void GiveNumber(Short (*arrangements)[COLUMNS]){
 UShort halfRow;
 UShort halfColumn;
 Short number;
 Short i;
 Short j;
 halfRow = ROWS / 2;
 halfColumn = COLUMNS / 2;
 for (i = halfRow; i >= 0; i--) {
  number = i + 1;
  for (j = halfColumn; j >= 0; j--) {
   arrangements[i][j] = number;
   number--;
  }
  number = i;
  for (j = halfColumn + 1; j < COLUMNS; j++) {
   arrangements[i][j] = number;
   number--;
  }
 }
 for (i = halfRow + 1; i < ROWS; i++) {
  number = ROWS - i;
  for (j = halfColumn; j >= 0; j--) {
   arrangements[i][j] = number;
   number--;
  }
  number = ROWS - (i + 1);
  for (j = halfColumn + 1; j < COLUMNS; j++) {
   arrangements[i][j] = number;
   number--;
  }
 }
 for (i = 0; i < ROWS; i++) {
  for (j = 0; j < COLUMNS; j++) {
   if (arrangements[i][j] < 0) {
    arrangements[i][j] = 0;
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

void Output(Short (*arrangements)[COLUMNS]){
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

