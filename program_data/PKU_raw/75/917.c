int a[1000]={0},b[1000]={0};
int zhuan1(char c[])
{
	int i,j=0;
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]!=',')
			a[j]=a[j]*10+c[i]-'0';
		else j=j+1;
	}
	return(j+1);
}
int zhuan2(char c[])
{
	int i,j=0;
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]!=',')
			b[j]=b[j]*10+c[i]-'0';
		else j=j+1;
	}
	return(j+1);
}
void main()
{
	int i,j,k,l,m,n,max=0,g[1000]={0},gmax=0;
	char c[10000],d[10000];
	gets(c);
	gets(d);
	m=zhuan1(c);
	n=zhuan2(d);
	for(i=0;i<n;i++)
		if(b[i]>max)
			max=b[i];
	for(i=0;i<max;i++)
		for(j=0;j<n;j++)
			if(i>=a[j]&&i+1<=b[j])
				g[i]=g[i]+1;
	for(i=0;i<max;i++)
		if(g[i]>gmax)
			gmax=g[i];
	printf("%d %d",n,gmax);


}