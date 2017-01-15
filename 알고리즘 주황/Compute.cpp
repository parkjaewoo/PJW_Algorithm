//Compute.c
/*************************************************************************************
����  ��Ī: Compute
��		��: ���� �Է¹����� �Ž������� ����Ѵ�. �Ž��������� ������ 
			��� �ؼ� ��� �ϴ� �� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 10��
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *money);
void Compute(Long money,Long *fiveHunderdWon,Long *hundredWon, Long *fiftyWon, Long *tenWon);
void Output(Long fiveHundredWon,Long hundredWon, Long fiftyWon, Long tenWon );

int main(int argc, char *argv[]){
	Long money;
	Long fiftyHundredWon;
	Long hundredWon;
	Long fiftyWon;
	Long tenWon;


	Input(&money);
	Compute(money,&fiftyHundredWon,&hundredWon, &fiftyWon, &tenWon);
	Output(fiftyHundredWon,hundredWon, fiftyWon, tenWon);
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

void Input(Long *money){
	printf("\n\n\n\n\n\t\t1000�� ������ ���� ���� �Է��Ͻÿ�! ");
	scanf("%d", money);
}

/************************************************************************
����  ��Ī: Compute
��		��: �Ž������� �´� ���� ���� ����Ѵ�
��		��: ��
��		��: �����,���,���ʿ�,�ʿ�
*************************************************************************/
void Compute(Long money,Long *fiveHundredWon,Long *hundredWon, Long *fiftyWon, Long *tenWon){
	Long change = 1000;
	
	change -= money;
	*fiveHundredWon = change / 500;
	change %= 500;
	*hundredWon = change / 100;
	change %= 100;
	*fiftyWon = change / 50;
	change %= 50;
	*tenWon = change / 10;
	change %= 10;
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �����鸦 ����Ѵ�.
��		��: �����, ���,���ʿ�,�ʿ� 
��		��: ����.
**************************************************************************/

void Output(Long fiveHundredWon,Long hundredWon, Long fiftyWon, Long tenWon ){
		printf("\t\t=====================================================\n");
		printf("\t\t\t�����: %d   ���: %d  ���ʿ�: %d  �ʿ�: %d \n", fiveHundredWon,hundredWon,fiftyWon,tenWon);

}
