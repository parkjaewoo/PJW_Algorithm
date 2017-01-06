//MakeBestNumber.c
/*************************************************************************************
����  ��Ī: MakeBestNumber 
��		��: ���� �Է¹޾� ���� ū ���� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 5��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong MakeBestNumber(ULong number);
void Output(ULong pain);

int main(int argc, char *argv[]){
	ULong number;
	ULong makeBestNumber;

	number = Input();
	makeBestNumber = MakeBestNumber(number);
	Output(makeBestNumber);
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

ULong Input(){
	ULong number ;
	printf("\n\n\n\n\n\t\t���� �Է��Ͻʽÿ�! ");
	scanf("%d", &number);
	return number;
}

/************************************************************************
����  ��Ī: MakeBestNumber 
��		��: ���� ū ���� ���Ѵ�
��		��: ��
��		��: ���� ū ��
*************************************************************************/
ULong MakeBestNumber (ULong number){
	ULong bestNumber = 0;
	ULong portion = 0;
	ULong positionValue;
	ULong bestPositionValue;
	ULong location;
	ULong minusNumber = 0;
	ULong remainder ;

	remainder = number;
	while(bestNumber < number){
		remainder = remainder - minusNumber;
		portion = remainder;
		bestPositionValue  = 0;
		location = 1;
		minusNumber = 0;
		while(portion > 0){

			positionValue = portion % 10;
			if(positionValue > bestPositionValue){
				bestPositionValue = positionValue;
				minusNumber = bestPositionValue * location;
			}
			portion /= 10;
			location *= 10;
		}
		bestNumber = (bestNumber * 10) + bestPositionValue;
	}
	return bestNumber;
	
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ū ���� ����Ѵ�.
��		��: ���� ū ��
��		��: ����.
**************************************************************************/

void Output(ULong makeBestNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t ���� ū �� : %d ", makeBestNumber);	
}
