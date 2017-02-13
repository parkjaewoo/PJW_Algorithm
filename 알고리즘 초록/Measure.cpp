//Measure.c
/**********************************************************************************************
����  ��Ī: Measure
��		��: �ϰ����� Ű�� �Է����� �־�����. �� �߿��� ���� ū Ű�� �ι�°�� ū Ű�� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 23��
**********************************************************************************************/
#include <stdio.h>
#define MAX 7
typedef unsigned short int UShort;


int main(int argc, char *argv[]);
void Input(UShort (*heights));
void Measure(UShort (*heights), UShort *tallest,UShort *secondTall);
void Output(UShort tallest,UShort secondTall);

int main(int argc, char *argv[]){
	UShort heights[MAX];
	UShort tallest;
	UShort secondTall;


	Input(heights);
	Measure(heights,&tallest, &secondTall);
	Output(tallest, secondTall);
	printf("\n");
	getchar();
	getchar();
	return 0;
}


/************************************************************************
����  ��Ī: Input
��		��: ����ڷκ��� Ű����� Ű���� �Է¹޴´�.
��		��: ����	
��		��: Ű��
*************************************************************************/
void Input(UShort (*heights)){
	UShort i;
	printf("\n\n\n\n\n\t\t�ϰ� �� Ű�� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf_s("%hu", heights+i);
	}
	
}


/************************************************************************
����  ��Ī: Measure
��		��: Ű���� �Է¹޾� ���� ū Ű�� �� ��°�� ū Ű�� ���Ѵ�. 
��		��: Ű��
��		��: ���� ū Ű, �ι� °�� ū Ű
*************************************************************************/
void Measure(UShort (*heights), UShort *tallest,UShort *secondTall){
	UShort temp;
	UShort  i;
	UShort  j;

	for(i=0;i<MAX-1;i++){
		for(j=i+1;j<MAX;j++){
			if(heights[j] > heights[i]){
				temp = heights[i];
				heights[i] = heights[j];
				heights[j] = temp;
			}
		}
	}
	*tallest = heights[0];
	*secondTall = heights[1];

}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ���� ū Ű, �ι� °�� ū Ű�� ����Ѵ�.
��		��: ���� ū Ű, �ι� °�� ū Ű
��		��: ����.
**************************************************************************/

void Output(UShort tallest,UShort secondTall){
	printf("\t\t=====================================================\n");
	printf("\t\t%d \t%d",tallest,secondTall);
}

