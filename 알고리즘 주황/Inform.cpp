//Inform.c
/******************************************************************************************
����  ��Ī: Inform
��		��: 10���� ������ �Է¹޾� ������� ������ ���� 100���� �ִ��� ����� ������ ���Ѵ�.
			(�� ���� ���� ���� ���� �� ���� ������ �����Ѵ�.)
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 21��
********************************************************************************************/
#include <stdio.h>
#define MAX 10
#define TARGETSCORE 100
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*scores));
void Inform(UShort (*scores), UShort *getScore);
void Output(UShort getScore);

int main(int argc, char *argv[]){
	UShort scores[MAX];
	UShort getScore;


	Input(scores);
	Inform(scores, &getScore);
	Output(getScore);
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
void Input(UShort *scores){
	UShort i;
	printf("\n\n\n\n\n\t\t�� �� ������ �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", scores+i);
	}
	
}


/************************************************************************
����  ��Ī: Inform
��		��: �������� �Է¹޾� ���� ������ ���Ѵ�. 
��		��: ������
��		��: ���� ���� 
*************************************************************************/
void Inform(UShort (*scores), UShort *getScore){
	UShort lowerScore;
	UShort higherScore;
	UShort i=0;
	*getScore = 0;

	while(*getScore < TARGETSCORE && i<=MAX){
		*getScore += scores[i];
		i++;
	}
	if(*getScore > TARGETSCORE){
		lowerScore = TARGETSCORE - (*getScore - scores[i-1]);
		higherScore = *getScore - TARGETSCORE;
		if(lowerScore != higherScore){ *getScore -= scores[i-1];}
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ������ ����Ѵ�.
��		��: ���� ����
��		��: ����.
**************************************************************************/

void Output(UShort getScore){
	printf("\t\t=====================================================\n");
	printf("\t\t%d",getScore);
}

