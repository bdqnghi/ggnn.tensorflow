int f(int m,int n)
{
	if(m==1&&n>=1)
		return 1;
	if(n==1&&m>=1)
		return 1;
	if(m<0||n<1)
		return 0;
	if(m==0&&n>=1)
		return 1;
	if(m>1&&n>1)
		return f(m,n-1)+f(m-n,n);

}
int main()
{
	int t,m,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",f(m,n));
	}
	return 0;
}
