void main()
{
	int a,b;
	void func(int,int);
	scanf("%d%d",&a,&b);
    func(a,b);
}
void func(int x,int y)
{
	int i,j,t,q;
	int a[100],b[100];
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
	for(i=0;i<y;i++)
		scanf("%d",&b[i]);
	for(i=1;i<x;i++)
	{
		for(j=0;j<x-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<y;i++)
	{
		for(j=0;j<y-i;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0,q=0;i<y;i++)
	{
		if(q<y-1)
		{
			printf("%d ",b[i]);
			q=q+1;
		}
		else printf("%d",b[i]);
	}
}