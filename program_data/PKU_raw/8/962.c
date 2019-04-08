int main()
{
	int sr();
	int px(int a[100],int x,int k);
	void hb(int a[100],int b[100],int x,int y);
	int i,a[100],b[100],c[200],x,y;
	x=sr();
	y=sr();
	for(i=0;i<x;i++)
	{
		a[i]=sr();
	}
	for(i=0;i<y;i++)
	{
		b[i]=sr();
	}
	for(i=0;i<x;i++)
	{
		a[i]=px(a,x,i);
	}
	for(i=0;i<y;i++)
	{
		b[i]=px(b,y,i);
	}
	hb(a,b,x,y);
	return 0;
}
int sr()
{
	int a;
	scanf("%d",&a);
	return (a);
}
int px(int a[100],int x,int k)
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
	temp=a[k];
	return (temp);
}
void hb(int a[100],int b[100],int x,int y)
{
	int i;
	for(i=0;i<x;i++)
	{
		if(i==0)
			printf("%d",a[i]);
		else
			printf(" %d",a[i]);
	}
	for(i=0;i<y;i++)
	{
			printf(" %d",b[i]);
	}
}
