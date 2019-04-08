int main()
{
	int *a;
	int n,i;
	int x(int c);
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x(*(a+i)));
	}
	return 0;

}
int x(int c)
{
	int r;
	if(c==1)
		return 1;
	else if(c==2)
		return 1;
	else
	{
		r=x(c-1)+x(c-2);
		return r;
	}
}