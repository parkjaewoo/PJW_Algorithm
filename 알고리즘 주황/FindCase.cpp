//FindCase.c
/******************************************************************************************
파일  명칭: FindCase
기		능: 주사위 두 개를 던질 때 나오는 눈의 합이 어떤 종류가 있는지 계산한다
작  성  자: 박재우
작성  일자: 2017년 1월 20일
********************************************************************************************/
#include <stdio.h>
#define MAX 6
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong *number);
void FindCase(ULong number,ULong (*firstPips),ULong (*secondPips), ULong *countMix);
void Output(ULong (*firstPips),ULong (*secondPips),ULong countMix);

int main(int argc, char *argv[]){
	ULong firstPips[MAX];
	ULong secondPips[MAX];
	ULong countMix;
	ULong number;


	Input(&number);
	FindCase(number,firstPips,secondPips,&countMix);
	Output(firstPips,secondPips,countMix);
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

void Input(ULong *number){
	printf("\n\n\n\n\n\t\t12이하 자연수를 입력하십시오. : ");
	scanf("%d", number);
}

/**************************************************************************
파일  명칭: FindCase
기		능: 입력받은 자연수와 같은 합을 가지는 주사위 눈의 조합을 계산한다.
입		력: 수
출		력: 첫 번째 눈금들, 두 번째 눈금들, 조합 개수
****************************************************************************/
void FindCase(ULong number,ULong (*firstPips),ULong (*secondPips), ULong *countMix) {
	ULong firstPip=0;
	ULong secondPip;
	ULong i = 1;
	ULong j = 0;
	*countMix = 0;

	while(i<number && i <= MAX){
		firstPip++;
		secondPip = number - i;
		if(secondPip <= MAX){
			(*countMix)++;
			firstPips[j] = firstPip;
			secondPips[j] = secondPip;
			j++;
		}
		i++;
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 첫 번째 눈금들, 두 번째 눈금들을 출력한다.
입		력: 첫 번째 눈금들, 두 번째 눈금들, 조합 개수
출		력: 없음.
**************************************************************************/

void Output(ULong (*firstPips),ULong (*secondPips),ULong countMix){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while(i<countMix){
		printf("  %d %d   ",firstPips[i],secondPips[i]);
		i++;
}
}