int make(int x,int t)
{
	int ans=0,i;
	if (x==1) return 1;
	for (i=t;i<=x;i++)
	if (x%i==0) ans+=make(x/i,i);
	return ans;
}
int main()
{
	int i,k,j,p,n,t,m,x;
	scanf("%d",&t);
	for (p=1;p<=t;p++)
	{
		scanf("%d",&n);
		x=make(n,2);
		printf("%d\n",x);
	}
} 