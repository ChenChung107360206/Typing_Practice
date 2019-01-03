#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
const int length=40;
void Start(char type[length],const int length);

int main(void){

	clock_t start,end;//測定打字所花時間之變數 
	int choice=0;
	char example[length];
	size_t read_num=0;
    FILE *fp;
    
	while(choice!=4){
		printf("Choose the article(4 to end) : ");
		scanf("%d",&choice);//選擇文章 
		switch(choice){
			case 1:
					fp = fopen("C:\\c_code\\Typing_Practice(DevCpp)\\1.txt", "r");//開啟檔案 
					read_num = fread(example, sizeof(char), length, fp);//將檔案讀出至陣列 
					for(int i = 0; i < length; i++){
   						printf("%c", example[i]);//顯示陣列(文章內容) 
   					}
   					printf("\n");
   					start=clock();//開始時間 
   					Start(example,length);//打字練習 
   					end=clock();//結束時間 
   					printf("The time you spend is %.2f sec.\n",(end-start)/1000.00);//計算所需時間 
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
		now=_getch();//偵測鍵盤輸入 
		printf("%c",now);
		if(now==example[i]){//比對文章內容及打入的字 
			right+=1;//若正確則正確字數加一 
		}
	}
	printf("\n正確百分比為 : %.2f%\n",(right/length)*100);//輸出正確率 
	printf("錯誤百分比為 : %.2f%\n",100-(right/length)*100);//輸出錯誤率 
}
