int main()
{
	void take(int x[1000],int l);
	void rank(int x[1000],int l);
	void com(int a[1000],int b[1000],int c[2000],int al,int bl);
	void prin(int c[2000],int l);
	int a[1000];
	int b[1000];
	int c[2000];
	int al,bl;
	scanf("%d%d",&al,&bl);
	take(a,al);
	take(b,bl);
	rank(a,al);
	rank(b,bl);
	com(a,b,c,al,bl);
	prin(c,al+bl);
	return 0;
}
void take(int x[1000],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		scanf("%d",&x[i]);
	}
}
void rank(int x[1000],int l)
{
	int i,j,temp;
	if(l!=1)
	{
	for(i=l-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	}
}
void com(int a[1000],int b[1000],int c[2000],int al,int bl)
{
	int i;
	for(i=0;i<al;i++)
	{
		c[i]=a[i];
	}
	for(i=al;i<al+bl;i++)
	{
		c[i]=b[i-al];
	}
}
void prin(int c[2000],int l)
{
	int i;
	printf("%d",c[0]);
	for(i=1;i<l;i++)
	{
		printf(" %d",c[i]);
	}
}