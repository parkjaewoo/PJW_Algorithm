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
	ULong remainder;
	ULong positionValue = 0;

	for(int i = 1; i < 10000; i++){
		remainder = i;
		while(remainder > 0){
			positionValue = remainder - (remainder/10)*10;
			if(positionValue == 7) count++;
			remainder /= 10;
		}
	}
	return count;
}


/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ������ ����Ѵ�.
��		��: ����
��		��: ����.
**************************************************************************/

void Output(ULong count){
	printf("\t\t=====================================================\n");
	printf("\t\t\t 10000���� 7�� ������ %d �Դϴ�", count);	
}