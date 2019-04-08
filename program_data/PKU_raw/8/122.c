void main()
{
	void line(int a[],int b[],int m,int n);
	int m,n,i,j,t;
	int a[1000],b[1000];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	scanf("\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	line(a,b,m,n);
}
void line(int a[],int b[],int m,int n)
{
	int i,j,t;
	for(j=0;j<m-1;j++)
		for(i=0;i<m-j-1;i++)
			if(a[i]>=a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-j-1;i++)
			if(b[i]>=b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	for(i=0;i<m;i++)
	printf("%d ",a[i]);
	for(i=0;i<n-1;i++)
	printf("%d ",b[i]);
	printf("%d",b[n-1]);
	}