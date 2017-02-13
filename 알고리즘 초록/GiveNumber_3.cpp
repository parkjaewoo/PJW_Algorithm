//GiveNumber.c
/**********************************************************************************************
파일  명칭: GiveNumber
기		능: 2차원 배열에 숫자를 저장하여 출력한다
작  성  자: 박재우
작성  일자: 2017년 2월 9일
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
파일  명칭: GiveNumber
기		능: 배열에 숫자를 저장하여 출력한다.
입		력: 없음
출		력: 배열들
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
파일  명칭: Output
기		능: 모니터에 배열들을 출력한다.
입		력: 배열들
출		력: 없음.
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

