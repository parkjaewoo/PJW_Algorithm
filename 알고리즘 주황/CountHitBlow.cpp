//CountHitBlow.c
/******************************************************************************************
����  ��Ī: CountHitBlow
��		��: 4���� ������ ������ �Է½�Ű�� �ڸ����� ���ڰ� ������ Hit�� �����Ͽ� ������
			��µǰ�, ���ڰ� �´��� �ڸ����� �ٸ��ٸ� Blow��� ǥ�ÿ� �� ������ ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 17��
********************************************************************************************/
#include <stdio.h>
#define MAX 4
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*numbers1),ULong (*numbers2));
void CountHitBlow(ULong (*numbers1),ULong (*numbers2),ULong *countHit,ULong *countBlow);
void Output(ULong countHit,ULong countBlow);

int main(int argc, char *argv[]){
	ULong numbers1[MAX];
	ULong numbers2[MAX];
	ULong countHit;
	ULong countBlow;


	Input(numbers1,numbers2);
	CountHitBlow(numbers1,numbers2,&countHit,&countBlow);
	Output(countHit,countBlow);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: 
*************************************************************************/

void Input(ULong (*numbers1),ULong (*numbers2)){
	ULong i;

	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers1 + i);
	}

	printf("\n\n\n\t\t���� ���� �� �� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers2 + i);
	}
}

/************************************************************************
����  ��Ī: CountHitBlow
��		��: ��Ʈ ����, ��� ������ ����. 
��		��: ����1,����2
��		��: ��Ʈ ����, ��� ����
*************************************************************************/
void CountHitBlow(ULong (*numbers1),ULong (*numbers2),ULong *countHit,ULong *countBlow) {
	ULong i;
	ULong j;
	*countHit = 0;
	*countBlow = 0;

	for(i = 0; i< MAX; i++){
		for(j = 0; j< MAX; j++){
			if(i == j && numbers1[i] == numbers2[j]){ (*countHit)++;}
			else if (numbers1[i] == numbers2[j]){(*countBlow)++;}
		}
	}
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ��Ʈ ����, ��� ������ ����Ѵ�.
��		��: ��Ʈ ����, ��� ����
��		��: ����.
**************************************************************************/

void Output(ULong countHit,ULong countBlow){
		printf("\t\t=====================================================\n");
		printf("\t\t\t%d Hit , %d Blow ", countHit,countBlow);
}
