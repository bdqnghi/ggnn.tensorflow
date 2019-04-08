void f(int n,int m)
{
	int i,x=0;
	for(i=2;i<=n;i++)
	{
		x=(x+m)%i;
	}
	printf("%d\n",x+1);
}
void main()
{
	int n[999],m[999],k=0;
	int i=0;
	scanf("%d%d",&n[i],&m[i]);
	while(n[i]!=0&&m[i]!=0)
	{
		scanf("%d%d",&n[i+1],&m[i+1]);
		i++;
	}
	k=i;
	for(i=0;i<k;i++)
		f(n[i],m[i]);
}
