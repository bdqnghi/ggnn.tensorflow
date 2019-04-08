int main()
{
	int ys(int s,int p);
	int n,m,i,t;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
        t=ys(m,2);
		printf("%d\n",t);
	}
    return 0;
}
int ys(int s,int p)
{
	int j,a=1,b;
	for(j=p;j*j<=s;j++)
	{
        if(s%j==0)
		{
			b=s/j;
			a=a+ys(b,j);
		}
	}
	return(a);
}