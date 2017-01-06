//PailndNumber.c
/*************************************************************************************
파일  명칭: PailndNumber
기		능: 수를 입력받아 회문수를 구한다
작  성  자: 박재우
작성  일자: 2017년 1월 4일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong PalindromeNumber(ULong number);
void Output(ULong pain);

int main(int argc, char *argv[]){
	ULong number;
	ULong palindromeNumber;

	number = Input();
	palindromeNumber = PalindromeNumber(number);
	Output(palindromeNumber);
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
파일  명칭: PalindromeNumber
기		능: 회문수를 구한다
입		력: 수
출		력: 회문수
*************************************************************************/
ULong PalindromeNumber(ULong number){
	ULong palindromeNumber ;
	ULong portion;
	ULong positionValue;
	ULong reverseNumber = 0;
	
	palindromeNumber = number;

	while(palindromeNumber != reverseNumber){
		palindromeNumber += reverseNumber;
		portion = palindromeNumber;
		reverseNumber = 0;
		while(portion > 0){
			positionValue = portion % 10;
			reverseNumber = (reverseNumber*10) + positionValue;
			portion /= 10;
		}
	}

	return palindromeNumber;
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 회문수를 출력한다.
입		력: 회문수
출		력: 없음.
**************************************************************************/

void Output(ULong palindromeNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 회문수 : %d ", palindromeNumber);	
}
