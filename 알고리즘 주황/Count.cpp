//Count.c
/*************************************************************************************
����  ��Ī: Count
��		��: �������� �Էµ� ��, �� ������ �о� ���� ���� ����, ���� ���� ������
			���ϰ�, ���� ������ ¦�� ����, Ȧ�� ������ ���Ͽ� �������. 
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 16��
*************************************************************************************/
#include <stdio.h>
#define MAX 100
typedef signed long int Long;
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(Long (*numbers));
void Count(Long (*numbers),ULong *positiveNumber,ULong *negativeNumber,ULong *evenNumber, ULong *oddNumber);
void Output(ULong positiveNumber,ULong negativeNumber,ULong evenNumber, ULong oddNumber);

int main(int argc, char *argv[]){
	Long numbers[MAX];
	ULong positiveNumber;
	ULong negativeNumber;
	ULong evenNumber;
	ULong oddNumber;


	Input(numbers);
	Count(numbers,&positiveNumber,&negativeNumber,&evenNumber,&oddNumber);
	Output(positiveNumber,negativeNumber,evenNumber,oddNumber);
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

void Input(Long (*numbers)){
	ULong i;
	printf("\n\n\n\n\n\t\t���� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers + i);
	}
}

/************************************************************************
����  ��Ī: Count
��		��: ���� ���� ����, ���� ���� ����, ¦�� ����. Ȧ�� ������ ����. 
��		��: ����
��		��: ���� ���� ����, ���� ���� ����, ¦�� ����. Ȧ�� ����
*************************************************************************/
void Count(Long (*numbers),ULong *positiveNumber,ULong *negativeNumber,ULong *evenNumber, ULong *oddNumber){
	*positiveNumber = 0;
	*negativeNumber = 0;
	*evenNumber = 0;
	*oddNumber = 0;
	ULong remainder;
	ULong i;

	for(i = 0; i<MAX ; i++){
		if(numbers[i] < 0){*negativeNumber = *negativeNumber + 1;}
		else if(numbers[i] > 0){{
				*positiveNumber = *positiveNumber + 1;
				remainder = numbers[i]%2;
				if(remainder == 0){*evenNumber = *evenNumber + 1;}
				else{*oddNumber = *oddNumber + 1;}
			}
	}

}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ���� ����, ���� ���� ����, ¦�� ����. Ȧ�� ������ ����Ѵ�.
��		��: ���� ���� ����, ���� ���� ����, ¦�� ����. Ȧ�� ����
��		��: ����.
**************************************************************************/

void Output(ULong positiveNumber,ULong negativeNumber,ULong evenNumber, ULong oddNumber){
		printf("\t\t=====================================================\n");
		printf("\t\t\t���� ���� ���� : %d\n ", positiveNumber);
		printf("\t\t\t���� ���� ���� : %d\n ", negativeNumber);
		printf("\t\t\t¦�� ���� : %d\n ", evenNumber);
		printf("\t\t\tȦ�� ���� : %d\n ", oddNumber);
		

}
