//FindThree.c
/******************************************************************************************
����  ��Ī: FindThree
��		��: �ڿ��� N�� �Է¹޾� 1���� N ������ ���ڸ� ����Ѵ�. ��, 1���� N ������
			�����߿��� 3�� ����� 3 �� ���� ���ڿ� ���ؼ��� �ش� ���� ��ſ�
			"clap" �̶�� ���ڸ� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 24��
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
	UShort location;
	UShort positionValue;

	while(i<number){
		filteringNumbers[i] = i+1;
		remainder = filteringNumbers[i] - (filteringNumbers[i] /3)*3;
		if(remainder != 0){
			location = 1;
			while(location <= i){
				positionValue = filteringNumbers[i] - (filteringNumbers[i]/location)*location;
				if(positionValue == 3){filteringNumbers[i] = 0;}
				location *= 10;
			}
		}
		else{filteringNumbers[i] = 0;}
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
	UShort i=0;
	printf("\t\t=====================================================\n");
	while(i<number){
		if(filteringNumbers[i] == 0){printf(" clap ");}
		else{printf(" %d ", filteringNumbers[i]);}
		i++;
	}
}

