//DayNumber.c
/*************************************************************************************
����  ��Ī: DayNumber.c
��		��: ���̸� �Է¹޾� �����̰� �칰������ �����µ� ��ĥ�� �ɸ����� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2016�� 12�� 28��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong Input();
ULong DayNumber(ULong depth);
void Output(ULong depth,ULong dayNumber);

int main(int argc, char *argv[]){
	ULong depth;
	ULong dayNumber;

	depth = Input();
	dayNumber = DayNumber(depth);
	Output(depth, dayNumber);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� ���� �Է¹޴´�.
��		��: ����	
��		��: ����
*************************************************************************/

ULong Input(){
	ULong depth ;
	printf("\n\n\n\n\n\t\t3�̻� ���� �Է��Ͻʽÿ�! ");
	scanf("%d", &depth);
	return depth;
}

/************************************************************************
����  ��Ī: DayNumber
��		��: ���̸� �Է¹޾� �ϼ��� ����Ѵ�.
��		��: ����	
��		��: �ϼ�
*************************************************************************/

ULong DayNumber(ULong depth){
	ULong dayNumber = 0;
	ULong distance = 0;
	ULong dayDistance = 3;
	ULong nightDistance = 2;
	
	dayNumber++;
	distance += dayDistance;
	
	while(distance<depth){
		distance -= nightDistance;
		dayNumber++;
		distance += dayDistance;
	}
	return dayNumber;
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �ϼ��� ����Ѵ�.
��		��: ����,�ϼ�
��		��: ����.
**************************************************************************/

void Output(ULong depth, ULong dayNumber){
	printf("\t\t=====================================================\n");
	printf("\t\t\t �����̰� ���� %d�� �ö���µ� �ɸ��� �ϼ��� %d �Դϴ�! ", depth,dayNumber);
}
