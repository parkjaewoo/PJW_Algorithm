//Neation.c
/**********************************************************************************************
����  ��Ī: Neation
��		��: 10���� ���� ������ �� ���� �迭�� �����ļ����� ���ĵǾ� ���� ��, 20����
			�迭��ҷ� ������ �迭�� �����Ͽ� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 25��
**********************************************************************************************/
#include <stdio.h>
#define TWENTY 20
#define TEN 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*firstNumbers),UShort (*secondNumbers));
void Neation(UShort (*firstNumbers),UShort (*secondNumbers),UShort (*arrangeNumbers));
void Output(UShort (*arrangeNumbers));

int main(int argc, char *argv[]){
	UShort firstNumbers[TEN];
	UShort secondNumbers[TEN];
	UShort arrangeNumbers[TWENTY];
	

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
	for(i=0;i<TEN;i++){
		scanf_s("%hu", firstNumbers+i);
	}
	printf("\n");
	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<TEN;i++){
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
	UShort temp;
	UShort  i;
	UShort  j=0;

	for(i=0;i<TEN;i++){
		arrangeNumbers[j] = firstNumbers[i];
		j++;
		arrangeNumbers[j] = secondNumbers[i];
		j++;
	}

	for(i=0;i<TWENTY;i++){
		for(j=i;j<TWENTY;j++){
			if(arrangeNumbers[j] < arrangeNumbers[i]){
				temp = arrangeNumbers[i];
				arrangeNumbers[i] = arrangeNumbers[j];
				arrangeNumbers[j] = temp;
			}
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
	for(i=0;i<TWENTY;i++){
		printf(" %d ",arrangeNumbers[i]);
	}

}

