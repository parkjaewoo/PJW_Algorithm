//FindNumber.c
/*************************************************************************************
파일  명칭: FindNumber
기		능: 강아지와 병아리의 합과 다리의 수를 입력받아 강아지와
			병아리가 각각 몇 마리 씩인지 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 10일
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *sumAnimal,Long *sumLeg);
void FindNumber(Long sumAnimal,Long sumLeg,Long *chickNumber,Long *popNumber, Long *legNumber);
void Output( Long chickNumber,Long popNumber);

int main(int argc, char *argv[]){
	Long sumAnimal;
	Long sumLeg;
	Long popNumber;
	Long chickNumber;
	Long legNumber;


	Input(&sumAnimal, &sumLeg);
	FindNumber(sumAnimal,sumLeg,&chickNumber,&popNumber, &legNumber);
	Output(chickNumber,popNumber);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 
*************************************************************************/

void Input(Long *sumAnimal,Long *sumLeg){
	printf("\n\n\n\n\n\t\t동물의 합과 다리의 합을 입력하시오! ");
	scanf("%d %d", sumAnimal,sumLeg);
}

/************************************************************************
파일  명칭: FindNumber
기		능: 강아지 수와 병아리 수를 구한다
입		력: 동물의 합, 다리의 합
출		력: 병아리 수, 강아지 수
*************************************************************************/
void FindNumber(Long sumAnimal,Long sumLeg,Long *chickNumber,Long *popNumber, Long *legNumber){
	*legNumber = sumAnimal * 2;
	*popNumber = 0;
	*chickNumber = sumAnimal;
	while(*legNumber < sumLeg){
		*chickNumber = *chickNumber - 1;
		*popNumber = *popNumber + 1;
		*legNumber = (*chickNumber * 2) + (*popNumber * 4);
	}
	if(*legNumber != sumLeg || *chickNumber < 0){ 
		*chickNumber = 0;
		*popNumber = 0;
	}
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 병아리 수, 강아지 수를 출력한다.
입		력: 병아리 수, 강아지 수
출		력: 없음.
**************************************************************************/

void Output( Long chickNumber,Long popNumber){
		printf("\t\t=====================================================\n");
		printf("\t\t\t%d %d\n", popNumber,chickNumber);

}
