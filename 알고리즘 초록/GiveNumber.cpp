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
파일  명칭: GiveNumber
기		능: 배열에 숫자를 저장하여 출력한다.
입		력: 없음
출		력: 배열들
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
파일  명칭: Output
기		능: 모니터에 배열들을 출력한다.
입		력: 배열들
출		력: 없음.
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

