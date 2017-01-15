//Convert.c
/*************************************************************************************
����  ��Ī: Convert
��		��: ����, ȭ�� ���а� �µ��� �Է� �ɶ�, ȭ���� ������, ������ ȭ���� ��ȯ�Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 9��
*************************************************************************************/
#include <stdio.h>

int main(int argc, char *argv[]);
void Input(char *separation,float *temperature);
void Convert(char separation,float temperature, float *changeTemperature,char *changeSeparation);
void Output(float changeTemperature, char changeSeparation);

int main(int argc, char *argv[]){
	float temperature;
	char separation;
	float changeTemperature;
	char changeSeparation;

	Input(&separation, &temperature);
	Convert(separation, temperature,&changeTemperature,&changeSeparation);
	Output(changeTemperature,changeSeparation);
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

void Input(char *separation,float *temperature){
	printf("\n\n\n\n\n\t\t����,ȭ�� ���а� �µ��� �Է��Ͻʽÿ�! ");
	scanf("%c %f", separation,temperature);
	//printf("\t\t\t �µ� : %d   ���� : %c\n", *temperature,*separation);
}

/************************************************************************
����  ��Ī: Convert
��		��: �µ� ��ȯ�� ���к�ȯ�� ���Ѵ�
��		��: �µ�,����
��		��: �µ���ȯ, ���к�ȯ
*************************************************************************/

void Convert(char separation, float  temperature, float *changeTemperature,char *changeSeparation){
	if(separation == 'C' || separation == 'c'){
		*changeSeparation = 'F';
		*changeTemperature = (temperature*1.8) + 32.0;
	}
	else if(separation == 'F' || separation == 'f'){
		*changeSeparation = 'C';
		*changeTemperature = (temperature-32.0) / 1.8;
	}



	else{
		*changeSeparation = separation;
		*changeTemperature = 0.0F; //�Ǽ����� �ڿ� F�� ���δ�.
	}
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �µ���ȯ, ���к�ȯ�� ����Ѵ�.
��		��: �µ���ȯ,���к�ȯ
��		��: ����.
**************************************************************************/

void Output(float changeTemperature, char changeSeparation){
	printf("\t\t=====================================================\n");
	printf("\t\t\t%.2f %c\n", changeTemperature,changeSeparation);
}
