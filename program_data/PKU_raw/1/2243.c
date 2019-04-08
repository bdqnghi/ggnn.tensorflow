int devide(int n,int k)
{
	int s,i;
	s=1;
	for(i=k;i<=sqrt(n*1.0);i++)
	{
		if(n%i==0)
		{
			s=s+devide(n/i,i);
		}
	}
	return s;
}
int main()
{
	int n,a[200],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)printf("%d",devide(a[i],2));
		else printf("\n%d",devide(a[i],2));
	}
	return 0;
}