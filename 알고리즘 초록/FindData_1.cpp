//FindData.c
/**********************************************************************************************
����  ��Ī: FindData
��		��: 10���� �����Ͱ� �Էµ� �� ã���� �ϴ� �����Ͱ� �Էµ� �� ã���� �ϴ� �����Ͱ�
			���� �� �� ��ġ�� ����ϰ�, ���� ���� ������ �޼����� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 30��
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers), UShort *data);
void FindData(UShort (*numbers), UShort data,UShort *location);
void Output(UShort location);

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort data;
	UShort location;


	Input(numbers, &data);
	FindData(numbers,data, &location);
	Output(location);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ������ �Է¹޴´�.
��		��: ����	
��		��: ����
*************************************************************************/
void Input(UShort (*numbers), UShort *data){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� Ű�� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers+i);
	}
	printf("\n\n\t\tã�� �ڷḦ �Է��ϼ���. : ");
	scanf_s("%hu", data);
}


/************************************************************************
����  ��Ī: FindData
��		��: ����� �ڷḦ �Է¹޾� ��ġ�� ã�´�.
��		��: ����,�ڷ�
��		��: ��ġ
*************************************************************************/
void FindData(UShort (*numbers), UShort data,UShort *location){
	UShort  i;
	UShort median = ((MAX/2) + (MAX%2))-1;
	*location = median;
	for(i=median;numbers[*location] != data && i != 0;i/=2){
		median =  (median/2) + (median%2);
		if(numbers[*location] < data){*location += median; }
		else if(numbers[*location] > data){*location -= median; }	
	}
	if( numbers[*location] != data){*location = 0;}
	else{(*location)++;}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ��ġ�� ����Ѵ�.
��		��: ��ġ
��		��: ����.
**************************************************************************/

void Output(UShort location){
	printf("\t\t=====================================================\n");
	printf("\t\t");
	if(location == 0) {printf("ã���ô� �����Ͱ� �����ϴ�.");}
	else{printf("%d",location);}
}

