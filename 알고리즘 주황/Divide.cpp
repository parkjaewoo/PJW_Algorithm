//Divide.c
/*************************************************************************************
파일  명칭: Divide
기		능: 두 수를 입력받아 몫과 나머지를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 9일
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *firstNumber,Long *secondNumber);
void Divide(Long firstNumber,Long secondNumber,Long *portion, Long *remainder);
void Output(Long portion, Long remainder);

int main(int argc, char *argv[]){
	Long firstNumber;
	Long secondNumber;
	Long portion;
	Long remainder;

	Input(&firstNumber, &secondNumber);
	Divide(firstNumber,secondNumber,&portion,&remainder);
	Output(portion,remainder);
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

void Input(Long *firstNumber,Long *secondNumber){
	printf("\n\n\n\n\n\t\t두 수를 입력하십시오! ");
	scanf("%d %d", firstNumber,secondNumber);
}

/************************************************************************
파일  명칭: Divide
기		능: 몫과 나머지를 구한다
입		력: 첫번째 수, 두번째 수
출		력: 몫, 나머지
*************************************************************************/

void Divide(Long firstNumber,Long secondNumber,Long *portion, Long *remainder){
	*portion = firstNumber / secondNumber;
	//*remainder = firstNumber - (*portion * secondNumber);
	*remainder = firstNumber % secondNumber;

}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 몫과 나머지를 출력한다.
입		력: 몫,나머지
출		력: 없음.
**************************************************************************/

void Output(Long portion, Long remainder){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 몫 : %d   나머지 : %d\n", portion,remainder);

}
