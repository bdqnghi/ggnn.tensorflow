int f(int m,int n)
{
	int a;
	if(m==0||n==1)
		return(1);
	else
	{
        if(m<n)
		{a=f(m,m);}
		else
		{a=f(m-n,n)+f(m,n-1);}
		return(a);
	}
}
void main()
{
	int t,m,n,y,i,j;
	scanf("%d",&t);
	for (i=1;i<=t;i++)
    {
		scanf("%d%d",&m,&n);
		printf("%d\n",f(m,n));
	}
}


