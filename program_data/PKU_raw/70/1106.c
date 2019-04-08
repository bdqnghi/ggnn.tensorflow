void main()
{
	int n,i,j,k=0;
	double a[100][2],b[100],temp;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a[i][0],&a[i][1]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
            b[k]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(b[i]>b[i+1])
		{
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
	printf("%.4f\n",b[k-1]);
}