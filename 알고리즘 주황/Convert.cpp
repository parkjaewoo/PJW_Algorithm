//Convert.c
/*************************************************************************************
파일  명칭: Convert
기		능: 섭씨, 화씨 구분과 온도가 입력 될때, 화씨는 섭씨로, 섭씨는 화씨로 변환한다.
작  성  자: 박재우
작성  일자: 2017년 1월 9일
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
파일  명칭: Input
기		능: 사용자로부터 키보드로 수를 입력받는다.
입		력: 없음	
출		력: 
*************************************************************************/

void Input(char *separation,float *temperature){
	printf("\n\n\n\n\n\t\t섭씨,화씨 구분과 온도를 입력하십시오! ");
	scanf("%c %f", separation,temperature);
	//printf("\t\t\t 온도 : %d   구분 : %c\n", *temperature,*separation);
}

/************************************************************************
파일  명칭: Convert
기		능: 온도 변환과 구분변환을 구한다
입		력: 온도,구분
출		력: 온도변환, 구분변환
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
		*changeTemperature = 0.0F; //실수형은 뒤에 F를 붙인다.
	}
}

/*************************************************************************
파일  명칭: Output
기		능: 모니터에 온도변환, 구분변환을 출력한다.
입		력: 온도변환,구분변환
출		력: 없음.
**************************************************************************/

void Output(float changeTemperature, char changeSeparation){
	printf("\t\t=====================================================\n");
	printf("\t\t\t%.2f %c\n", changeTemperature,changeSeparation);
}
