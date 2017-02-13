//Grade.c
/**********************************************************************************************
����  ��Ī: Grade
��		��: 10���� ������ �Էµȴ�. 1��� 7���� �������� �ִµ�, ���� ���� ������ 
			���� ���� ������ ������ ���� ������ ���Ѵ�. 
			��� �������� ���� ������ ��������, ������ ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 31��
**********************************************************************************************/
#include <stdio.h>
#define PLAYERS 10
#define JUDGES 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*scores)[JUDGES]);
void Grade(UShort (*scores)[JUDGES],UShort (*personalScores), UShort (*ranks));
void Output(UShort (*personalScores), UShort (*ranks));

int main(int argc, char *argv[]){
	UShort scores[PLAYERS][JUDGES];
	UShort personalScores[PLAYERS];
	UShort ranks[PLAYERS];


	Input(scores);
	Grade(scores,personalScores,ranks);
	Output(personalScores,ranks);
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
void Input(UShort (*scores)[JUDGES]){
	UShort i;
	UShort j;

	printf("\n\n\n\n\n\t������ �ϰ� �� ������ �Է��Ͻʽÿ�. :   ");
	for(i=0;i<PLAYERS;i++){
		for(j=0;j<JUDGES;j++){
			scanf_s("%hu", scores[i]+j);
			printf("\t\t\t");
		}
	}
}


/************************************************************************
����  ��Ī: Grade
��		��: �������� �Է¹޾� ���� ������ �������� ���Ѵ�
��		��: ������
��		��: ���� ����, ������
*************************************************************************/
void Grade(UShort (*scores)[JUDGES],UShort (*personalScores), UShort (*ranks)){
	UShort temp;
	UShort i;
	UShort j;
	UShort k;
	UShort rank;
	UShort sum;

	for(i=0;i<PLAYERS;i++){
		for(j=0;j<JUDGES-1;j++){
			for(k=j+1;k<JUDGES;k++){
				if(scores[i][j] < scores[i][k]){
					temp = scores[i][j];
					scores[i][j] = scores[i][k];
					scores[i][k] = temp;
				}
			}
		}
	}

	for(i=0;i<PLAYERS;i++){
		sum = 0;
		for(j=1;j<JUDGES-1;j++){sum += scores[i][j];}
		personalScores[i] = sum;
	}

	for(i=0;i<PLAYERS;i++){
		rank = 1;
		for(j = 0; j<PLAYERS; j++){
			if(personalScores[i] < personalScores[j]){rank++;}
		}
		ranks[i] = rank;
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ����, �������� ����Ѵ�.
��		��: ���� ����, ������
��		��: ����.
**************************************************************************/

void Output(UShort (*personalScores), UShort (*ranks)){
	UShort i;

	printf("\n\t\t=====================================================\n");
	printf("\t\t���� \t ����\n");
	printf("\t\t-----------------------------------------------------\n");
	for(i=0;i<PLAYERS;i++){
		printf("\t\t%d \t %d\n", personalScores[i],ranks[i]);
	}
}

