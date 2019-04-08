void main()
{
	int n,a,b,c,d,i,j;
	char num[101][101];
	scanf("%d",&n);
	for(i=0;i<(2*n);i++)
		scanf("%s",num[i]);
	a=0;
	b=0;
	for(i=0;i<(2*n-1);i=i+2)
	{
		a=strlen(num[i]);
		b=strlen(num[i+1]);
		for(j=b;j>=0;j--)
			num[i+1][a-b+j]=num[i+1][j];
		for(j=0;j<a-b;j++)
			num[i+1][j]='0';
			c=0;
			d=0;
		for(j=a-1;j>=0;j--)
		{
			c=(10+num[i][j]-'0')-(num[i+1][j]-'0')-d;
			num[i][j]=c%10+'0';
			if(c<10) d=1;
			else d=0;
		}
		printf("%s\n",num[i]);

	}

}                                      