void read(int a[],int m);
void bubble(int a[],int m);
void add(int a[],int b[],int c[],int m,int n);
void out(int c[],int m);

int main()
{
	int m,n;
	int a[100],b[100],c[200];
	scanf("%d%d",&m,&n);
	read(a,m);
	read(b,n);
	bubble(a,m);
	bubble(b,n);
	add(a,b,c,m,n);
	out(c,m+n);
	return 0;
}

void read(int a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
}

void bubble(int a[],int m)
{
	int i,j,tmp;
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}

void add(int a[],int b[],int c[],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		c[i+m]=b[i];
	}
}

void out(int c[],int m)
{
	int i;
	printf("%d",c[0]);
	for(i=1;i<m;i++)
	{
		printf(" %d",c[i]);
	}
}













