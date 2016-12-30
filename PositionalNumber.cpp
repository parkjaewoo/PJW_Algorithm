//PositionalNumber.c
/*************************************************************************************
파일  명칭: PositionalNumber
기		능: 수를 입력받아 각 자리수의 합을 구한다.
작  성  자: 박재우
작성  일자: 2016년 12월 29일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong PositionalNumber(ULong number);
void Output(ULong number, ULong sumPositionNumber);

int main(int argc, char *argv[]){
	ULong number;
	ULong sumPositionNumber;

	number = Input();
	sumPositionNumber = PositionalNumber(number);
	Output(number,sumPositionNumber);
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

ULong Input(){
	ULong number ;
	printf("\n\n\n\n\n\t\t수를 입력하십시오! ");
	scanf("%d", &number);
	return number;
}

/************************************************************************
파일  명칭: PositionalNumber
기		능: 각 자리수의 합을 구한다
입		력: 수
출		력: 자릿수 합
*************************************************************************/
ULong PositionalNumber(ULong number){
	ULong sumPositionalNumber = 0;
	ULong position = 10;
	ULong positionalValue = 0;
	ULong remainder;

	//positionalValue = number - (number/position)* position;
	//positionalValue = number % position;
	//sumPositionalNumber += positionalValue;
	remainder = number;
	while(remainder != 0){
		//position *= 10;
		//positionalValue = (number - (number/position)*position)/(position/10);
		positionalValue = remainder % position;
		sumPositionalNumber += positionalValue;
		remainder /= 10;
	}
	return sumPositionalNumber;
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 를 출력한다.
입		력: 자리수 합.수
출		력: 없음.
**************************************************************************/

void Output(ULong number, ULong sumPositionNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t %d의 각 자리수 합은 %d 입니다 ", number, sumPositionNumber);	
}