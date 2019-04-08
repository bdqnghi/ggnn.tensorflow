int i,j,x,y,a[10],b[10],c[20];
void array()
{
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<y;i++)
	{
		scanf("%d",&b[i]);
	}
}

void row()
{
	int t;
	for(i=0;i<x;i++)
	{
		for(j=i;j<x;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<y;i++)
	{
		for(j=i;j<y;j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
}

void combine()
{
	for(i=0;i<x;i++)
	{
		c[i]=a[i];
	}
	for(i=x;i<(x+y);i++)
	{
		c[i]=b[i-x];
	}
}

void print()
{
	for(i=0;i<(x+y);i++)
	{
		if(i!=(x+y-1))
		{
			printf("%d ",c[i]);
		}
		else printf("%d\n",c[i]);
	}
}

void main()
{
	array();
	row();
	combine();
	print();
}