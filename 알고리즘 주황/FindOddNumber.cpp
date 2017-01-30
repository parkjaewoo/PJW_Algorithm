//FindOddNumber.c
/******************************************************************************************
파일  명칭: FindOddNumber
기		능: 7개의 자연수가 주어질 때, 이들 중 홀수인 자연수들을 모두 골라
			그 합을 구하고, 고른 홀수중 최소값을 찾는다.
작  성  자: 박재우
작성  일자: 2017년 1월 21일
********************************************************************************************/
#include <stdio.h>
#define MAX 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers));
void FindOddNumber(UShort (*numbers), UShort *sumOddNumber, UShort *minimumOddNumber);
void Output(UShort sumOddNumber, UShort minumumOddNumber);

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort sumOddNumber;
	UShort minimumOddNumber;


	Input(numbers);
	FindOddNumber(numbers,&sumOddNumber,&minimumOddNumber);
	Output(sumOddNumber,minimumOddNumber);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 수들
*************************************************************************/
void Input(UShort (*numbers)){
	UShort i;

	printf("\n\n\n\n\n\t\t일곱 번 수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers + i);
	}
	
}


/************************************************************************
파일  명칭: FindOddNumber
기		능: 수들을 입력받아 홀수의 합과, 최소값 홀수를 구한다. 
입		력: 수들
출		력: 홀수의 합, 최소값 홀수  
*************************************************************************/
void FindOddNumber(UShort (*numbers), UShort *sumOddNumber, UShort *minimumOddNumber) {
	UShort remainder;
	UShort i;
	*sumOddNumber = 0;
	*minimumOddNumber = 0;

	for(i = 0; i<MAX;i++){
		remainder = numbers[i]%2;
		if(remainder == 1){
			*sumOddNumber += numbers[i];
			if(numbers[i] < *minimumOddNumber || *minimumOddNumber == 0) {*minimumOddNumber = numbers[i];}
		}
	}


}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 홍수의 합과 최소값 홀수를 출력한다.
입		력: 홍수의 합, 최소값 홀수 
출		력: 없음.
**************************************************************************/

void Output(UShort sumOddNumber, UShort minimumOddNumber){
	printf("\t\t=====================================================\n");
	if(sumOddNumber == 0){
		printf("\t\t -1");
	}
	else{
		printf("\t\t%d \t\t%d", sumOddNumber, minimumOddNumber); 
	}
	
}

