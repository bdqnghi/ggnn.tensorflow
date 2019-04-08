main()
{
	char a[10][10],b[100],f[10],g[10],h[10],v[10];
	int i,j,l,c[100],m,n,e,d,k;
	gets(b);
	l=strlen(b);
		j=1;
	c[0]=-1;
	for(i=0;i<l;i++)
	{
		if(b[i]==32)
		{
			c[j]=i;
			j++;
		}
	}
	c[j]=l;
 
	for(n=j;n>0;n--)
	{
		e=c[n]-1;
		k=c[n-1]+1;
		for(m=k;m<=e;m++)
		{
			printf("%c",b[m]);
		}
		if(n>1)
		{
			printf(" ");
		}
		else
		{
		}
	}
}