//FindThree.c
/******************************************************************************************
����  ��Ī: FindThree
��		��: �ڿ��� N�� �Է¹޾� 1���� N ������ ���ڸ� ����Ѵ�. ��, 1���� N ������
			�����߿��� 3�� ����� 3 �� ���� ���ڿ� ���ؼ��� �ش� ���� ��ſ�
			"clap" �̶�� ���ڸ� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 21��
********************************************************************************************/
#include <stdio.h>
#define MAX 1000
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort *number);
void FindThree(UShort number, UShort (*filteringNumbers));
void Output(UShort number, UShort (*filteringNumbers));

int main(int argc, char *argv[]){
	UShort number;
	UShort filteringNumbers[MAX];


	Input(&number);
	FindThree(number,filteringNumbers);
	Output(number,filteringNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: ��
*************************************************************************/
void Input(UShort *number){

	printf("\n\n\n\n\n\t\t���� �Է��Ͻʽÿ�. : ");
	scanf_s("%hu", number);
	
}


/************************************************************************
����  ��Ī: FindThree
��		��: ���� �Է¹޾� �ɷ��� ������ ���Ѵ�. 
��		��: ��
��		��: ��,�ɷ��� ����  
*************************************************************************/
void FindThree(UShort number, UShort (*filteringNumbers)){
	UShort remainder;
	UShort i = 0;
	UShort one;
	UShort ten;
	UShort hundred;

	while(i<=number){
		filteringNumbers[i] = i;
		remainder = i % 3;
		one = i % 10;
		ten = (i%100)/10;
		hundred = i/100;
		if(remainder == 0 || one == 3 || ten == 3 || hundred == 3) {filteringNumbers[i] = 0;}  
		i++;
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �ɷ��� ���鸦 ����Ѵ�.
��		��: ��,�ɷ��� ���� 
��		��: ����.
**************************************************************************/

void Output(UShort number, UShort (*filteringNumbers)){
	UShort i=1;
	printf("\t\t=====================================================\n");
	while(i<=number){
		if(filteringNumbers[i] == 0){printf(" clap ");}
		else{printf(" %d ", filteringNumbers[i]);}
		i++;
	}
}

