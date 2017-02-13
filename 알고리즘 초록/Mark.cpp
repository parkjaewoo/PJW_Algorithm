//Mark.c
/**********************************************************************************************
파일  명칭: Mark
기		능: 학생 10명의 총점이 번호 순으로 정렬되어 입력될 때, 개인 석차를 구하여 
			번호, 총점, 석차 순으로 함께 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 23일
**********************************************************************************************/
#include <stdio.h>
#define STUDENTS 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*totalScores));
void Mark(UShort (*totalScores), UShort (*numbers),UShort (*ranks));
void Output(UShort (*totalScores), UShort (*numbers),UShort (*ranks));

int main(int argc, char *argv[]){
	UShort totalScores[STUDENTS];
	UShort numbers[STUDENTS];
	UShort ranks[STUDENTS];


	Input(totalScores);
	Mark(totalScores,numbers, ranks);
	Output(totalScores,numbers, ranks);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 촏점들을 입력받는다.
입		력: 없음	
출		력: 총점들
*************************************************************************/
void Input(UShort (*totalScores)){
	UShort i;
	printf("\n\n\n\n\n\t열 번 총점들를 입력하십시오. : ");
	for(i=0;i<STUDENTS;i++){
		scanf_s("%hu", totalScores+i);
	}
	printf("\n");
	printf("\n");
}


/************************************************************************
파일  명칭: Mark
기		능: 총점들을 입력받아 등수를 매긴다. 
입		력: 총점들
출		력: 번호들, 총점들, 등수들
*************************************************************************/
void Mark(UShort (*totalScores), UShort (*numbers),UShort (*ranks)){
	UShort  i;
	UShort  j;
	UShort rank;

	for(i=0;i<STUDENTS;i++)
	{
		rank = 1;
		numbers[i] = (i+1);
		for(j=0;j<STUDENTS;j++){
			if(totalScores[i] < totalScores[j]){rank++;}
		}
		ranks[i] = rank;
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 번호들, 총점들, 등수들을 출력한다.
입		력: 번호들, 총점들, 등수들
출		력: 없음.
**************************************************************************/

void Output(UShort (*totalScores), UShort (*numbers),UShort (*ranks)){
	UShort i;
	printf("\t 번호 \t 총점 \t 석차\n");
	printf("\t=====================================================\n");
	printf("\t=====================================================\n");
	for(i=0; i<STUDENTS;i++){
		printf("\t %d \t %d \t %d\n",numbers[i],totalScores[i],ranks[i]); 
	}
}

