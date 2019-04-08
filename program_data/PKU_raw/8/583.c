
int n1,n2,a[200],b[100];

void readNum()
{
	int i;
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
}

void Bubble()
{
	int t,i,j;
	for(i=n1-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=n2-1;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}

void gether()
{
	int i;
	for(i=0;i<n2;i++)
		a[n1+i]=b[i];
}

void printNum()
{
	int i;
	for(i=0;i<n1+n2;i++)
		printf("%d%c",a[i],(i<n1+n2-1)?' ':'\n');
}

void main()
{
	readNum();
	Bubble();
	gether();
	printNum();
}