int k[25],n;
int f(int max,int i,int sum)
{
	int p,q=0;
	if(i==n)return sum;
	else
	{
		p=f(max,i+1,sum);
		if(max>k[i+1])q=f(k[i+1],i+1,sum+1);
		return p>q?p:q;
	}
}
void main()
{
	int i;scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&k[i]);
	printf("%d",f(2147483647,0,0));
}