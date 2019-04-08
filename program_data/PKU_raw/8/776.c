
void get(int n,int* a)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void order(int n,int*a)
{
	int i,j,t;
	for(i=n-1;i>0;i--)
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
}
void puttogether(int n,int*a,int m,int*b)
{
	int i;
	for(i=n;i<n+m;i++)
	{
		a[i]=b[i-n];
	}
	printf("%d",a[0]);
	for(i=1;i<n+m;i++)
	{
		printf(" %d",a[i]);
	}
}
int main()
{
	int a[500],b[500];
	int m,n;
	scanf("%d %d",&n,&m);
	get(n,a);
	get(m,b);
	order(n,a);
	order(m,b);
	puttogether(n,a,m,b);
	return 0;
}