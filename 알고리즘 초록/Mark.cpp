//Mark.c
/**********************************************************************************************
����  ��Ī: Mark
��		��: �л� 10���� ������ ��ȣ ������ ���ĵǾ� �Էµ� ��, ���� ������ ���Ͽ� 
			��ȣ, ����, ���� ������ �Բ� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 23��
**********************************************************************************************/
#include <stdio.h>
#define STUDENTS 10
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*totalScores));
void Mark(UShort (*totalScores), UShort (*numbers),UShort (*ranks));
void Output(UShort (*totalScores), UShort (*numbers),UShort (*ranks));

int main(int argc, char *argv[]){
	UShort totalScores[STUDENTS];
	UShort numbers[STUDENTS];
	UShort ranks[STUDENTS];


	Input(totalScores);
	Mark(totalScores,numbers, ranks);
	Output(totalScores,numbers, ranks);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� �N������ �Է¹޴´�.
��		��: ����	
��		��: ������
*************************************************************************/
void Input(UShort (*totalScores)){
	UShort i;
	printf("\n\n\n\n\n\t�� �� �����鸦 �Է��Ͻʽÿ�. : ");
	for(i=0;i<STUDENTS;i++){
		scanf_s("%hu", totalScores+i);
	}
	printf("\n");
	printf("\n");
}


/************************************************************************
����  ��Ī: Mark
��		��: �������� �Է¹޾� ����� �ű��. 
��		��: ������
��		��: ��ȣ��, ������, �����
*************************************************************************/
void Mark(UShort (*totalScores), UShort (*numbers),UShort (*ranks)){
	UShort  i;
	UShort  j;
	UShort rank;

	for(i=0;i<STUDENTS;i++)
	{
		rank = 1;
		numbers[i] = (i+1);
		for(j=0;j<STUDENTS;j++){
			if(totalScores[i] < totalScores[j]){rank++;}
		}
		ranks[i] = rank;
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ��ȣ��, ������, ������� ����Ѵ�.
��		��: ��ȣ��, ������, �����
��		��: ����.
**************************************************************************/

void Output(UShort (*totalScores), UShort (*numbers),UShort (*ranks)){
	UShort i;
	printf("\t ��ȣ \t ���� \t ����\n");
	printf("\t=====================================================\n");
	printf("\t=====================================================\n");
	for(i=0; i<STUDENTS;i++){
		printf("\t %d \t %d \t %d\n",numbers[i],totalScores[i],ranks[i]); 
	}
}

