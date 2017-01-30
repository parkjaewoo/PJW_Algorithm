//PailndNumber.c
/*************************************************************************************
����  ��Ī: PailndNumber
��		��: ���� �Է¹޾� ȸ������ ���Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 4��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong PalindromeNumber(ULong number);
void Output(ULong pain);

int main(int argc, char *argv[]){
	ULong number;
	ULong palindromeNumber;

	number = Input();
	palindromeNumber = PalindromeNumber(number);
	Output(palindromeNumber);
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
����  ��Ī: PalindromeNumber
��		��: ȸ������ ���Ѵ�
��		��: ��
��		��: ȸ����
*************************************************************************/
ULong PalindromeNumber(ULong number){
	ULong palindromeNumber ;
	ULong portion;
	ULong positionValue;
	ULong reverseNumber = 0;
	
	palindromeNumber = number;

	while(palindromeNumber != reverseNumber){
		palindromeNumber += reverseNumber;
		portion = palindromeNumber;
		reverseNumber = 0;
		while(portion > 0){
			positionValue = portion % 10;
			reverseNumber = (reverseNumber*10) + positionValue;
			portion /= 10;
		}
	}

	return palindromeNumber;
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ȸ������ ����Ѵ�.
��		��: ȸ����
��		��: ����.
**************************************************************************/

void Output(ULong palindromeNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t ȸ���� : %d ", palindromeNumber);	
}
