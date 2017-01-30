//SevenCount.c
/*************************************************************************************
파일  명칭: SevenCount
기		능: 10000까지의 수들에서 7이 몇 개인지 구한다
작  성  자: 박재우
작성  일자: 2016년 12월 31일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong sevenCount();
void Output(ULong count);

int main(int argc, char *argv[]){
	ULong count;

	count = sevenCount();
	Output(count);
	printf("\n");
	getchar();
	getchar();
	return 0;
}



/************************************************************************
파일  명칭: sevenCount
기		능: 10000까지의 7의 개수를 구한다
입		력: 없음
출		력: 개수
*************************************************************************/
ULong sevenCount(){
	ULong count = 0;
	ULong portion;
	ULong positionValue = 0;

	for(int i = 1; i <= 10000; i++){
		portion = i;
		while(portion > 0){
			//positionValue = portion - (portion /10)*10;
			positionValue = portion % 10;
			if(positionValue == 7) {count++;}
			portion /= 10;
		}
	}
	return count;
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 개수를 출력한다.
입		력: 개수
출		력: 없음.
**************************************************************************/

void Output(ULong count){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 10000에서 7의 개수는 %d 입니다", count);	
}