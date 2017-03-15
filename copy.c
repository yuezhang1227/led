#include<stdio.h>

int ret;
int main()
{
  char ch;
  
  FILE *fp1;
  FILE *fp2;
  
  
    fp1 = fopen("test.txt","r");
    fp2 = fopen("test1.txt","w");
	while(1)
	{
		ret = fscanf(fp1,"%c",&ch);
	 
		if(ret<=0) 
		break;
		  
		fprintf(fp2,"%c", ch);
		printf("result:%c",ch);
		  
    }
    fclose(fp2);
    fclose(fp1);
  
    return 0;
 }
