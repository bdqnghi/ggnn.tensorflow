void main()
{
	int t,a[1000][2],k,i,m,n;
	int f( int m,int n);
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(i=0;i<t;i++)
	{
		m=a[i][0];n=a[i][1];
		k=f(m,n);
	    printf("%d",k);
		if(i!=t-1)
			printf("\n");
	}
}
int f(int m,int n)
{
	int k=0;
	
	if(m==0||n==1)
		k=1;
	else if(m<0)
		k=0;
	else 
		k=f(m,n-1)+f(m-n,n);
	return k;
}
