int f(int m,int n)
{
	int z;
	if(n>m)n=m;
	if(m==1||n==1)z=1;
	else if(m==0||n==0)z=1;
	else
	z=f(m-n,n)+f(m,n-1);
	return(z);
}

void main()
{
int t,i,M,N;
scanf("%d",&t);
for(i=0;i<t;i++)
{
	scanf("%d %d",&M,&N);
	printf("%d\n",f(M,N));
}
}