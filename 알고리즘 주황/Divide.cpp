//Divide.c
/*************************************************************************************
����  ��Ī: Divide
��		��: �� ���� �Է¹޾� ��� �������� ���Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 9��
*************************************************************************************/
#include <stdio.h>
typedef signed long int Long;

int main(int argc, char *argv[]);
void Input(Long *firstNumber,Long *secondNumber);
void Divide(Long firstNumber,Long secondNumber,Long *portion, Long *remainder);
void Output(Long portion, Long remainder);

int main(int argc, char *argv[]){
	Long firstNumber;
	Long secondNumber;
	Long portion;
	Long remainder;

	Input(&firstNumber, &secondNumber);
	Divide(firstNumber,secondNumber,&portion,&remainder);
	Output(portion,remainder);
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

void Input(Long *firstNumber,Long *secondNumber){
	printf("\n\n\n\n\n\t\t�� ���� �Է��Ͻʽÿ�! ");
	scanf("%d %d", firstNumber,secondNumber);
}

/************************************************************************
����  ��Ī: Divide
��		��: ��� �������� ���Ѵ�
��		��: ù��° ��, �ι�° ��
��		��: ��, ������
*************************************************************************/

void Divide(Long firstNumber,Long secondNumber,Long *portion, Long *remainder){
	*portion = firstNumber / secondNumber;
	//*remainder = firstNumber - (*portion * secondNumber);
	*remainder = firstNumber % secondNumber;

}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� ��� �������� ����Ѵ�.
��		��: ��,������
��		��: ����.
**************************************************************************/

void Output(Long portion, Long remainder){
	printf("\t\t=====================================================\n");
	printf("\t\t\t �� : %d   ������ : %d\n", portion,remainder);

}
