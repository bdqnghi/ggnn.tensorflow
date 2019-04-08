int main()
{
	char str[10000]={0};
	char mid[200][300]={0};
int a[300];
	gets(str);
	char *p;
	p=str;
	int i=0,len=0;
	int j=0,k=0;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(*p!=' ')
		{
			mid[j][k]=*p;
			k++;
		}
		if(*p==' ')
			if(*(p-1)!=' ')
			{
				j++;
				k=0;
			}
		p++;
	}
	p=0;
	int row=0;          
	i=0;
	while(mid[i][0]!=0)
	{
		row++;
		i++;
	}
	for(i=0;i<row;i++)
		{
			a[i]=strlen(mid[i]);
		}
	for(i=0;i<row-1;i++)
	{
		printf("%d,",a[i]);
	}
printf("%d",a[row-1]);
return 0;
}