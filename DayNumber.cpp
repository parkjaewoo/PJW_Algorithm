//DayNumber.c
/*************************************************************************************
파일  명칭: DayNumber.c
기		능: 깊이를 입력받아 달팽이가 우물밖으로 나오는데 며칠이 걸리는지 구한다.
작  성  자: 박재우
작성  일자: 2016년 12월 28일
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong DayNumber(ULong depth);
void Output(ULong depth,ULong dayNumber);

int main(int argc, char *argv[]){
	ULong depth;
	ULong dayNumber;

	depth = Input();
	dayNumber = DayNumber(depth);
	Output(depth, dayNumber);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 깊이
*************************************************************************/

ULong Input(){
	ULong depth ;
	printf("\n\n\n\n\n\t\t3이상 수를 입력하십시오! ");
	scanf("%d", &depth);
	return depth;
}

/************************************************************************
파일  명칭: DayNumber
기		능: 깊이를 입력받아 일수를 출력한다.
입		력: 깊이	
출		력: 일수
*************************************************************************/

ULong DayNumber(ULong depth){
	ULong dayNumber = 0;
	ULong distance = 0;
	ULong dayDistance = 3;
	ULong nightDistance = 2;
	
	dayNumber++;
	distance += dayDistance;
	
	while(distance<depth){
		distance -= nightDistance;
		dayNumber++;
		distance += dayDistance;
	}
	return dayNumber;
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 일수를 출력한다.
입		력: 깊이,일수
출		력: 없음.
**************************************************************************/

void Output(ULong depth, ULong dayNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 달팽이가 깊이 %d를 올라오는데 걸리는 일수는 %d 입니다! ", depth,dayNumber);
}
