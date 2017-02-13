//Neation.c
/**********************************************************************************************
파일  명칭: Neation
기		능: 10개의 수로 구성된 두 개의 배열이 오름파순으로 정렬되어 있을 때, 20개의
			배열요소로 구성된 배열에 병합하여 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 25일
**********************************************************************************************/
#include <stdio.h>
#define TWENTY 20
#define TEN 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*firstNumbers),UShort (*secondNumbers));
void Neation(UShort (*firstNumbers),UShort (*secondNumbers),UShort (*arrangeNumbers));
void Output(UShort (*arrangeNumbers));

int main(int argc, char *argv[]){
	UShort firstNumbers[TEN];
	UShort secondNumbers[TEN];
	UShort arrangeNumbers[TWENTY];
	

	Input(firstNumbers,secondNumbers);
	Neation(firstNumbers,secondNumbers,arrangeNumbers);
	Output(arrangeNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 첫번째 수들, 두번째 수들을 입력받는다.
입		력: 없음	
출		력: 첫번째 수들, 두번째 수들
*************************************************************************/
void Input(UShort (*firstNumbers),UShort (*secondNumbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t열 번 수를 입력하십시오. : ");
	for(i=0;i<TEN;i++){
		scanf_s("%hu", firstNumbers+i);
	}
	printf("\n");
	printf("\n\n\n\n\n\t\t열 번 수를 입력하십시오. : ");
	for(i=0;i<TEN;i++){
		scanf_s("%hu", secondNumbers+i);
	}
}


/****************************************************************************
파일  명칭: Neation
기		능: 첫번째 수들, 두번째 수들을 입력받아 정리된 수들을 구한다 
입		력: 첫번째 수들, 두번째 수들
출		력: 정리된 수들
*****************************************************************************/
void Neation(UShort (*firstNumbers),UShort (*secondNumbers),UShort (*arrangeNumbers)){
	UShort temp;
	UShort  i;
	UShort  j=0;

	for(i=0;i<TEN;i++){
		arrangeNumbers[j] = firstNumbers[i];
		j++;
		arrangeNumbers[j] = secondNumbers[i];
		j++;
	}

	for(i=0;i<TWENTY;i++){
		for(j=i;j<TWENTY;j++){
			if(arrangeNumbers[j] < arrangeNumbers[i]){
				temp = arrangeNumbers[i];
				arrangeNumbers[i] = arrangeNumbers[j];
				arrangeNumbers[j] = temp;
			}
		}
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 정리된 수들를 출력한다.
입		력: 정리된 수들
출		력: 없음.
**************************************************************************/

void Output(UShort (*arrangeNumbers)){
	UShort i;
	printf("\n\n");
	printf("\t=====================================================\n");
	printf("\t");
	for(i=0;i<TWENTY;i++){
		printf(" %d ",arrangeNumbers[i]);
	}

}

