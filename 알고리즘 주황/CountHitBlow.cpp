//CountHitBlow.c
/******************************************************************************************
파일  명칭: CountHitBlow
기		능: 4개의 적당한 수들을 입력시키면 자리수와 숫자가 맞으면 Hit로 간주하여 개수가
			출력되고, 숫자가 맞더라도 자리수가 다르다면 Blow라는 표시와 그 개수를 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 17일
********************************************************************************************/
#include <stdio.h>
#define MAX 4
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*numbers1),ULong (*numbers2));
void CountHitBlow(ULong (*numbers1),ULong (*numbers2),ULong *countHit,ULong *countBlow);
void Output(ULong countHit,ULong countBlow);

int main(int argc, char *argv[]){
	ULong numbers1[MAX];
	ULong numbers2[MAX];
	ULong countHit;
	ULong countBlow;


	Input(numbers1,numbers2);
	CountHitBlow(numbers1,numbers2,&countHit,&countBlow);
	Output(countHit,countBlow);
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

void Input(ULong (*numbers1),ULong (*numbers2)){
	ULong i;

	printf("\n\n\n\n\n\t\t네 번 수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers1 + i);
	}

	printf("\n\n\n\t\t비교할 수를 네 번 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers2 + i);
	}
}

/************************************************************************
파일  명칭: CountHitBlow
기		능: 히트 갯수, 블로 갯수를 센다. 
입		력: 수들1,수들2
출		력: 히트 갯수, 블로 갯수
*************************************************************************/
void CountHitBlow(ULong (*numbers1),ULong (*numbers2),ULong *countHit,ULong *countBlow) {
	ULong i;
	ULong j;
	*countHit = 0;
	*countBlow = 0;

	for(i = 0; i< MAX; i++){
		for(j = 0; j< MAX; j++){
			if(i == j && numbers1[i] == numbers2[j]){ (*countHit)++;}
			else if (numbers1[i] == numbers2[j]){(*countBlow)++;}
		}
	}
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 히트 갯수, 블로 갯수를 출력한다.
입		력: 히트 갯수, 블로 갯수
출		력: 없음.
**************************************************************************/

void Output(ULong countHit,ULong countBlow){
		printf("\t\t=====================================================\n");
		printf("\t\t\t%d Hit , %d Blow ", countHit,countBlow);
}
