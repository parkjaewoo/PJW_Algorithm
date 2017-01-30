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
	printf("\n\n\n\n\n\t\t���� �Է��Ͻʽÿ�! ");
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
	ULong sumPositionalNumber = 0;
	ULong position = 10;
	ULong positionalValue = 0;
	ULong remainder;

	//positionalValue = number - (number/position)* position;
	//positionalValue = number % position;
	//sumPositionalNumber += positionalValue;
	remainder = number;
	while(remainder != 0){
		//position *= 10;
		//positionalValue = (number - (number/position)*position)/(position/10);
		positionalValue = remainder % position;
		sumPositionalNumber += positionalValue;
		remainder /= 10;
	}
	return sumPositionalNumber;
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