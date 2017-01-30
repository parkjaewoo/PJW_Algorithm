//Reverse.c
/******************************************************************************************
����  ��Ī: Reverse
��		��: ���� ������ ������ �Է����� �޾� �Է¹��� ������ �Ųٷ� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 19��
********************************************************************************************/
#include <stdio.h>
#define MAX 1000
typedef unsigned long int ULong;
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long (*numbers),ULong *countNumber);
void Reverse(ULong countNumber,Long (*numbers));
void Output(ULong countNumber,Long (*numbers));

int main(int argc, char *argv[]){
	Long numbers[MAX];
	ULong countNumber;


	Input(numbers, &countNumber);
	Reverse(countNumber,numbers);
	Output(countNumber,numbers);
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
��		��: ����, �� ����
*************************************************************************/
void Reverse(ULong countNumber,Long (*numbers)) {
	ULong countMove = countNumber /2;
	ULong moveNumber = countNumber-1;
	Long temp;
	ULong i = 0;
	while(i<countMove){
		temp = numbers[i];
		numbers[i] = numbers[moveNumber];
		numbers[moveNumber] = temp;
		moveNumber--;
		i++;
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ������ ������ ����Ѵ�.
��		��: ����, �� ����
��		��: ����.
**************************************************************************/

void Output(ULong countNumber,Long (*numbers)){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while( i<countNumber){ 
		printf(" %d ",numbers[i]);
		i++;
}
}