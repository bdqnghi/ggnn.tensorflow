void main()
{
	void read();
    read();
}
void read()
{
	int a,b;
	void shu(int x,int y);
	scanf("%d%d",&a,&b);
	shu(a,b);
}
void shu(int x,int y)
{
	int a[100],b[100],i;
	void pai(int a[],int x,int b[],int y);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<y;i++)
	{
		scanf("%d",&b[i]);
	}
	pai(a,x,b,y);
}
void pai(int a[],int x,int b[],int y)
{
	int i,k,m;
	void pr(int a[],int x,int b[],int y);
	for(i=0;i<x-1;i++)
	{
		for(k=0;k<x-1-i;k++)
		{
			if(a[k]>a[k+1])
			{
				m=a[k+1];
				a[k+1]=a[k];
				a[k]=m;
			}
		}
	}
	for(i=0;i<y-1;i++)
	{
		for(k=0;k<y-1-i;k++)
		{
			if(b[k]>b[k+1])
			{
				m=b[k+1];
				b[k+1]=b[k];
				b[k]=m;
			}
		}
	}
	pr(a,x,b,y);
}
void pr(int a[],int x,int b[],int y)
{
	int i;
	printf("%d",a[0]);
	for(i=1;i<x;i++)
	{
		printf(" %d",a[i]);
	}
	for(i=0;i<y;i++)
		printf(" %d",b[i]);
}