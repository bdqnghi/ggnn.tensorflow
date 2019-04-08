int main(int argc, char* argv[])
{
	int n,i,j,k,length;
	scanf("%d",&n);
	for (k=0;k<n;k++)
	{
		char str[50];
		char daoz[50]={0};
		scanf("%s",str);
		length=strlen(str);
		for (i=length-1,j=0;i>=length-2;i--,j++)
		{
			daoz[j]=str[i];
             
		}
		
		if(strcmp(daoz,"re")==0)
		{
			for (i=0;i<=length-3;i++)
			{
				printf("%c",str[i]);
			}
			printf("\n");
		}
		if(strcmp(daoz,"yl")==0)
		{
			for (i=0;i<=length-3;i++)
			{
				printf("%c",str[i]);
			}
			printf("\n");
		}
		for (i=length-1,j=0;i>=length-3;i--,j++)
		{
			daoz[j]=str[i];
             
		}
		
		if(strcmp(daoz,"gni")==0)
		{
			for (i=0;i<=length-4;i++)
			{
				printf("%c",str[i]);
			}
			printf("\n");
		}
		
	}
return 0;
}


		