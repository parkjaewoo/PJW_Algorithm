//Count.c
/*************************************************************************************
파일  명칭: Count
기		능: 정수들이 입력될 때, 그 정수를 읽어 양의 정수 개수, 음의 정수 개수를
			구하고, 양의 정수중 짝수 개수, 홀수 개수를 구하여 출력하자. 
작  성  자: 박재우
작성  일자: 2017년 1월 16일
*************************************************************************************/
#include <stdio.h>
#define MAX 100
typedef signed long int Long;
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(Long (*numbers));
void Count(Long (*numbers),ULong *positiveNumber,ULong *negativeNumber,ULong *evenNumber, ULong *oddNumber);
void Output(ULong positiveNumber,ULong negativeNumber,ULong evenNumber, ULong oddNumber);

int main(int argc, char *argv[]){
	Long numbers[MAX];
	ULong positiveNumber;
	ULong negativeNumber;
	ULong evenNumber;
	ULong oddNumber;


	Input(numbers);
	Count(numbers,&positiveNumber,&negativeNumber,&evenNumber,&oddNumber);
	Output(positiveNumber,negativeNumber,evenNumber,oddNumber);
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

void Input(Long (*numbers)){
	ULong i;
	printf("\n\n\n\n\n\t\t여섯 번 수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers + i);
	}
}

/************************************************************************
파일  명칭: Count
기		능: 양의 정수 개수, 음의 정수 개수, 짝수 개수. 홀수 개수를 센다. 
입		력: 수들
출		력: 양의 정수 개수, 음의 정수 개수, 짝수 개수. 홀수 개수
*************************************************************************/
void Count(Long (*numbers),ULong *positiveNumber,ULong *negativeNumber,ULong *evenNumber, ULong *oddNumber){
	*positiveNumber = 0;
	*negativeNumber = 0;
	*evenNumber = 0;
	*oddNumber = 0;
	ULong remainder;
	ULong i;

	for(i = 0; i<MAX ; i++){
		if(numbers[i] < 0){*negativeNumber = *negativeNumber + 1;}
		else if(numbers[i] > 0){{
				*positiveNumber = *positiveNumber + 1;
				remainder = numbers[i]%2;
				if(remainder == 0){*evenNumber = *evenNumber + 1;}
				else{*oddNumber = *oddNumber + 1;}
			}
	}

}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 양의 정수 개수, 음의 정수 개수, 짝수 개수. 홀수 개수를 출력한다.
입		력: 양의 정수 개수, 음의 정수 개수, 짝수 개수. 홀수 개수
출		력: 없음.
**************************************************************************/

void Output(ULong positiveNumber,ULong negativeNumber,ULong evenNumber, ULong oddNumber){
		printf("\t\t=====================================================\n");
		printf("\t\t\t양의 정수 개수 : %d\n ", positiveNumber);
		printf("\t\t\t음의 정수 새수 : %d\n ", negativeNumber);
		printf("\t\t\t짝수 개수 : %d\n ", evenNumber);
		printf("\t\t\t홀수 개수 : %d\n ", oddNumber);
		

}
