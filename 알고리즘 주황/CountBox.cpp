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
	Long portionOfTen;
	*fiveKilogramBox = 0;
	*threeKilogramBox = 0;

	if(sugarWeight < 10){
		remainderWeight = sugarWeight - (sugarWeight/3) * 3;
		if(sugarWeight == 8){ 
			*fiveKilogramBox = 1;
			*threeKilogramBox = 1;
		}

		else if(sugarWeight == 5){*fiveKilogramBox = 1;} 
		
		else if(remainderWeight == 0){*threeKilogramBox = sugarWeight / 3;}
	}

	else{
		remainderWeight = sugarWeight - (sugarWeight/10)*10;
		portionOfTen = (sugarWeight / 10) - 1 ;
		if(remainderWeight >= 5){
			*fiveKilogramBox = *fiveKilogramBox + 1;
			remainderWeight = remainderWeight - 5;
		}
		if(remainderWeight == 0){
			*fiveKilogramBox = *fiveKilogramBox + 2;
		}
		else if(remainderWeight == 1){
			*fiveKilogramBox = *fiveKilogramBox + 1;
			*threeKilogramBox = *threeKilogramBox + 2;
		}
		else if(remainderWeight == 2){
			*threeKilogramBox = *threeKilogramBox + 4;
		}
		else if(remainderWeight == 3){
			*fiveKilogramBox = *fiveKilogramBox + 2;
			*threeKilogramBox = *threeKilogramBox  + 1;
		}
		else{
			*fiveKilogramBox = *fiveKilogramBox + 1;
			*threeKilogramBox = *threeKilogramBox + 3;
		}
		*fiveKilogramBox = *fiveKilogramBox + (portionOfTen * 2);
	}
	
	*boxNumber = *fiveKilogramBox + *threeKilogramBox;
	if(*boxNumber == 0){*boxNumber = -1;}


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
