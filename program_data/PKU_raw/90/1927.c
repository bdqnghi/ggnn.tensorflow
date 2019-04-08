int ap(int x,int y)
{
	if(y==1||x==1)
	{
		return 1;
	}
	else if(y==2)
	{
		return 1+x/2;
	}
	else if(x<=y)
	{
		return (1+ap(x,x-1));
	}
	else
	{
		return (ap((x-y),y)+ap(x,(y-1)));
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,i;
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&a,&b);
		printf("%d\n",ap(a,b));
	}
	return 0;
}