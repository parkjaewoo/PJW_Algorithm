//CountTiles.c
/*************************************************************************************
����  ��Ī: CountTiles
��		��: �ٴڿ� Ÿ���� ��µ� �ʿ��� Ÿ�� ���� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 12��
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
	Long necessaryTiles;

	necessaryTiles = ((width+7)/8) * ((length+7)/8);
	*wholeTiles = (width/8) * (length/8);
	*partTiles = necessaryTiles - *wholeTiles;
	
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
