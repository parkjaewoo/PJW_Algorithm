//Print.c
/**********************************************************************************************
파일  명칭: Print
기		능: 2차원 배열에 패턴을 찍어내어 출력한다
작  성  자: 박재우
작성  일자: 2017년 2월 9일
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
파일  명칭: Patterns
기		능: 패턴을 저장하여 출력한다
입		력: 없음
출		력: 패턴들
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
파일  명칭: Output
기		능: 모니터에 개인 득점, 순위들을 출력한다.
입		력: 개인 득점, 순위들
출		력: 없음.
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

