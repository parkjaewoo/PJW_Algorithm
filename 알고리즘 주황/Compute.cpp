//Compute.c
/*************************************************************************************
파일  명칭: Compute
기		능: 돈을 입력받으면 거스름돈을 계산한다. 거스름돈으로 동전을 
			어떻게 해서 줘야 하는 지 계산한다.
작  성  자: 박재우
작성  일자: 2017년 1월 10일
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *money);
void Compute(Long money,Long *fiveHunderdWon,Long *hundredWon, Long *fiftyWon, Long *tenWon);
void Output(Long fiveHundredWon,Long hundredWon, Long fiftyWon, Long tenWon );

int main(int argc, char *argv[]){
	Long money;
	Long fiftyHundredWon;
	Long hundredWon;
	Long fiftyWon;
	Long tenWon;


	Input(&money);
	Compute(money,&fiftyHundredWon,&hundredWon, &fiftyWon, &tenWon);
	Output(fiftyHundredWon,hundredWon, fiftyWon, tenWon);
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

void Input(Long *money){
	printf("\n\n\n\n\n\t\t1000원 이하의 물건 값을 입력하시오! ");
	scanf("%d", money);
}

/************************************************************************
파일  명칭: Compute
기		능: 거스름돈에 맞는 동전 수를 계산한다
입		력: 돈
출		력: 오백원,백원,오십원,십원
*************************************************************************/
void Compute(Long money,Long *fiveHundredWon,Long *hundredWon, Long *fiftyWon, Long *tenWon){
	Long change = 1000;
	
	change -= money;
	*fiveHundredWon = change / 500;
	change %= 500;
	*hundredWon = change / 100;
	change %= 100;
	*fiftyWon = change / 50;
	change %= 50;
	*tenWon = change / 10;
	change %= 10;
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 동전들를 출력한다.
입		력: 오백원, 백원,오십원,십원 
출		력: 없음.
**************************************************************************/

void Output(Long fiveHundredWon,Long hundredWon, Long fiftyWon, Long tenWon ){
		printf("\t\t=====================================================\n");
		printf("\t\t\t오백원: %d   백원: %d  오십원: %d  십원: %d \n", fiveHundredWon,hundredWon,fiftyWon,tenWon);

}
