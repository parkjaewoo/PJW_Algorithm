//IsPerfectNumber.c
/************************************************************************
����  ��Ī: IsPerfectNumber.c
��		��: ���� �Է¹޾� ������������ �Ǻ��Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2016�� 12�� 27��
*************************************************************************/
#include <stdio.h>
typedef enum _boolean {FALSE = 0, TRUE = 1} Boolean;
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
Boolean IsPerfectNumber(ULong number);
void Output(ULong number,Boolean isPerfectNumber);

int main(int argc, char *argv[]){
	ULong number;
	Boolean isPerfectNumber;

	number = Input();
	isPerfectNumber = IsPerfectNumber(number);
	Output(number, isPerfectNumber);
	printf("\n");
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: ��
*************************************************************************/

ULong Input(){
	ULong number ;
	printf("\n\n\n\n\n\t\t2�̻� ���� �Է��Ͻʽÿ�! ");
	scanf("%d", &number);
	return number;
}

/************************************************************************
����  ��Ī: IsPerfectNumber
��		��: ���� �Է¹޾� ���������θ� ����Ѵ�.
��		��: ��	
��		��: ������ ����
*************************************************************************/

Boolean IsPerfectNumber(ULong number){
	Boolean isPerfectNumber = FALSE;
	int remainder;
	int factor=0;
	int sumDivisor=0;

	for(ULong i = 1; i < number; i++){
		remainder = number;
		if(remainder%i == 0) sumDivisor+=i;
	}
	if(number == sumDivisor ) isPerfectNumber = TRUE;
	return isPerfectNumber;
}

/************************************************************************
����  ��Ī: IsPerfectNumber
��		��: ����Ϳ� ���������� �ƴ����� ����Ѵ�.
��		��: ��, ������ ����
��		��: ����.
*************************************************************************/

void Output(ULong number, Boolean isPerfectNumber){
	printf("\t\t=====================================================\n");
	isPerfectNumber == TRUE ? printf("\t\t%d�� ������ �Դϴ�.\n", number) : printf("\t\t%d�� �������� �ƴմϴ�.\n", number);
}