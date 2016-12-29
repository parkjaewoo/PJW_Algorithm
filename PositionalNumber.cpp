//PositionalNumber.c
/*************************************************************************************
����  ��Ī: PositionalNumber
��		��: ���� �Է¹޾� �� �ڸ����� ���� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2016�� 12�� 29��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong PositionalNumber(ULong number);
void Output(ULong number, ULong sumPositionNumber);

int main(int argc, char *argv[]){
	ULong number;
	ULong sumPositionNumber;

	number = Input();
	sumPositionNumber = PositionalNumber(number);
	Output(number,sumPositionNumber);
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

ULong Input(){
	ULong number ;
	printf("\n\n\n\n\n\t\t���ڸ� ������ ���� �Է��Ͻʽÿ�! ");
	scanf("%d", &number);
	return number;
}

/************************************************************************
����  ��Ī: PositionalNumber
��		��: �� �ڸ����� ���� ���Ѵ�
��		��: ��
��		��: �ڸ��� ��
*************************************************************************/
ULong PositionalNumber(ULong number){
	ULong sumPositionNumber = 0;
	ULong tenThousand = 0;
	ULong thousand = 0;
	ULong hundred = 0;
	ULong ten = 0;
	ULong remainder = 0;

	tenThousand = number / 10000;
	remainder = number % 10000;
	thousand = remainder / 1000;
	remainder = remainder % 1000;
	hundred = remainder / 100;
	remainder = remainder %100;
	ten = remainder / 10;
	remainder = remainder % 10;

	sumPositionNumber = tenThousand + thousand + hundred + ten + remainder;
	return sumPositionNumber;

}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �� ����Ѵ�.
��		��: �ڸ��� ��.��
��		��: ����.
**************************************************************************/

void Output(ULong number, ULong sumPositionNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t %d�� �� �ڸ��� ���� %d �Դϴ� ", number, sumPositionNumber);
	
}