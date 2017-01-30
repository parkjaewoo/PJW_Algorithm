//Filter.c
/******************************************************************************************
파일  명칭: Filter
기		능: 열 개의 숫자를 입력받아 중복된 숫자를 제외한 수들을 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 19일
********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned long int ULong;
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long (*numbers));
void Filter(Long (*numbers), Long (*notOverlap), ULong *countNotOverlap);
void Output(Long (*notOverlap),ULong countNotOverlap);

int main(int argc, char *argv[]){
	Long numbers[MAX];
	Long notOverlap[MAX];
	ULong countNotOverlap;


	Input(numbers);
	Filter(numbers,notOverlap,&countNotOverlap);
	Output(notOverlap,countNotOverlap);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 수들
*************************************************************************/
void Input(Long (*numbers)){
	ULong i;

	printf("\n\n\n\n\n\t\t열 번 수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%ld", numbers + i);
	}
	
}


/************************************************************************
파일  명칭: Filter
기		능: 수들을 입력받아 중복 안된 수를 저장해서 출력한다. 
입		력: 수들
출		력: 중복 안 된 수들, 중복 안 된 수들 개수  
*************************************************************************/
void Filter(Long (*numbers),Long (*notOverlap), ULong *countNotOverlap) {
	ULong i;
	ULong j;
	ULong count = 0;
	*countNotOverlap = 0;
	ULong k=0;
	
	for(i = 0;i<MAX;i++){
		count=0;
		for(j = 0; j<MAX; j++){
			if(numbers[i] == numbers[j]){count++;}
		}
		if(count == 1){
			notOverlap[k] = numbers[i];
			k++;
			(*countNotOverlap)++;
		}
	}

}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 중복 안 된 수들을 출력한다.
입		력: 중복 안 된 수들, 중복 안 된 수들 개수 
출		력: 없음.
**************************************************************************/

void Output(Long (*notOverlap),ULong countNotOverlap){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while( i<countNotOverlap){ 
		printf(" %d ",notOverlap[i]);
		i++;
	}	
}