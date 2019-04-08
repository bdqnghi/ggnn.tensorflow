int k=0;
int y;
int a(int x,int i);
void b(int x,int i);
int main()
{
	int n,i,x,z;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=x;
		printf("%d\n",a(x,2));
	}
	return 0;
}
int a(int x,int i)
{
	k=0;
	b(x,i);
	return k;
}
void b(int x,int i)
{
	for(i=i;i<=x;i++)
	{
		if(x%i==0) b(x/i,i);
	}
	if(x==1) k=k+1;
}