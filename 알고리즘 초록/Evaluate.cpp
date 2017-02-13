//Evaluate.c
/**********************************************************************************************
파일  명칭: Evaluate
기		능: 열 명의 점수를 읽어 점수의 평균과 각 학생의 점수와 평균과의 차를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 31일
**********************************************************************************************/
#include <stdio.h>
#define STUDENTS 10
typedef unsigned short int UShort;
typedef short int Short;


int main(int argc, char *argv[]);
void Input(UShort (*scores));
void Evaluate(UShort (*scores), Short (*gaps),UShort *average);
void Output(UShort (*scores), Short (*gaps), UShort average);

int main(int argc, char *argv[]){
	UShort scores[STUDENTS];
	Short gaps[STUDENTS];
	UShort average;


	Input(scores);
	Evaluate(scores,gaps, &average);
	Output(scores,gaps,average);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 점수들을 입력받는다.
입		력: 없음	
출		력: 점수들
*************************************************************************/
void Input(UShort (*scores)){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 점수들을 입력하십시오. : ");
	for(i=0;i<STUDENTS;i++){
		scanf_s("%hu", scores+i);
	}
}


/************************************************************************
파일  명칭: Evaluate
기		능: 점수들을 입력받아 평균과 차이들을 구한다.
입		력: 점수들
출		력: 평균,차이들,점수들
*************************************************************************/
void Evaluate(UShort (*scores), Short (*gaps),UShort *average){
	UShort i;
	*average;
	UShort sum=0;

	for(i=0;i<STUDENTS;i++){sum += scores[i];}
	*average = sum / STUDENTS;
	for(i=0;i<STUDENTS;i++){gaps[i] = scores[i] - *average;}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 평균,차이들,점수들을 출력한다.
입		력: 평균,차이들,점수들
출		력: 없음.
**************************************************************************/

void Output(UShort (*scores), Short (*gaps), UShort average){
	UShort i;

	printf("\t\t=====================================================\n");
	printf("\t\t점수 차\n");
	printf("\t\t-----------------------------------------------------\n");
	for(i=0; i<STUDENTS;i++){printf("\t\t %d \t %d\n",scores[i], gaps[i]);}
	printf("\t\t=====================================================\n");
	printf("\t\t평균 : %d\n",average);
}

