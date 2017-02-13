//Evaluate.c
/**********************************************************************************************
����  ��Ī: Evaluate
��		��: �� ���� ������ �о� ������ ��հ� �� �л��� ������ ��հ��� ���� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 31��
**********************************************************************************************/
#include <stdio.h>
#define STUDENTS 10
typedef unsigned short int UShort;
typedef short int Short;


int main(int argc, char *argv[]);
void Input(UShort (*scores));
void Evaluate(UShort (*scores), Short (*gaps),UShort *average);
void Output(UShort (*scores), Short (*gaps), UShort average);

int main(int argc, char *argv[]){
	UShort scores[STUDENTS];
	Short gaps[STUDENTS];
	UShort average;


	Input(scores);
	Evaluate(scores,gaps, &average);
	Output(scores,gaps,average);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� �������� �Է¹޴´�.
��		��: ����	
��		��: ������
*************************************************************************/
void Input(UShort (*scores)){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� �������� �Է��Ͻʽÿ�. : ");
	for(i=0;i<STUDENTS;i++){
		scanf_s("%hu", scores+i);
	}
}


/************************************************************************
����  ��Ī: Evaluate
��		��: �������� �Է¹޾� ��հ� ���̵��� ���Ѵ�.
��		��: ������
��		��: ���,���̵�,������
*************************************************************************/
void Evaluate(UShort (*scores), Short (*gaps),UShort *average){
	UShort i;
	*average;
	UShort sum=0;

	for(i=0;i<STUDENTS;i++){sum += scores[i];}
	*average = sum / STUDENTS;
	for(i=0;i<STUDENTS;i++){gaps[i] = scores[i] - *average;}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���,���̵�,�������� ����Ѵ�.
��		��: ���,���̵�,������
��		��: ����.
**************************************************************************/

void Output(UShort (*scores), Short (*gaps), UShort average){
	UShort i;

	printf("\t\t=====================================================\n");
	printf("\t\t���� ��\n");
	printf("\t\t-----------------------------------------------------\n");
	for(i=0; i<STUDENTS;i++){printf("\t\t %d \t %d\n",scores[i], gaps[i]);}
	printf("\t\t=====================================================\n");
	printf("\t\t��� : %d\n",average);
}

