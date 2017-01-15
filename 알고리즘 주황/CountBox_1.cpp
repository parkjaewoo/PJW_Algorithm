//CountBox.c
/*************************************************************************************
����  ��Ī: CountBox
��		��: �������Ը� �Է¹�����, 5kg ���ڿ� 3kg ���ڸ� �̿��Ͽ� �ּ�����
			�ʿ��� ���ڼ��� 5kg ���ڿ� 3kg ������ ���� ����.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 11��
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *sugarWeight);
void CountBox(Long sugarWeight,Long *boxNumber,Long *threeKilogramBox,Long *fiveKilogramBox);
void Output(Long boxNumber,Long threeKilogramBox,Long fiveKilogramBox);

int main(int argc, char *argv[]){
	Long sugarWeight;
	Long fiveKilogramBox;
	Long threeKilogramBox;
	Long boxNumber;


	Input(&sugarWeight);
	CountBox(sugarWeight,&boxNumber,&threeKilogramBox,&fiveKilogramBox
		
		);
	Output(boxNumber,threeKilogramBox,fiveKilogramBox);
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

void Input(Long *sugarWeight){
	printf("\n\n\n\n\n\t\t�ֹ����� ������ ���� N(3<=N<=50,000)�� �Էµȴ�.");
	scanf("%d", sugarWeight);
}

/************************************************************************
����  ��Ī: CountBox
��		��: �ڽ� ���� 5kg ���ڿ� 3kg ���ڸ� ����.
��		��: ��������
��		��: �ڽ� ��, 5kg ����, 3kg ����
*************************************************************************/
void CountBox(Long sugarWeight,Long *boxNumber, Long *threeKilogramBox,Long *fiveKilogramBox){
	Long remainderWeight;
	*fiveKilogramBox;
	*threeKilogramBox;

	*fiveKilogramBox = sugarWeight / 5;
	remainderWeight = sugarWeight - (*fiveKilogramBox * 5);
	*threeKilogramBox = remainderWeight / 3;
	remainderWeight = remainderWeight - (*threeKilogramBox * 3);

	while(remainderWeight != 0){
		*fiveKilogramBox = *fiveKilogramBox - 1;
		remainderWeight = remainderWeight + (*threeKilogramBox * 3) + 5;
		*threeKilogramBox = remainderWeight / 3;
		remainderWeight = remainderWeight - (*threeKilogramBox * 3);
	}

	if(*fiveKilogramBox < 0){
		*boxNumber = -1;
		*fiveKilogramBox = 0;
		*threeKilogramBox = 0;
	}
	else{*boxNumber =  *threeKilogramBox + *fiveKilogramBox;}

}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �ڽ� ���� 5kg ���ڿ� 3kg ���ڸ� ����Ѵ�.
��		��: �ڽ� ��, 5kg ����, 3kg ���� 
��		��: ����.
**************************************************************************/

void Output(Long boxNumber,Long threeKilogramBox,Long fiveKilogramBox){
		printf("\t\t=====================================================\n");
		printf("\t\t\t���� �� : %d\n ", boxNumber);
		printf("\t\t\t3kg ���� : %d \t 5kg ���� : %d\n", threeKilogramBox,fiveKilogramBox);

}
