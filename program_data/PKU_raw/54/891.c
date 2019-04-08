int sum(int x,int y);
void main()
{
   int n,k;
   scanf("%d %d",&n,&k);
   printf("%d\n",sum(n,k));
}
int sum(int x,int y)
{
	int m,i;
	for(m=1,i=1;i<=x;i++)
	{
		m*=x;
	}
	m-=(x-1)*y;
	return m;
}