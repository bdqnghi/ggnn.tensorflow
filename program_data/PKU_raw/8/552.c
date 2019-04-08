int main()
{
	void read(int a[100],int b[100],int m,int n);
	void bubble(int a[100],int m);
	void print(int a[100],int b[100],int m,int n);		
	int m,n,a[100],b[100];
	scanf("%d%d",&m,&n);
	read(a,b,m,n);
	bubble(a,m);
	bubble(b,n);
	print(a,b,m,n);
	return 0;
}

void read(int a[100],int b[100],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}
void bubble(int a[100],int m)
{
	int i,j,t;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

void print(int a[100],int b[100],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("%d\n",b[n-1]);
}