//FindOddNumber.c
/******************************************************************************************
����  ��Ī: FindOddNumber
��		��: 7���� �ڿ����� �־��� ��, �̵� �� Ȧ���� �ڿ������� ��� ���
			�� ���� ���ϰ�, �� Ȧ���� �ּҰ��� ã�´�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 21��
********************************************************************************************/
#include <stdio.h>
#define MAX 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers));
void FindOddNumber(UShort (*numbers), UShort *sumOddNumber, UShort *minimumOddNumber);
void Output(UShort sumOddNumber, UShort minumumOddNumber);

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort sumOddNumber;
	UShort minimumOddNumber;


	Input(numbers);
	FindOddNumber(numbers,&sumOddNumber,&minimumOddNumber);
	Output(sumOddNumber,minimumOddNumber);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: ����
*************************************************************************/
void Input(UShort (*numbers)){
	UShort i;

	printf("\n\n\n\n\n\t\t�ϰ� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers + i);
	}
	
}


/************************************************************************
����  ��Ī: FindOddNumber
��		��: ������ �Է¹޾� Ȧ���� �հ�, �ּҰ� Ȧ���� ���Ѵ�. 
��		��: ����
��		��: Ȧ���� ��, �ּҰ� Ȧ��  
*************************************************************************/
void FindOddNumber(UShort (*numbers), UShort *sumOddNumber, UShort *minimumOddNumber) {
	UShort remainder;
	UShort i;
	*sumOddNumber = 0;
	*minimumOddNumber = 0;

	for(i = 0; i<MAX;i++){
		remainder = numbers[i]%2;
		if(remainder == 1){
			*sumOddNumber += numbers[i];
			if(numbers[i] < *minimumOddNumber || *minimumOddNumber == 0) {*minimumOddNumber = numbers[i];}
		}
	}


}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ȫ���� �հ� �ּҰ� Ȧ���� ����Ѵ�.
��		��: ȫ���� ��, �ּҰ� Ȧ�� 
��		��: ����.
**************************************************************************/

void Output(UShort sumOddNumber, UShort minimumOddNumber){
	printf("\t\t=====================================================\n");
	if(sumOddNumber == 0){
		printf("\t\t -1");
	}
	else{
		printf("\t\t%d \t\t%d", sumOddNumber, minimumOddNumber); 
	}
	
}

