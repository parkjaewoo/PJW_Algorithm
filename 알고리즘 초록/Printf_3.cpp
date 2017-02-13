//Print.c
/**********************************************************************************************
파일  명칭: Print
기		능: 2차원 배열에 패턴을 찍어내어 출력한다
작  성  자: 박재우
작성  일자: 2017년 2월 4일
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
파일  명칭: Patterns
기		능: 패턴을 저장하여 출력한다
입		력: 없음
출		력: 패턴들
*************************************************************************/
void Print(char (*patterns)[MAX]){
	UShort i;
	UShort j;
	UShort k = MAX;
	UShort l;
	UShort median;

	median = MAX/2 + MAX%2;

	for(i=0;i<MAX;i++){
		for(j=i;j<k;j++){
			patterns[i][j] = '*';
		}
		k--;
	}
	k = median+1;
	l = median-2;
	for(i=median;i<MAX;i++){
		for(j=l;j<k;j++){
			patterns[i][j] = '*'; 
		}
		l--;
		k++;
	}

	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(patterns[i][j] != '*'){patterns[i][j] = ' ';}
		}
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 개인 득점, 순위들을 출력한다.
입		력: 개인 득점, 순위들
출		력: 없음.
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


