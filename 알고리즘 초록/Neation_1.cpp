//Neation.c
/**********************************************************************************************
����  ��Ī: Neation
��		��: 10���� ���� ������ �� ���� �迭�� �����ļ����� ���ĵǾ� ���� ��, 20����
			�迭��ҷ� ������ �迭�� �����Ͽ� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 30��
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*firstNumbers),UShort (*secondNumbers));
void Neation(UShort (*firstNumbers),UShort (*secondNumbers),UShort (*arrangeNumbers));
void Output(UShort (*arrangeNumbers));

int main(int argc, char *argv[]){
	UShort firstNumbers[MAX];
	UShort secondNumbers[MAX];
	UShort arrangeNumbers[MAX*2];
	

	Input(firstNumbers,secondNumbers);
	Neation(firstNumbers,secondNumbers,arrangeNumbers);
	Output(arrangeNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ù��° ����, �ι�° ������ �Է¹޴´�.
��		��: ����	
��		��: ù��° ����, �ι�° ����
*************************************************************************/
void Input(UShort (*firstNumbers),UShort (*secondNumbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", firstNumbers+i);
	}
	printf("\n");
	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", secondNumbers+i);
	}
}


/****************************************************************************
����  ��Ī: Neation
��		��: ù��° ����, �ι�° ������ �Է¹޾� ������ ������ ���Ѵ� 
��		��: ù��° ����, �ι�° ����
��		��: ������ ����
*****************************************************************************/
void Neation(UShort (*firstNumbers),UShort (*secondNumbers),UShort (*arrangeNumbers)){
	UShort  i=0;
	UShort  j=0;
	UShort  k=0;

	while(i<MAX && j<MAX){
		if(firstNumbers[i] < secondNumbers[j]){
			arrangeNumbers[k] = firstNumbers[i];
			k++;
			i++;
		}
		else{
			arrangeNumbers[k] = secondNumbers[j];
			k++;
			j++;
		}
	}
	if(i==MAX){
		while(j<MAX){
			arrangeNumbers[k] = secondNumbers[j];
			k++;
			j++;
		}
	}
	else if(j==MAX){
		while(i<MAX){
			arrangeNumbers[k] = firstNumbers[i];
			k++;
			i++;
			}	
		}
	
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ������ ���鸦 ����Ѵ�.
��		��: ������ ����
��		��: ����.
**************************************************************************/

void Output(UShort (*arrangeNumbers)){
	UShort i;
	printf("\n\n");
	printf("\t=====================================================\n");
	printf("\t");
	for(i=0;i<MAX*2;i++){
		printf(" %d ",arrangeNumbers[i]);
	}

}

