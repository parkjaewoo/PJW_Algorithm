//ReverseNumber.c
/*************************************************************************************
파일  명칭: ReverseNumber
기		능: 수를 입력받아 자리수를 뒤집어 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 2일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong ReverseNumber(ULong number);
void Output(ULong reverseNumber);

int main(int argc, char *argv[]){
	ULong number;
	ULong reverseNumber;

	number = Input();
	reverseNumber = ReverseNumber(number);
	Output(reverseNumber);
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
파일  명칭: ReverseNumber
기		능: 각 자리수의 합을 구한다
입		력: 수
출		력: 뒤집은 수
*************************************************************************/
ULong ReverseNumber(ULong number){
	ULong reverseNumber = 0;
	ULong positionValue = 0;
	ULong remainder;
	
	remainder = number;
	while(remainder>0){
		positionValue = remainder -(remainder / 10) * 10;
		reverseNumber = (reverseNumber*10) + positionValue;
		remainder /= 10;
	}
	return reverseNumber;
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 뒤집은 수를 출력한다.
입		력: 뒤집은 수.
출		력: 없음.
**************************************************************************/

void Output(ULong reverseNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 뒤집은 수 : %d ", reverseNumber);	
}
