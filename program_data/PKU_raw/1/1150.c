int way(int x,int m)
{
	int sum=0,p=0,i;
	for(i=m;i<x;i++)
		if(x%i==0)
		{
			p++;
			sum=sum+way(x/i,i);
		}
		sum=sum+1;
	if(p==0) sum=1;
	if(m>x) sum=0;
	return(sum);
}
int main()
{
	int n,a,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		printf("%d\n",way(a,2));
	}
	return 0;
}