//Arrange.c
/**********************************************************************************************
����  ��Ī: Arrange
��		��: 10���� ���ڸ� �о� ������������ ������ ��, ���� �ϱ� ���� ���ڵ��
			������ ���� ���ڵ��� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 24��
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*beforeNumbers));
void Arrange(UShort (*beforeNumbers), UShort (*afterNumbers));
void Output(UShort (*beforeNumbers), UShort (*afterNumbers));

int main(int argc, char *argv[]){
	UShort beforeNumbers[MAX];
	UShort afterNumbers[MAX];
	

	Input(beforeNumbers);
	Arrange(beforeNumbers,afterNumbers);
	Output(beforeNumbers,afterNumbers);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �� ������ �Է¹޴´�.
��		��: ����	
��		��: ���� �� ����
*************************************************************************/
void Input(UShort (*beforeNumbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� Ű�� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", beforeNumbers+i);
	}
	
}


/****************************************************************************
����  ��Ī: Arrange
��		��: ���� �� ������ �Է¹޾� ������������ ������ ���� �� ������ ���Ѵ� 
��		��: ���� �� ����
��		��: ���� �� ����, ���� �� ����
*****************************************************************************/
void Arrange(UShort (*beforeNumbers), UShort (*afterNumbers)){
	UShort temp;
	UShort  i;
	UShort  j;

	for(i=0;i<MAX;i++){afterNumbers[i] = beforeNumbers[i];}


	for(i =0;i<MAX;i++){
		for(j=i;j<MAX;j++){
			if(afterNumbers[j] < afterNumbers[i]){
				temp = afterNumbers[i];
				afterNumbers[i]= afterNumbers[j];
				afterNumbers[j] = temp;
			}
		}
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� �� ����, ���� �� ���鸦 ����Ѵ�.
��		��: ���� �� ����, ���� �� ����
��		��: ����.
**************************************************************************/

void Output(UShort (*beforeNumbers), UShort (*afterNumbers)){
	UShort i;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){
		printf(" %d ",beforeNumbers[i]);
	}
	printf("\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){
		printf(" %d ",afterNumbers[i]);
	}

}

