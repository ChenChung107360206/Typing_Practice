#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
const int length=40;
void Start(char type[length],const int length);

int main(void){

	clock_t start,end;//���w���r�Ҫ�ɶ����ܼ� 
	int choice=0;
	char example[length];
	size_t read_num=0;
    FILE *fp;
    
	while(choice!=4){
		printf("Choose the article(4 to end) : ");
		scanf("%d",&choice);//��ܤ峹 
		switch(choice){
			case 1:
					fp = fopen("C:\\c_code\\Typing_Practice(DevCpp)\\1.txt", "r");//�}���ɮ� 
					read_num = fread(example, sizeof(char), length, fp);//�N�ɮ�Ū�X�ܰ}�C 
					for(int i = 0; i < length; i++){
   						printf("%c", example[i]);//��ܰ}�C(�峹���e) 
   					}
   					printf("\n");
   					start=clock();//�}�l�ɶ� 
   					Start(example,length);//���r�m�� 
   					end=clock();//�����ɶ� 
   					printf("The time you spend is %.2f sec.\n",(end-start)/1000.00);//�p��һݮɶ� 
   					break;
				case 2:
					fp = fopen("C:\\c_code\\Typing_Practice(DevCpp)\\2.txt", "r");
					read_num = fread(example, sizeof(char), length, fp);
					for(int i = 0; i < length; i++){
    					printf("%c", example[i]);
   					}
    				printf("\n");
   					start=clock();
    				Start(example,length);
    				end=clock();
    				printf("The time you spend is %.2f sec.\n",(end-start)/1000.00);
   					break;
				case 3:
					fp = fopen("C:\\c_code\\Typing_Practice(DevCpp)\\3.txt", "r");
					read_num = fread(example, sizeof(char), length, fp);
					for(int i = 0; i < length; i++){
   						printf("%c", example[i]);
   					}
    				printf("\n");
    				start=clock();
    				Start(example,length);
   					end=clock();
   					printf("The time you spend is %.2f sec.\n",(end-start)/1000.00);
   					break;
   				case 4:
   					break;	
		}
	}		
	return 0;
}
void Start(char example[length],const int length){
	char now;
	float right=0;
	for(int i=0;i<length;i++){
		now=_getch();//������L��J 
		printf("%c",now);
		if(now==example[i]){//���峹���e�Υ��J���r 
			right+=1;//�Y���T�h���T�r�ƥ[�@ 
		}
	}
	printf("\n���T�ʤ��� : %.2f%\n",(right/length)*100);//��X���T�v 
	printf("���~�ʤ��� : %.2f%\n",100-(right/length)*100);//��X���~�v 
}
