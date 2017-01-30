//Inform.c
/******************************************************************************************
파일  명칭: Inform
기		능: 10개의 점수를 입력받아 순서대로 점수를 더해 100점에 최대한 가까운 점수를 구한다.
			(두 가지 답이 나올 때는 더 높은 점수를 선택한다.)
작  성  자: 박재우
작성  일자: 2017년 1월 21일
********************************************************************************************/
#include <stdio.h>
#define MAX 10
#define TARGETSCORE 100
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*scores));
void Inform(UShort (*scores), UShort *getScore);
void Output(UShort getScore);

int main(int argc, char *argv[]){
	UShort scores[MAX];
	UShort getScore;


	Input(scores);
	Inform(scores, &getScore);
	Output(getScore);
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
void Input(UShort *scores){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 점수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", scores+i);
	}
	
}


/************************************************************************
파일  명칭: Inform
기		능: 점수들을 입력받아 얻을 점수를 구한다. 
입		력: 점수들
출		력: 얻을 점수 
*************************************************************************/
void Inform(UShort (*scores), UShort *getScore){
	UShort lowerScore;
	UShort higherScore;
	UShort i=0;
	*getScore = 0;

	while(*getScore < TARGETSCORE && i<=MAX){
		*getScore += scores[i];
		i++;
	}
	if(*getScore > TARGETSCORE){
		lowerScore = TARGETSCORE - (*getScore - scores[i-1]);
		higherScore = *getScore - TARGETSCORE;
		if(lowerScore != higherScore){ *getScore -= scores[i-1];}
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 얻을 점수를 출력한다.
입		력: 얻을 점수
출		력: 없음.
**************************************************************************/

void Output(UShort getScore){
	printf("\t\t=====================================================\n");
	printf("\t\t%d",getScore);
}

