//Reverse.c
/******************************************************************************************
파일  명칭: Reverse
기		능: 수의 개수와 수들을 입력으로 받아 입력받은 수들을 거꾸로 출력한다
작  성  자: 박재우
작성  일자: 2017년 1월 19일
********************************************************************************************/
#include <stdio.h>
#define MAX 1000
typedef unsigned long int ULong;
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long (*numbers),ULong *countNumber);
void Reverse(ULong countNumber,Long (*numbers));
void Output(ULong countNumber,Long (*numbers));

int main(int argc, char *argv[]){
	Long numbers[MAX];
	ULong countNumber;


	Input(numbers, &countNumber);
	Reverse(countNumber,numbers);
	Output(countNumber,numbers);
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

void Input(Long (*numbers),ULong *countNumber){
	ULong i=0;

	printf("\n\n\n\n\n\t\t수의 개수를 입력하십시오. : ");
	scanf("%ld", countNumber);

	printf("\n\n\n\t\t수의 개수대로 수를 입력하십시오. : ");
	while(i<*countNumber){
		scanf("%d", numbers + i);
		i++;
	}
}

/************************************************************************
파일  명칭: Reverse
기		능: 입력받은 수들을 뒤집어 출력한다 
입		력: 수의 개수, 수들
출		력: 수들, 수 개수
*************************************************************************/
void Reverse(ULong countNumber,Long (*numbers)) {
	ULong countMove = countNumber /2;
	ULong moveNumber = countNumber-1;
	Long temp;
	ULong i = 0;
	while(i<countMove){
		temp = numbers[i];
		numbers[i] = numbers[moveNumber];
		numbers[moveNumber] = temp;
		moveNumber--;
		i++;
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 뒤집은 수들을 출력한다.
입		력: 수들, 수 개수
출		력: 없음.
**************************************************************************/

void Output(ULong countNumber,Long (*numbers)){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while( i<countNumber){ 
		printf(" %d ",numbers[i]);
		i++;
}
}