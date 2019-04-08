void main()
{
	int n,i,k,flag=0,temp;
	double max=0,sum=0.0;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	sum=sum/n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-sum)>max)
			max=fabs(a[i]-sum);
	}
    for (i=0;i<n-1;i++)
 		for(k=0;k<n-1-i;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	for(i=0;i<n;i++)
		if(max-fabs(a[i]-sum)<0.000000001)
		{
			if(flag==0)
			{
				flag++;
				printf("%d",a[i]);
			}
			else
				printf(",%d",a[i]);
		}
}