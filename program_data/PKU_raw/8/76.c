
int i,j;
int m,n;
void main()
{
	int a[100],b[50];

	void read(int a[],int b[]);
	void rank(int a[],int b[]);
	void link(int a[],int b[]);
	void output(int a[]);

	read(a,b);
	rank(a,b);
	link(a,b);
	output(a);
}
void read(int a[],int b[])
{
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
}
void rank(int a[],int b[])
{
	int t;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
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
void link(int a[],int b[])
{
	for(i=0,j=m;i<n;i++,j++)
	{
		a[j]=b[i];
	}
}
void output(int a[])
{
	for(i=0;i<m+n;i++)
	{
		printf("%d",a[i]);
		printf("%c",(i<m+n-1)?' ':'\n');
	}
}