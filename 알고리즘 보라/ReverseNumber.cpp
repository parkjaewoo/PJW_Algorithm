//ReverseNumber.c
/*************************************************************************************
����  ��Ī: ReverseNumber
��		��: ���� �Է¹޾� �ڸ����� ������ ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 2��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong ReverseNumber(ULong number);
void Output(ULong reverseNumber);

int main(int argc, char *argv[]){
	ULong number;
	ULong reverseNumber;

	number = Input();
	reverseNumber = ReverseNumber(number);
	Output(reverseNumber);
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
����  ��Ī: ReverseNumber
��		��: �� �ڸ����� ���� ���Ѵ�
��		��: ��
��		��: ������ ��
*************************************************************************/
ULong ReverseNumber(ULong number){
	ULong reverseNumber = 0;
	ULong positionValue = 0;
	ULong remainder;
	
	remainder = number;
	while(remainder>0){
		positionValue = remainder -(remainder / 10) * 10;
		reverseNumber = (reverseNumber*10) + positionValue;
		remainder /= 10;
	}
	return reverseNumber;
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ������ ���� ����Ѵ�.
��		��: ������ ��.
��		��: ����.
**************************************************************************/

void Output(ULong reverseNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t ������ �� : %d ", reverseNumber);	
}
