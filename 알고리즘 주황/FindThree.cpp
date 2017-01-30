//FindThree.c
/******************************************************************************************
파일  명칭: FindThree
기		능: 자연수 N을 입력받아 1부터 N 사이의 숫자를 출력한다. 단, 1부터 N 사이의
			숫자중에서 3의 배수와 3 이 들어가는 숫자에 대해서는 해당 숫자 대신에
			"clap" 이라는 문자를 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 21일
********************************************************************************************/
#include <stdio.h>
#define MAX 1000
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort *number);
void FindThree(UShort number, UShort (*filteringNumbers));
void Output(UShort number, UShort (*filteringNumbers));

int main(int argc, char *argv[]){
	UShort number;
	UShort filteringNumbers[MAX];


	Input(&number);
	FindThree(number,filteringNumbers);
	Output(number,filteringNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 수
*************************************************************************/
void Input(UShort *number){

	printf("\n\n\n\n\n\t\t수를 입력하십시오. : ");
	scanf_s("%hu", number);
	
}


/************************************************************************
파일  명칭: FindThree
기		능: 수를 입력받아 걸러진 수들을 구한다. 
입		력: 수
출		력: 수,걸러진 수들  
*************************************************************************/
void FindThree(UShort number, UShort (*filteringNumbers)){
	UShort remainder;
	UShort i = 0;
	UShort one;
	UShort ten;
	UShort hundred;

	while(i<=number){
		filteringNumbers[i] = i;
		remainder = i % 3;
		one = i % 10;
		ten = (i%100)/10;
		hundred = i/100;
		if(remainder == 0 || one == 3 || ten == 3 || hundred == 3) {filteringNumbers[i] = 0;}  
		i++;
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 걸러진 수들를 출력한다.
입		력: 수,걸러진 수들 
출		력: 없음.
**************************************************************************/

void Output(UShort number, UShort (*filteringNumbers)){
	UShort i=1;
	printf("\t\t=====================================================\n");
	while(i<=number){
		if(filteringNumbers[i] == 0){printf(" clap ");}
		else{printf(" %d ", filteringNumbers[i]);}
		i++;
	}
}

