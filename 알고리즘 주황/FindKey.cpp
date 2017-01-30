//FindKey.c
/******************************************************************************************
파일  명칭: FindKey
기		능: 10개의 정수가 입력되어 있을 때, 찾고자 하는 값을 입력받아 그 정수의
			위치를 출력하고 값이 없을 때에는 적당한 메세지를 출력한다.
작  성  자: 박재우
작성  일자: 2017년 1월 17일
********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*numbers),ULong *key);
void FindKey(ULong (*numbers),ULong key, ULong (*roomNumbers), ULong *count);
void Output(ULong (*roomNumbers), ULong count);

int main(int argc, char *argv[]){
	ULong numbers[MAX];
	ULong roomNumbers[MAX];
	ULong key;
	ULong count;


	Input(numbers,&key);
	FindKey(numbers,key,roomNumbers,&count);
	Output(roomNumbers,count);
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

void Input(ULong (*numbers),ULong *key){
	ULong i;

	printf("\n\n\n\n\n\t\t열 번 수를 입력하십시오. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers + i);
	}

	printf("\n\n\n\t\t찾고자 하는 값을 입력하십시오. : ");
	scanf("%d", key);
	
}

/************************************************************************
파일  명칭: FindKey
기		능: 방 번호들을 센다. 
입		력: 수들,값
출		력: 방 번호들, 번호 개수
*************************************************************************/
void FindKey(ULong (*numbers),ULong key, ULong (*roomNumbers),ULong *count) {
	ULong i;
	*count=0;

	for(i = 0; i< MAX; i++){
		if(numbers[i] == key) {
			roomNumbers[*count] = i;
			(*count)++;
		}
	}	
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 방 번호들을 출력한다.
입		력: 방 번호들, 번호 개수
출		력: 없음.
**************************************************************************/

void Output(ULong (*roomNumbers),ULong count){
	ULong i=0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while(i<count){
		printf(" %d ", (roomNumbers[i])+1);
		i++;
	}
	if(count == 0 ){
		printf("\t 찾고자 하는 값이 없습니다.");
	}
}
