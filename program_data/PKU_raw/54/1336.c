int n,k;
int distribute(int m)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if((m-k)%n!=0||m-k==0)
		{
			flag++;
			return 0;
		}
		m=(m-k)*(n-1)/n;
	}
	if(flag==0)
		return 1;
}
int main()
{
	int x;
	scanf("%d %d",&n,&k);
	for(x=n*k;;x++)
	{
		if(distribute(x)==1)
		{
			printf("%d\n",x);
			break;
		}
	}
}