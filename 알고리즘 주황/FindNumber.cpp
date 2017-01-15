//FindNumber.c
/*************************************************************************************
����  ��Ī: FindNumber
��		��: �������� ���Ƹ��� �հ� �ٸ��� ���� �Է¹޾� ��������
			���Ƹ��� ���� �� ���� ������ ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 10��
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *sumAnimal,Long *sumLeg);
void FindNumber(Long sumAnimal,Long sumLeg,Long *chickNumber,Long *popNumber, Long *legNumber);
void Output( Long chickNumber,Long popNumber);

int main(int argc, char *argv[]){
	Long sumAnimal;
	Long sumLeg;
	Long popNumber;
	Long chickNumber;
	Long legNumber;


	Input(&sumAnimal, &sumLeg);
	FindNumber(sumAnimal,sumLeg,&chickNumber,&popNumber, &legNumber);
	Output(chickNumber,popNumber);
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

void Input(Long *sumAnimal,Long *sumLeg){
	printf("\n\n\n\n\n\t\t������ �հ� �ٸ��� ���� �Է��Ͻÿ�! ");
	scanf("%d %d", sumAnimal,sumLeg);
}

/************************************************************************
����  ��Ī: FindNumber
��		��: ������ ���� ���Ƹ� ���� ���Ѵ�
��		��: ������ ��, �ٸ��� ��
��		��: ���Ƹ� ��, ������ ��
*************************************************************************/
void FindNumber(Long sumAnimal,Long sumLeg,Long *chickNumber,Long *popNumber, Long *legNumber){
	*legNumber = sumAnimal * 2;
	*popNumber = 0;
	*chickNumber = sumAnimal;
	while(*legNumber < sumLeg){
		*chickNumber = *chickNumber - 1;
		*popNumber = *popNumber + 1;
		*legNumber = (*chickNumber * 2) + (*popNumber * 4);
	}
	if(*legNumber != sumLeg || *chickNumber < 0){ 
		*chickNumber = 0;
		*popNumber = 0;
	}
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���Ƹ� ��, ������ ���� ����Ѵ�.
��		��: ���Ƹ� ��, ������ ��
��		��: ����.
**************************************************************************/

void Output( Long chickNumber,Long popNumber){
		printf("\t\t=====================================================\n");
		printf("\t\t\t%d %d\n", popNumber,chickNumber);

}
