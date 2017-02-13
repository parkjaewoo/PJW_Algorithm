//Arrange.c
/**********************************************************************************************
파일  명칭: Arrange
기		능: 10개의 숫자를 읽어 오름차순으로 정렬한 후, 정렬 하기 전의 숫자들과
			정렬한 후의 숫자들을 출력한다.
작  성  자: 박재우
작성  일자: 2017년 2월 2일
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers));
void Arrange(UShort (*numbers), UShort (*arrangedNumbers));
void Output(UShort (*numbers), UShort (*arrangedNumbers));

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort arrangedNumbers[MAX];
	

	Input(numbers);
	Arrange(numbers,arrangedNumbers);
	Output(numbers,arrangedNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수들을 입력받는다.
입		력: 없음	
출		력: 수들
*************************************************************************/
void Input(UShort (*numbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 키를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers+i);
	}
	
}


/****************************************************************************
파일  명칭: Arrange
기		능: 수들을 입력받아 오름차순으로 배열한 수들을 구한다 
입		력: 수들
출		력: 수들,배열 된 수들
*****************************************************************************/
void Arrange(UShort (*numbers), UShort (*arrangedNumbers)){
	UShort temp;
	UShort  i=0;
	UShort  j;


	for(i=0;i<MAX;i++){arrangedNumbers[i] = numbers[i];}

	for(i=0; i<MAX-1; i++){
		j=0;
		while(j<MAX-i){
			if(arrangedNumbers[j] > arrangedNumbers[j+1]){
				temp = arrangedNumbers[j];
				arrangedNumbers[j] = arrangedNumbers[j+1];
				arrangedNumbers[j+1] = temp;
			}
			j++;
		}
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 수들, 배열된 수들을 출력한다.
입		력: 수들, 배열된 수들
출		력: 없음.
**************************************************************************/

void Output(UShort (*numbers), UShort (*arrangedNumbers)){
	UShort i;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){printf(" %d ",numbers[i]);}
	printf("\n\t\t");
	for(i=0;i<MAX;i++){printf(" %d ",arrangedNumbers[i]);}

}

