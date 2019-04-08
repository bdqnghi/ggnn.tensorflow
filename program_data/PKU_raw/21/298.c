void main() 
{
	int n,sum=0,i,j=0,bcount=0,temp=0;
	int a[300]={0},b[100]={15};
	double ave,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=(double)sum/(double)n;
	for(i=0;i<n;i++)
	{
		if (fabs(ave-a[i])>c)
			c=fabs(ave-a[i]);
	}
	for(i=0,j=0;i<n;i++)
	{
		if (fabs(ave-a[i])==c)
		{
			b[j]=a[i];
			j++;
		}
	}
	bcount=j;
	for(i=0;i<bcount-1;i++)
		for(j=0;j<bcount-i-1;j++)
		{
			if (b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	printf("%d",b[0]);
	for(i=1;i<bcount;i++)
		printf(",%d",b[i]);
}
