//SevenCount.c
/*************************************************************************************
����  ��Ī: SevenCount
��		��: 10000������ ���鿡�� 7�� �� ������ ���Ѵ�
��  ��  ��: �����
�ۼ�  ����: 2016�� 12�� 31��
*************************************************************************************/
#include <stdio.h>
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
ULong sevenCount();
void Output(ULong count);

int main(int argc, char *argv[]){
	ULong count;

	count = sevenCount();
	Output(count);
	printf("\n");
	getchar();
	getchar();
	return 0;
}



/************************************************************************
����  ��Ī: sevenCount
��		��: 10000������ 7�� ������ ���Ѵ�
��		��: ����
��		��: ����
*************************************************************************/
ULong sevenCount(){
	ULong count = 0;
	ULong one = 0;
	ULong ten = 0;
	ULong hundred = 0;
	ULong thousand = 0;

	for(int i = 0; i < 10000; i++){
		//one = i - (i/10)*10;
		one = i % 10;
		//ten = (i/10) - ((i/10)/10)*10;
		ten = (i%100)/10 ;
		//hundred = (i/100) - ((i/100)/10)*10;
		hundred = (i%1000)/100;
		thousand = i/1000;
		if(one==7) count++;
		if(ten == 7) count++;
		if(hundred == 7) count++;
		if(thousand == 7) count++;
	}
	return count;
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �� ����Ѵ�.
��		��: ����
��		��: ����.
**************************************************************************/

void Output(ULong count){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 10000���� 7�� ������ %d �Դϴ�", count);	
}