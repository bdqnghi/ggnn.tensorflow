int main()
{
	char c[500][5];
	char d[501];
	int n,m,i,j;
	scanf("%d\n",&n);
	scanf("%s",d);
	memset(c,0,sizeof(c));
	int l;
	l=strlen(d);
	m=l-n+1;
	int q;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			c[i][j]=d[i+j];
	}
	int b[500];
	for(i=0;i<m;i++)
		b[i]=1;
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
			if(strcmp(c[i],c[j])==0)
			{
				b[i]++;
				
				b[j]=0;
			}
	}
	q=b[0];
	for(i=0;i<m;i++)
	{	
		if(b[i]>q)
			q=b[i];
	}
	if(q>1)
	{
		printf("%d\n",q);
		for(i=0;i<m;i++)
		if(b[i]==q&&c[i][0]>='a'&&c[i][0]<='z')
			printf("%s\n",c[i]);
	
	}
	else
		printf("NO");
	return 0;
}
