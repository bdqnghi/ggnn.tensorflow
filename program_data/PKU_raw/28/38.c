void main()
{
	char c[30000];
	int a[300]={0};
	int i,j=0,flag=0;
	gets(c);
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]==' ')flag=0;
		else if(flag==0)
		{
			flag=1;
			j++;
		}
		{
		if(flag==1)
		{
			a[j-1]++;
		}
		}
	}
	for(i=0;a[i]!=0;i++)
	{
		if(a[i+1]==0)printf("%d",a[i]);
		else printf("%d,",a[i]);
	}
}