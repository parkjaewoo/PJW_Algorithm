//CountBox.c
/*************************************************************************************
파일  명칭: CountBox
기		능: 설탕무게를 입력받으면, 5kg 상자와 3kg 상자를 이용하여 최소한의
			필요한 상자수와 5kg 상자와 3kg 상자의 수를 센다.
작  성  자: 박재우
작성  일자: 2017년 1월 11일
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *sugarWeight);
void CountBox(Long sugarWeight,Long *boxNumber,Long *threeKilogramBox,Long *fiveKilogramBox);
void Output(Long boxNumber,Long threeKilogramBox,Long fiveKilogramBox);

int main(int argc, char *argv[]){
	Long sugarWeight;
	Long fiveKilogramBox;
	Long threeKilogramBox;
	Long boxNumber;


	Input(&sugarWeight);
	CountBox(sugarWeight,&boxNumber,&threeKilogramBox,&fiveKilogramBox
		
		);
	Output(boxNumber,threeKilogramBox,fiveKilogramBox);
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

void Input(Long *sugarWeight){
	printf("\n\n\n\n\n\t\t주문받은 설탕의 무게 N(3<=N<=50,000)이 입력된다.");
	scanf("%d", sugarWeight);
}

/************************************************************************
파일  명칭: CountBox
기		능: 박스 수와 5kg 상자와 3kg 상자를 센다.
입		력: 설탕무게
출		력: 박스 수, 5kg 상자, 3kg 상자
*************************************************************************/
void CountBox(Long sugarWeight,Long *boxNumber, Long *threeKilogramBox,Long *fiveKilogramBox){
	Long remainderWeight;
	*fiveKilogramBox;
	*threeKilogramBox;

	*fiveKilogramBox = sugarWeight / 5;
	remainderWeight = sugarWeight - (*fiveKilogramBox * 5);
	*threeKilogramBox = remainderWeight / 3;
	remainderWeight = remainderWeight - (*threeKilogramBox * 3);

	while(remainderWeight != 0){
		*fiveKilogramBox = *fiveKilogramBox - 1;
		remainderWeight = remainderWeight + (*threeKilogramBox * 3) + 5;
		*threeKilogramBox = remainderWeight / 3;
		remainderWeight = remainderWeight - (*threeKilogramBox * 3);
	}

	if(*fiveKilogramBox < 0){
		*boxNumber = -1;
		*fiveKilogramBox = 0;
		*threeKilogramBox = 0;
	}
	else{*boxNumber =  *threeKilogramBox + *fiveKilogramBox;}

}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 박스 수와 5kg 상자와 3kg 상자를 출력한다.
입		력: 박스 수, 5kg 상자, 3kg 상자 
출		력: 없음.
**************************************************************************/

void Output(Long boxNumber,Long threeKilogramBox,Long fiveKilogramBox){
		printf("\t\t=====================================================\n");
		printf("\t\t\t상자 수 : %d\n ", boxNumber);
		printf("\t\t\t3kg 상자 : %d \t 5kg 상자 : %d\n", threeKilogramBox,fiveKilogramBox);

}
