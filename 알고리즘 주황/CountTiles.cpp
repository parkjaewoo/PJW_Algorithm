//CountTiles.c
/*************************************************************************************
����  ��Ī: CountTiles
��		��: �ٴڿ� Ÿ���� ��µ� �ʿ��� Ÿ�� ���� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 11��
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
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: 
*************************************************************************/

void Input(Long *width, Long *length){
	printf("\n\n\n\n\n\t\t 1000 ���� ����,���θ� �Է��Ͻÿ�!");
	scanf("%d %d", width,length);
}

/************************************************************************
����  ��Ī: CountTiles
��		��: ������ Ÿ�ϰ� �߶� ����� Ÿ���� ���Ѵ�
��		��: ����,����
��		��: ������ Ÿ��, �߶� ����� Ÿ��
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
����  ��Ī: Output
��		��: ����Ϳ� ������ Ÿ�ϰ� �߶� ����� Ÿ���� ����Ѵ�.
��		��: ������ Ÿ��, �߶� ����� Ÿ��. 
��		��: ����.
**************************************************************************/

void Output(Long wholeTiles,Long partTiles){
		printf("\t\t=====================================================\n");
		printf("\t\t\tThe number of whole tiles is %d part tiles is %d ", wholeTiles,partTiles);

}
