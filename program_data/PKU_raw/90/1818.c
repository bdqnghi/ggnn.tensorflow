int main()
{
	int f(int m,int n);
	int z;
	int a,b,i;
	int sum;
	scanf("%d",&z);
	for(i=0;i<z;i++)
	{
	scanf("%d %d",&a,&b);
	sum=f(a,b);
	printf("%d\n",sum);
	}
	return 0;
}
int f(int m,int n)
{
	if(n==1||m==0||m==1)
		return 1;
	if(m<0)
		return 0;
	return f(m,n-1)+f(m-n,n);
}
