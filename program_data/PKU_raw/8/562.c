void main()
{
	int m,n,i,j,c;
	int a[60]={0},b[30]={0};
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)scanf("%d",&a[i]);
    for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];a[i]=a[j];a[j]=c;
			}
		}
	}
	for(i=0;i<n;i++)scanf("%d",&b[i]);
   	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i]<b[j])
			{
				c=b[i];b[i]=b[j];b[j]=c;
			}
		}
	}
	for(i=0;i<m;i++)printf("%d ",a[i]);
	for(i=0;i<n-1;i++)printf("%d ",b[i]);
    printf("%d",b[n-1]);
}


