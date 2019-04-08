int main()
{
	void sr(int a[100],int b[100],int x,int y);
	void px(int a[100],int x);
	void hb(int a[100],int b[100],int c[200],int x,int y);
	void sc(int a[200],int x);
	int a[100],b[100],c[200],x,y;
	scanf("%d%d",&x,&y);
	sr(a,b,x,y);
	px(a,x);
	px(b,y);
	hb(a,b,c,x,y);
	sc(c,x+y);
	return 0;
}
void sr(int a[100],int b[100],int x,int y)
{
	int i;
	for(i=0;i<x;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<y;i++)
	{
	scanf("%d",&b[i]);
	}
}
void px(int a[100],int x)
{
	int i,j,temp;
	for(i=x-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void hb(int a[100],int b[100],int c[200],int x,int y)
{
	int i;
	for(i=0;i<x+y;i++)
	{
		if(i<x)
			c[i]=a[i];
		else
			c[i]=b[i-x];
	}
}
void sc(int c[200],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		if(i==0)
			printf("%d",c[i]);
		else
			printf(" %d",c[i]);
	}
}
