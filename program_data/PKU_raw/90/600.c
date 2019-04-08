
int f(int m,int n)
{
	int x=m,y=n;
	if(x==0||y==0||y==1)
		return 1;
	if(x<y)
		return(f(x,x));
	if(x>=y)
		return(f(x,y-1)+f(x-y,y));
}
int main()
{
	int n,a[999],b[999],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",f(a[i],b[i]));
	}
	return 0;
}





