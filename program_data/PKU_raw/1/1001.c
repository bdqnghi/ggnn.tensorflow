void main()
{
	int n,a[100],i;
	void fen(int a[],int x);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fen(a,n);
}
void fen(int a[],int x)
{
	int k,b=2,c,t;
	int look(int x,int y);
    for(k=0;k<x;k++)
	{
		c=a[k];
		t=look(c,b);
		printf("%d\n",t);
	}
}
int look(int x,int y)
{
	int total=1,p;
	if(x/y==0)
	{	return 0;}
	else
	{
		for(p=y;p<x;p++)
		{
			if(x%p==0)
			{
				total=total+look(x/p,p);
			}
		}
	}
	return total;
}