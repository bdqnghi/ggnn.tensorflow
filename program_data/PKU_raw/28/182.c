void main()
{
	char a[1000]={'\0'};
	int i,flag=0,count=0;

	gets(a);
	i=0;

	while(a[i]!='\0' || a[i-1]!='\0')
	{
		if(a[i]!=' ' && a[i]!='\0')
		{
			count++;
		}
		
		if(count && a[i]==' ' || a[i]=='\0')
		{
			if(flag==0)
			{
				printf("%d",count);
				flag=1;
			}
			else printf(",%d",count);
			count=0;
		}
		i++;
		
		
	}
}