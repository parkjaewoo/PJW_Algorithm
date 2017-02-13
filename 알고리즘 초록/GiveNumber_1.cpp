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
	UShort j;
	UShort iRemainder;
	UShort jRemainder;
	UShort number;
	UShort iQuotient;
	UShort jQuotient;

	for(i=0;i<ROWS;i++){
		iQuotient = i/2;
		iRemainder = i - iQuotient*2;
		//iRemainder = i % 2;
		if(iRemainder == 0){
			number = (i+1)*(i+1);
			for(j=0;j<(i+1);j++){
				arrangements[i][j] = number;
				number--;
			}
		}
		else{
			number = i * i + 1;
			for(j=0;j<(i+1);j++){
				arrangements[i][j] = number;
				number++;
			}
		}
	}

	for(j=1;j<COLUMNS;j++){
		jQuotient = j/2;
		jRemainder = j - jQuotient * 2;
		//jRemainder = j % 2;
		if(jRemainder == 1){
			number = (j+1)*(j+1);
			for(i=0;i<j;i++){
				arrangements[i][j] = number;
				number--;
			}
		}
		else{
			number = j*j+1;
			for(i=0;i<j;i++){
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

