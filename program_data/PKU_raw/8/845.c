int main()
{
	void print(int a[],int b[]);
	int a[100],b[100];
	print(a,b);
	return 0;
}

void print(int a[100],int b[100])
{
	int n,m,i,j,k,l=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) {scanf("%d",&a[i]);}
	for(i=0;i<m;i++) {scanf("%d",&b[i]);}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1]) {k=a[j];a[j]=a[j+1];a[j+1]=k;}
		}
	}
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(b[j]>b[j+1]) {k=b[j];b[j]=b[j+1];b[j+1]=k;}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d",b[i]);
		if(i==m-1) break;
		printf(" ");
	}
}