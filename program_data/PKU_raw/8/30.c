int m,n,a[20],b[20];
void len()
{
	int i;
	scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}
void change()
{
	int i,j,middle;
	for(i=0;i<m-1;i++)
	{for(j=0;j<m-1-i;j++)
		{
			if(a[j]>a[j+1])
			{middle=a[j];
			a[j]=a[j+1];
			a[j+1]=middle;
			}
		}
	}

	for(i=0;i<n-1;i++)
	{	for(j=0;j<n-1-i;j++)
		{
			if(b[j]>b[j+1])
			{	middle=b[j];
			b[j]=b[j+1];
			b[j+1]=middle;
			}
		}
	}
}	
void prin()
{
	int i;
    for(i=0;i<m;i++)
	printf("%d ",a[i]);
	for(i=m;i<m+n-1;i++)
		printf("%d ",b[i-m]);
	if(i=m+n-1)
	printf("%d",b[n-1]);
}
void main()
{ len();

	change();
	 prin();
	
}