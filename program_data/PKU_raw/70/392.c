int main()
{
	int n,i,j;
	int k=0;
	double a[10000],b[10000],l[10000];
	double max=0.0000;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf",&a[i],&b[i]);
	}
	for(i=1;i<n;i++)
	{
		if(i>=2)
		{
		 for(j=1;j<i;j++)
		 {
			k++;
			l[k]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
	        if(k>=2)
			{
			    if(l[k]>max)
				{
				    max=l[k];
				}
			}
			 if(k==1)
			 {
				  max=0;
			 }
			
		 }
		}
	}
	printf("%.4f\n",max);
		return 0;
}

