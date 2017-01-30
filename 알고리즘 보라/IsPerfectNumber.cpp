//IsPerfectNumber.c
/************************************************************************
파일  명칭: IsPerfectNumber.c
기		능: 수를 입력받아 완전수인지를 판별한다.
작  성  자: 박재우
작성  일자: 2016년 12월 27일
*************************************************************************/
#include <stdio.h>
typedef enum _boolean {FALSE = 0, TRUE = 1} Boolean;
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
Boolean IsPerfectNumber(ULong number);
void Output(ULong number,Boolean isPerfectNumber);

int main(int argc, char *argv[]){
	ULong number;
	Boolean isPerfectNumber;

	number = Input();
	isPerfectNumber = IsPerfectNumber(number);
	Output(number, isPerfectNumber);
	printf("\n");
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 수
*************************************************************************/

ULong Input(){
	ULong number ;
	printf("\n\n\n\n\n\t\t2이상 수를 입력하십시오! ");
	scanf("%d", &number);
	return number;
}

/************************************************************************
파일  명칭: IsPerfectNumber
기		능: 수를 입력받아 완전수여부를 출력한다.
입		력: 수	
출		력: 완전수 여부
*************************************************************************/

Boolean IsPerfectNumber(ULong number){
	Boolean isPerfectNumber = FALSE;
	int remainder;
	int factor=0;
	int sumDivisor=0;

	for(ULong i = 1; i < number; i++){
		remainder = number;
		if(remainder%i == 0) sumDivisor+=i;
	}
	if(number == sumDivisor ) isPerfectNumber = TRUE;
	return isPerfectNumber;
}

/************************************************************************
파일  명칭: IsPerfectNumber
기		능: 모니터에 완전수인지 아닌지를 출력한다.
입		력: 수, 완전수 여부
출		력: 없음.
*************************************************************************/

void Output(ULong number, Boolean isPerfectNumber){
	printf("\t\t=====================================================\n");
	isPerfectNumber == TRUE ? printf("\t\t%d는 완전수 입니다.\n", number) : printf("\t\t%d는 완전수가 아닙니다.\n", number);
}