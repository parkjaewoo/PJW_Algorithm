//Reverse.c
/******************************************************************************************
����  ��Ī: Reverse
��		��: ���� ������ ������ �Է����� �޾� �Է¹��� ������ �Ųٷ� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 17��
********************************************************************************************/
#include <stdio.h>
#define MAX 1000
typedef unsigned long int ULong;
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long (*numbers),ULong *countNumber);
void Reverse(ULong countNumber,Long (*numbers), Long (*reverseNumbers));
void Output(ULong countNumber,Long (*reverseNumbers));

int main(int argc, char *argv[]){
	Long numbers[MAX];
	Long reverseNumbers[MAX];
	ULong countNumber;


	Input(numbers, &countNumber);
	Reverse(countNumber,numbers,reverseNumbers);
	Output(countNumber,reverseNumbers);
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

void Input(Long (*numbers),ULong *countNumber){
	ULong i=0;

	printf("\n\n\n\n\n\t\t���� ������ �Է��Ͻʽÿ�. : ");
	scanf("%ld", countNumber);

	printf("\n\n\n\t\t���� ������� ���� �Է��Ͻʽÿ�. : ");
	while(i<*countNumber){
		scanf("%d", numbers + i);
		i++;
	}
}

/************************************************************************
����  ��Ī: Reverse
��		��: �Է¹��� ������ ������ ����Ѵ� 
��		��: ���� ����, ����
��		��: ������ ����, �� ����
*************************************************************************/
void Reverse(ULong countNumber,Long (*numbers), Long (*reverseNumbers)) {
	Long i = countNumber-1;
	ULong j = 0;
	while(i>=0){
		reverseNumbers[j] = numbers[i];
		j++;
		i--;
	}		
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ������ ������ ����Ѵ�.
��		��: ������ ����, �� ����
��		��: ����.
**************************************************************************/

void Output(ULong countNumber,Long (*reverseNumbers)){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while( i<countNumber){ //while ������ ��ĥ ��.
	printf(" %d ",reverseNumbers[i]);
	i++;
}
}