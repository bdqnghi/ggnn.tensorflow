int n;
void count(int x,int y)
{
	int i;
	if(x==1) n=n+1;
	else
	{
		for(i=y;i<=x;i++)
		{
			if(x%i==0) count(x/i,i);
		}
	}
}
int main()
{
	int i,k,t;
	void count(int x,int y);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		n=0;
		scanf("%d",&t);
		count(t,2);
		printf("%d\n",n);
	}
	return 0;
}