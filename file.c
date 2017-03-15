# include <stdio.h>

int main()
{
		FILE *fp;
		fp = fopen ("test.txt","w" );
		fprintf(fp,"hello world 1\n");
		fprintf(stdout,"hello world 2\n");
		fclose(fp);
		
		char str[100];
		FILE *fp2;
		fp2 = fopen ("test.txt","r");
		fscanf(fp2, "%s", str);
		printf("result:%s\n",str);
		fclose(fp2);
	
		return 0;
}
