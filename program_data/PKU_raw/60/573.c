int f(int x);
int main()
{
	int s,n,i,j,k,a[10000];
	scanf("%d",&n);
	k=0;
	for(i=2;i<=n;i++)
	{
		if(f(i)==1)
		{
			a[k]=i;
			k++;
		}
	}
	s=0;
	for(i=0;i<=k-2;i++)
	{
		if(a[i+1]-a[i]==2)
		{
			printf("%d %d\n",a[i],a[i+1]);
			s+=1;
		}
	}
	if(s==0)
		printf("empty");
	return 0;
}
int f(int x)
{
	int y,s=0;
	for(y=1;y<=x;y++)
	{
		if(x%y==0)
			s+=1;
	}
	if(s==2)
		return 1;
	else
		return 0;
}