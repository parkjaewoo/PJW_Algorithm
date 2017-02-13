//Arrange.c
/**********************************************************************************************
����  ��Ī: Arrange
��		��: 10���� ���ڸ� �о� ������������ ������ ��, ���� �ϱ� ���� ���ڵ��
			������ ���� ���ڵ��� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 2�� 2��
**********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*numbers));
void Arrange(UShort (*numbers), UShort (*arrangedNumbers));
void Output(UShort (*numbers), UShort (*arrangedNumbers));

int main(int argc, char *argv[]){
	UShort numbers[MAX];
	UShort arrangedNumbers[MAX];
	

	Input(numbers);
	Arrange(numbers,arrangedNumbers);
	Output(numbers,arrangedNumbers);
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
void Input(UShort (*numbers)){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� Ű�� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", numbers+i);
	}
	
}


/****************************************************************************
����  ��Ī: Arrange
��		��: ������ �Է¹޾� ������������ �迭�� ������ ���Ѵ� 
��		��: ����
��		��: ����,�迭 �� ����
*****************************************************************************/
void Arrange(UShort (*numbers), UShort (*arrangedNumbers)){
	UShort temp;
	UShort  i=0;
	UShort  j;


	for(i=0;i<MAX;i++){arrangedNumbers[i] = numbers[i];}

	for(i=0; i<MAX-1; i++){
		j=0;
		while(j<MAX-i){
			if(arrangedNumbers[j] > arrangedNumbers[j+1]){
				temp = arrangedNumbers[j];
				arrangedNumbers[j] = arrangedNumbers[j+1];
				arrangedNumbers[j+1] = temp;
			}
			j++;
		}
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ����, �迭�� ������ ����Ѵ�.
��		��: ����, �迭�� ����
��		��: ����.
**************************************************************************/

void Output(UShort (*numbers), UShort (*arrangedNumbers)){
	UShort i;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	for(i=0;i<MAX;i++){printf(" %d ",numbers[i]);}
	printf("\n\t\t");
	for(i=0;i<MAX;i++){printf(" %d ",arrangedNumbers[i]);}

}

