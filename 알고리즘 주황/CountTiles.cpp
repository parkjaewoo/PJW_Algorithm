//CountTiles.c
/*************************************************************************************
파일  명칭: CountTiles
기		능: 바닥에 타일을 까는데 필요한 타일 수를 구한다.
작  성  자: 박재우
작성  일자: 2017년 1월 11일
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *width,Long *length);
void CountTiles(Long width,Long length,Long *wholeTiles, Long *partTiles);
void Output(Long wholeTiles,Long partTiles);

int main(int argc, char *argv[]){
	Long width;
	Long length;
	Long wholeTiles;
	Long partTiles;


	Input(&width,&length);
	CountTiles(width,length,&wholeTiles,&partTiles);
	Output(wholeTiles,partTiles);
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

void Input(Long *width, Long *length){
	printf("\n\n\n\n\n\t\t 1000 이하 가로,세로를 입력하시오!");
	scanf("%d %d", width,length);
}

/************************************************************************
파일  명칭: CountTiles
기		능: 온전한 타일과 잘라서 사용한 타일을 구한다
입		력: 가로,세로
출		력: 온전한 타일, 잘라서 사용한 타일
*************************************************************************/
void CountTiles(Long width,Long length,Long *wholeTiles, Long *partTiles){
	Long remainderWidth;
	Long remainderLength;

	*wholeTiles = (width/8) * (length/8);
	remainderWidth = width - (width / 8) * 8;
	remainderLength = length - (length/8)  * 8;
	if(remainderWidth == 0 && remainderLength == 0){*partTiles = 0;}
	else if(remainderWidth != 0 && remainderLength == 0) {*partTiles = length / 8;}
	else if(remainderWidth == 0 && remainderLength != 0) {*partTiles = width / 8;}
	else {*partTiles = (length/8) + (width/8) + 1;}
}


/*************************************************************************
파일  명칭: Output
기		능: 모니터에 온전한 타일과 잘라서 사용한 타일을 출력한다.
입		력: 온전한 타일, 잘라서 사용한 타일. 
출		력: 없음.
**************************************************************************/

void Output(Long wholeTiles,Long partTiles){
		printf("\t\t=====================================================\n");
		printf("\t\t\tThe number of whole tiles is %d part tiles is %d ", wholeTiles,partTiles);

}
