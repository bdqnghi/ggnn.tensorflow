
void main()
{
	char str[10000];
	gets(str);
	int n,i,m;
	n=strlen(str);
	for(i=0,m=0;i<n;i++)
	{
		if(str[i]!=' ')
		{
			m++;
			if(i==n-1)
				printf("%d",m);
		}
		if(str[i]==' ')
		{	
			if(m!=0)
			{
				printf("%d,",m);
				m=0;
			}
		}
	}
	printf("\n");
}