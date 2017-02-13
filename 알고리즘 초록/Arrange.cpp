//Arrange.c
/**********************************************************************************************
파일  명칭: Arrange
기		능: 10개의 숫자를 읽어 오름차순으로 정렬한 후, 정렬 하기 전의 숫자들과
			정렬한 후의 숫자들을 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 24일
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*beforeNumbers));
void Arrange(UShort (*beforeNumbers), UShort (*afterNumbers));
void Output(UShort (*beforeNumbers), UShort (*afterNumbers));

int main(int argc, char *argv[]){
	UShort beforeNumbers[MAX];
	UShort afterNumbers[MAX];
	

	Input(beforeNumbers);
	Arrange(beforeNumbers,afterNumbers);
	Output(beforeNumbers,afterNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 정렬 전 수들을 입력받는다.
입		력: 없음	
출		력: 정렬 전 수들
*************************************************************************/
void Input(UShort (*beforeNumbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 키를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", beforeNumbers+i);
	}
	
}


/****************************************************************************
파일  명칭: Arrange
기		능: 정렬 전 수들을 입력받아 오름차순으로 정렬한 정렬 후 수들을 구한다 
입		력: 정렬 전 수들
출		력: 정렬 전 수들, 정렬 후 수들
*****************************************************************************/
void Arrange(UShort (*beforeNumbers), UShort (*afterNumbers)){
	UShort temp;
	UShort  i;
	UShort  j;

	for(i=0;i<MAX;i++){afterNumbers[i] = beforeNumbers[i];}


	for(i =0;i<MAX;i++){
		for(j=i;j<MAX;j++){
			if(afterNumbers[j] < afterNumbers[i]){
				temp = afterNumbers[i];
				afterNumbers[i]= afterNumbers[j];
				afterNumbers[j] = temp;
			}
		}
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 정렬 전 수들, 정렬 후 수들를 출력한다.
입		력: 정렬 전 수들, 정렬 후 수들
출		력: 없음.
**************************************************************************/

void Output(UShort (*beforeNumbers), UShort (*afterNumbers)){
	UShort i;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){
		printf(" %d ",beforeNumbers[i]);
	}
	printf("\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){
		printf(" %d ",afterNumbers[i]);
	}

}

