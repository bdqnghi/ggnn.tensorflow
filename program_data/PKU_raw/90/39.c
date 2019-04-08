void main()
{
	int  f(int m,int n);
 
	int M,N,K,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&M,&N);
		K=f(M,N);
		printf("%d\n",K);
	}
 	
}
int  f(int m,int n)
{
 
	int  z ;
	z=0;
	if (n==1||m==0||m==1)
		z=1;
	else 
	{
		if (m<n)
		 n=m;
	  	z=f(m-n,n)+f(m,n-1);
	}
		return z;
}
 
