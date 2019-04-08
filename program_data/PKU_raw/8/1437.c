void f1(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
}
void f2(int n,int a[])
{
	int i,j,k;
		
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[j];
			    a[j]=a[i];
			    a[i]=k;
			}
		}
		
		
}
void f3(int n,int m,int a[],int b[],int c[])
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=n;i<n+m;i++)
		c[i]=b[i-n];
	
}
void f4(int n,int m,int c[])
{
	printf("%d",c[0]);
	int i;
	for(i=1;i<n+m;i++)
		printf(" %d",c[i]);
}
int main()
{
	int i,n,m,a[100],b[100],c[200];
	scanf("%d%d",&n,&m);
	f1(n,a);
	f1(m,b);
	f2(n,a);
	f2(m,b);
	f3(n,m,a,b,c);
	f4(n,m,c);
	return 0;
}
