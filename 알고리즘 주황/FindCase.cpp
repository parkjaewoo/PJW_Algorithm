//FindCase.c
/******************************************************************************************
����  ��Ī: FindCase
��		��: �ֻ��� �� ���� ���� �� ������ ���� ���� � ������ �ִ��� ����Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 20��
********************************************************************************************/
#include <stdio.h>
#define MAX 6
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong *number);
void FindCase(ULong number,ULong (*firstPips),ULong (*secondPips), ULong *countMix);
void Output(ULong (*firstPips),ULong (*secondPips),ULong countMix);

int main(int argc, char *argv[]){
	ULong firstPips[MAX];
	ULong secondPips[MAX];
	ULong countMix;
	ULong number;


	Input(&number);
	FindCase(number,firstPips,secondPips,&countMix);
	Output(firstPips,secondPips,countMix);
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

void Input(ULong *number){
	printf("\n\n\n\n\n\t\t12���� �ڿ����� �Է��Ͻʽÿ�. : ");
	scanf("%d", number);
}

/**************************************************************************
����  ��Ī: FindCase
��		��: �Է¹��� �ڿ����� ���� ���� ������ �ֻ��� ���� ������ ����Ѵ�.
��		��: ��
��		��: ù ��° ���ݵ�, �� ��° ���ݵ�, ���� ����
****************************************************************************/
void FindCase(ULong number,ULong (*firstPips),ULong (*secondPips), ULong *countMix) {
	ULong firstPip=0;
	ULong secondPip;
	ULong i = 1;
	ULong j = 0;
	*countMix = 0;

	while(i<number && i <= MAX){
		firstPip++;
		secondPip = number - i;
		if(secondPip <= MAX){
			(*countMix)++;
			firstPips[j] = firstPip;
			secondPips[j] = secondPip;
			j++;
		}
		i++;
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ù ��° ���ݵ�, �� ��° ���ݵ��� ����Ѵ�.
��		��: ù ��° ���ݵ�, �� ��° ���ݵ�, ���� ����
��		��: ����.
**************************************************************************/

void Output(ULong (*firstPips),ULong (*secondPips),ULong countMix){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while(i<countMix){
		printf("  %d %d   ",firstPips[i],secondPips[i]);
		i++;
}
}