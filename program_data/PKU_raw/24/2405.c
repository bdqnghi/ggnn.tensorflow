int main()
{
	char a[201][30]={0},b='0';
	int c[201]={0},i=0,j=0,n,p=0,q=100,x=0,y=0;
	while((b=getchar())!='\n')
	{
		if(b!=' '&&b!=',')
			a[i][j++]=b;
		else {i++;j=0;}
	}
	n=i;
	for(j=0;j<=n;j++)
		c[j]=strlen(a[j]);
	for(j=0;j<=n;j++)
	{
		if(c[j]>p)
		{p=c[j];x=j;}
		if(c[j]<q&&c[j]>0)
		{q=c[j];y=j;}
	}
	puts(a[x]);
	puts(a[y]);
	return 0;
}