//MakeBestNumber.c
/*************************************************************************************
파일  명칭: MakeBestNumber 
기		능: 수를 입력받아 가장 큰 수를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 5일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong MakeBestNumber(ULong number);
void Output(ULong pain);

int main(int argc, char *argv[]){
	ULong number;
	ULong makeBestNumber;

	number = Input();
	makeBestNumber = MakeBestNumber(number);
	Output(makeBestNumber);
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
파일  명칭: MakeBestNumber 
기		능: 가장 큰 수를 구한다
입		력: 수
출		력: 가장 큰 수
*************************************************************************/
ULong MakeBestNumber (ULong number){
	ULong bestNumber = 0;
	ULong portion = 0;
	ULong positionValue;
	ULong bestPositionValue;
	ULong location;
	ULong minusNumber = 0;
	ULong remainder ;

	remainder = number;
	while(bestNumber < number){
		remainder = remainder - minusNumber;
		portion = remainder;
		bestPositionValue  = 0;
		location = 1;
		minusNumber = 0;
		while(portion > 0){

			positionValue = portion % 10;
			if(positionValue > bestPositionValue){
				bestPositionValue = positionValue;
				minusNumber = bestPositionValue * location;
			}
			portion /= 10;
			location *= 10;
		}
		bestNumber = (bestNumber * 10) + bestPositionValue;
	}
	return bestNumber;
	
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 가장 큰 수를 출력한다.
입		력: 가장 큰 수
출		력: 없음.
**************************************************************************/

void Output(ULong makeBestNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 가장 큰 수 : %d ", makeBestNumber);	
}
