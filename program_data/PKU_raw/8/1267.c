

void f(int m,int n)
{
	int i,j;
	int temp;
	int a[100]={0};
	int b[100]={0};
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);

	for(j=0;j<n;j++)
		scanf("%d",&b[j]);

	for(i=1;i<m;i++)
		for(j=0;j<m-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}		
		}

	for(i=1;i<n;i++)
		for(j=0;j<n-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j+1];
				b[j+1]=b[j];
				b[j]=temp;
			}		
		}

	
	for(i=0;i<m;i++)
		printf("%d ",a[i]);
	for(i=0;i<n-1;i++)
		printf("%d ",b[i]);
	printf("%d",b[n-1]);
}


int main()
{
	int m,n;
	scanf("%d%d",&m,&n);

	f(m,n);
	return 0;

}