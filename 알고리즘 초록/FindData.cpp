//FindData.c
/**********************************************************************************************
파일  명칭: FindData
기		능: 10개의 데이터가 입력된 후 찾고자 하는 데이터가 입력될 때 찾고자 하는 데이터가
			있을 때 그 위치를 출력하고, 없을 때는 적당한 메세지를 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 25일
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers), UShort *data);
void FindData(UShort (*numbers), UShort data,UShort *location);
void Output(UShort location);

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort data;
	UShort location;


	Input(numbers, &data);
	FindData(numbers,data, &location);
	Output(location);
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
void Input(UShort (*numbers), UShort *data){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 키를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers+i);
	}
	printf("\n\n\t\t찾을 자료를 입력하세요. : ");
	scanf_s("%hu", data);
}


/************************************************************************
파일  명칭: FindData
기		능: 수들과 자료를 입력받아 위치를 찾는다.
입		력: 수들,자료
출		력: 위치
*************************************************************************/
void FindData(UShort (*numbers), UShort data,UShort *location){
	*location = 0;
	UShort  i;
	for(i=1;i<MAX;i++){
		if(numbers[i] == data){*location = i+1;}
	}

}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 위치를 출력한다.
입		력: 위치
출		력: 없음.
**************************************************************************/

void Output(UShort location){
	printf("\t\t=====================================================\n");
	printf("\t\t");
	if(location ==0) {printf("찾으시는 데이터가 없습니다.");}
	else{printf("%d",location);}
}

