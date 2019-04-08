int f(int x)
{
	int c;
	if(x==1||x==2)
		c=1;
	if(x>2)
		c=(f(x-1)+f(x-2));
	return c;
}
void main()
{
	int a[999],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",f(a[i]));
	}
}


	