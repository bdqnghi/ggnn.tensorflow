int main()
{
	char str[20],substr[5],max;
	int a,b,i,flag;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		max=0;
		a=strlen(str);
		b=strlen(substr);
		for(i=0;i<a;i++)
		{
			if(str[i]>max) max=str[i];
		}
		flag=1;
		for(i=0;i<a;i++)
		{
			if(str[i]<max) printf("%c",str[i]);
			else
			{
				printf("%c",max);if(flag==1) printf("%s",substr);flag=0;
			}
		}
		printf("\n");
	}
	return 0;
}