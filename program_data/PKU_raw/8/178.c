
int la,lb;

void read(int a[],int b[])
{
	int i;
	scanf("%d %d",&la,&lb);
	for(i=0;i<la;i++)
		scanf("%d",&a[i]);
	for(i=0;i<lb;i++)
	scanf("%d",&b[i]);
}

void sort(int a[],int b[])
{
	int i;
	int t;
	for(i=0;i<la-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
			if(i!=0)
			{i=i-2;}
		}
	}
	for(i=0;i<lb-1;i++)
	{
		if(b[i]>b[i+1])
		{
			t=b[i];
			b[i]=b[i+1];
			b[i+1]=t;
			if(i!=0)
			{i=i-2;}
		}
	}
}

void combine(int a[],int b[])
{
	int i;
	for(i=0;i<lb;i++)
	{
		a[la+i]=b[i];
	}
}

void print(int a[])
{
	int i;
	for(i=0;i<(la+lb);i++)
	{
		if (i!=(la+lb-1))
		printf("%d ",a[i]);
		else
			printf("%d",a[i]);
	}
}

int main()
{
	int x[200],y[100];
	read(x,y);
//	printx(x);
	sort(x,y);
//	printx(x);
	combine(x,y);
	print(x);
	return 0;
}


