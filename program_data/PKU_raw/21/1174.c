int main()
{
	int n;
	int a[300]={0};
	int i,j,k,l;
	double ave=0.0;
	double max=0.0;
	int b[300]={0};
	int temp=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{  
		scanf("%d",&a[i]);
		ave=ave+a[i];
	}
	ave=ave/n;
	j=0;
	max=fabs(a[0]-ave);
	for (i=0;i<n;i++)
	{
		if (max<fabs(a[i]-ave))
			max=fabs(a[i]-ave);
	}
	for (i=0;i<n;i++)
	{
		if (fabs(fabs(a[i]-ave)-max)<1e-9)
		{
			b[j]=a[i];
			j=j+1;
		}
	}
    for (k=j-2;k>0;k--)
	{
          for (l=0;l<k;l++)
		  {
                  if(b[l]>b[l+1])
				  {
					  temp=b[l];
					  b[l]=b[l+1];
					  b[l+1]=temp;
				  }
		  }
		  
	}
	printf("%d",b[0]);
	for (k=1;k<j;k++)
	{
		printf(",%d",b[k]);
	}
	return 0;
}
    
