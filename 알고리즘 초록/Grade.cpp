//Grade.c
/**********************************************************************************************
파일  명칭: Grade
기		능: 10명의 점수가 입력된다. 1명당 7개의 점수들이 있는데, 가장 높은 점수와 
			가장 낮은 점수를 제외한 개인 득점을 구한다. 
			모든 선수들의 개인 득점이 구해지면, 순위를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 31일
**********************************************************************************************/
#include <stdio.h>
#define PLAYERS 10
#define JUDGES 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*scores)[JUDGES]);
void Grade(UShort (*scores)[JUDGES],UShort (*personalScores), UShort (*ranks));
void Output(UShort (*personalScores), UShort (*ranks));

int main(int argc, char *argv[]){
	UShort scores[PLAYERS][JUDGES];
	UShort personalScores[PLAYERS];
	UShort ranks[PLAYERS];


	Input(scores);
	Grade(scores,personalScores,ranks);
	Output(personalScores,ranks);
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
void Input(UShort (*scores)[JUDGES]){
	UShort i;
	UShort j;

	printf("\n\n\n\n\n\t선수당 일곱 번 점수를 입력하십시오. :   ");
	for(i=0;i<PLAYERS;i++){
		for(j=0;j<JUDGES;j++){
			scanf_s("%hu", scores[i]+j);
			printf("\t\t\t");
		}
	}
}


/************************************************************************
파일  명칭: Grade
기		능: 점수들을 입력받아 개인 득점과 순위들을 구한다
입		력: 점수들
출		력: 개인 득점, 순위들
*************************************************************************/
void Grade(UShort (*scores)[JUDGES],UShort (*personalScores), UShort (*ranks)){
	UShort temp;
	UShort i;
	UShort j;
	UShort k;
	UShort rank;
	UShort sum;

	for(i=0;i<PLAYERS;i++){
		for(j=0;j<JUDGES-1;j++){
			for(k=j+1;k<JUDGES;k++){
				if(scores[i][j] < scores[i][k]){
					temp = scores[i][j];
					scores[i][j] = scores[i][k];
					scores[i][k] = temp;
				}
			}
		}
	}

	for(i=0;i<PLAYERS;i++){
		sum = 0;
		for(j=1;j<JUDGES-1;j++){sum += scores[i][j];}
		personalScores[i] = sum;
	}

	for(i=0;i<PLAYERS;i++){
		rank = 1;
		for(j = 0; j<PLAYERS; j++){
			if(personalScores[i] < personalScores[j]){rank++;}
		}
		ranks[i] = rank;
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 개인 득점, 순위들을 출력한다.
입		력: 개인 득점, 순위들
출		력: 없음.
**************************************************************************/

void Output(UShort (*personalScores), UShort (*ranks)){
	UShort i;

	printf("\n\t\t=====================================================\n");
	printf("\t\t득점 \t 순위\n");
	printf("\t\t-----------------------------------------------------\n");
	for(i=0;i<PLAYERS;i++){
		printf("\t\t%d \t %d\n", personalScores[i],ranks[i]);
	}
}

