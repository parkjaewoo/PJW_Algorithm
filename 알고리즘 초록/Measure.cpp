//Measure.c
/**********************************************************************************************
파일  명칭: Measure
기		능: 일곱명의 키가 입력으로 주어진다. 이 중에서 가장 큰 키와 두번째로 큰 키를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 23일
**********************************************************************************************/
#include <stdio.h>
#define MAX 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*heights));
void Measure(UShort (*heights), UShort *tallest,UShort *secondTall);
void Output(UShort tallest,UShort secondTall);

int main(int argc, char *argv[]){
	UShort heights[MAX];
	UShort tallest;
	UShort secondTall;


	Input(heights);
	Measure(heights,&tallest, &secondTall);
	Output(tallest, secondTall);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 키들을 입력받는다.
입		력: 없음	
출		력: 키들
*************************************************************************/
void Input(UShort (*heights)){
	UShort i;
	printf("\n\n\n\n\n\t\t일곱 번 키를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", heights+i);
	}
	
}


/************************************************************************
파일  명칭: Measure
기		능: 키들을 입력받아 가장 큰 키와 두 번째로 큰 키를 구한다. 
입		력: 키들
출		력: 가장 큰 키, 두번 째로 큰 키
*************************************************************************/
void Measure(UShort (*heights), UShort *tallest,UShort *secondTall){
	UShort temp;
	UShort  i;
	UShort  j;

	for(i=0;i<MAX-1;i++){
		for(j=i+1;j<MAX;j++){
			if(heights[j] > heights[i]){
				temp = heights[i];
				heights[i] = heights[j];
				heights[j] = temp;
			}
		}
	}
	*tallest = heights[0];
	*secondTall = heights[1];

}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 가장 큰 키, 두번 째로 큰 키를 출력한다.
입		력: 가장 큰 키, 두번 째로 큰 키
출		력: 없음.
**************************************************************************/

void Output(UShort tallest,UShort secondTall){
	printf("\t\t=====================================================\n");
	printf("\t\t%d \t%d",tallest,secondTall);
}

