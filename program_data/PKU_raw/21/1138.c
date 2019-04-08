int main()
{
	int a[123];
	float b[123];
	int m,n,i,j,k,t,flag=0;
	float s=0.0,max=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
	}
	s=s/n;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		for(i=0;i<n;i++)
		{
			b[i]=(float)fabs(a[i]-s);
		}
		for(i=0;i<n;i++)
		{
			if(b[i]>max)
				max=b[i];
		}
		for(i=0;i<n;i++)
		{
			if(b[i]==max)
			{
				if(flag==1)
					printf(",");
					printf("%d",a[i]);flag=1;
			}
		}
		return 0;
}