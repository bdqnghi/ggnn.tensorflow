int a[100],b[100],c[100];
int num1;
int num2;
void main()
{
	void read();
	void queue();
	void combine();
	void put();
	read();
	queue();
	combine();
	put();
}
void read()
{
	int i;
	scanf("%d %d",&num1,&num2);
	for(i=0;i<num1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<num2;i++)
	{
		scanf("%d",&b[i]);
	}
}
void queue()
{
	int i,j,t;
	for (i=0;i<num1-1;i++)
	{
		for (j=0;j<num1-i-1;j++)
		{
			if (a[j]>a[j+1])//???
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for (i=0;i<num2-1;i++)
	{
		for (j=0;j<num2-i-1;j++)
		{
			if (b[j]>b[j+1])//???
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}
void combine()
{
	int i;
	for (i=0;i<num1;i++)
	{
		c[i]=a[i];
	}
	for (i=0;i<num2;i++)
	{
		c[i+num1]=b[i];
	}
}
void put()
{
	int i;
	for(i=0;i<num1+num2-1;i++)
	{
		printf("%d ",c[i]);
	}
	printf("%d",c[num1+num2-1]);
}