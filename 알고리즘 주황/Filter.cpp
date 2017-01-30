//Filter.c
/******************************************************************************************
����  ��Ī: Filter
��		��: �� ���� ���ڸ� �Է¹޾� �ߺ��� ���ڸ� ������ ������ ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 19��
********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned long int ULong;
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long (*numbers));
void Filter(Long (*numbers), Long (*notOverlap), ULong *countNotOverlap);
void Output(Long (*notOverlap),ULong countNotOverlap);

int main(int argc, char *argv[]){
	Long numbers[MAX];
	Long notOverlap[MAX];
	ULong countNotOverlap;


	Input(numbers);
	Filter(numbers,notOverlap,&countNotOverlap);
	Output(notOverlap,countNotOverlap);
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
void Input(Long (*numbers)){
	ULong i;

	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%ld", numbers + i);
	}
	
}


/************************************************************************
����  ��Ī: Filter
��		��: ������ �Է¹޾� �ߺ� �ȵ� ���� �����ؼ� ����Ѵ�. 
��		��: ����
��		��: �ߺ� �� �� ����, �ߺ� �� �� ���� ����  
*************************************************************************/
void Filter(Long (*numbers),Long (*notOverlap), ULong *countNotOverlap) {
	ULong i;
	ULong j;
	ULong count = 0;
	*countNotOverlap = 0;
	ULong k=0;
	
	for(i = 0;i<MAX;i++){
		count=0;
		for(j = 0; j<MAX; j++){
			if(numbers[i] == numbers[j]){count++;}
		}
		if(count == 1){
			notOverlap[k] = numbers[i];
			k++;
			(*countNotOverlap)++;
		}
	}

}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �ߺ� �� �� ������ ����Ѵ�.
��		��: �ߺ� �� �� ����, �ߺ� �� �� ���� ���� 
��		��: ����.
**************************************************************************/

void Output(Long (*notOverlap),ULong countNotOverlap){
	ULong i = 0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while( i<countNotOverlap){ 
		printf(" %d ",notOverlap[i]);
		i++;
	}	
}