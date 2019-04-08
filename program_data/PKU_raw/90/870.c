int main()
{
    int f(int m,int n);
	int i,x,t,m[21],n[21];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
	}
    for(i=1;i<=t;i++)
	{
		x=f(m[i],n[i]);
		printf("%d\n",x);
	}
}


int f(int m,int n)
{
	if(n==1&&m>=0) return 1;
	else if(m<0) return 0 ;
	else return(f(m,n-1)+f(m-n,n));
}