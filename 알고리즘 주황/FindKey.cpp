//FindKey.c
/******************************************************************************************
����  ��Ī: FindKey
��		��: 10���� ������ �ԷµǾ� ���� ��, ã���� �ϴ� ���� �Է¹޾� �� ������
			��ġ�� ����ϰ� ���� ���� ������ ������ �޼����� ����Ѵ�.
��  ��  ��: �����
�ۼ�  ����: 2017�� 1�� 17��
********************************************************************************************/
#include <stdio.h>
#define MAX 10
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(ULong (*numbers),ULong *key);
void FindKey(ULong (*numbers),ULong key, ULong (*roomNumbers), ULong *count);
void Output(ULong (*roomNumbers), ULong count);

int main(int argc, char *argv[]){
	ULong numbers[MAX];
	ULong roomNumbers[MAX];
	ULong key;
	ULong count;


	Input(numbers,&key);
	FindKey(numbers,key,roomNumbers,&count);
	Output(roomNumbers,count);
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

void Input(ULong (*numbers),ULong *key){
	ULong i;

	printf("\n\n\n\n\n\t\t�� �� ���� �Է��Ͻʽÿ�. : ");
	for(i=0;i<MAX;i++){
		scanf("%d", numbers + i);
	}

	printf("\n\n\n\t\tã���� �ϴ� ���� �Է��Ͻʽÿ�. : ");
	scanf("%d", key);
	
}

/************************************************************************
����  ��Ī: FindKey
��		��: �� ��ȣ���� ����. 
��		��: ����,��
��		��: �� ��ȣ��, ��ȣ ����
*************************************************************************/
void FindKey(ULong (*numbers),ULong key, ULong (*roomNumbers),ULong *count) {
	ULong i;
	*count=0;

	for(i = 0; i< MAX; i++){
		if(numbers[i] == key) {
			roomNumbers[*count] = i;
			(*count)++;
		}
	}	
}

/*************************************************************************
����  ��Ī: Output
��		��: ����Ϳ� �� ��ȣ���� ����Ѵ�.
��		��: �� ��ȣ��, ��ȣ ����
��		��: ����.
**************************************************************************/

void Output(ULong (*roomNumbers),ULong count){
	ULong i=0;
	printf("\t\t=====================================================\n");
	printf("\t\t");
	while(i<count){
		printf(" %d ", (roomNumbers[i])+1);
		i++;
	}
	if(count == 0 ){
		printf("\t ã���� �ϴ� ���� �����ϴ�.");
	}
}
