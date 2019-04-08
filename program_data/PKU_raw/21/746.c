int main()
{
	int n,i,j,k,a[500],t=0,p;
	double aver=0,b[500],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		aver+=a[i];
	}
	aver/=n;

	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}

	for(i=0;i<n;i++)
		b[i]=fabs(a[i]-aver);
	max=b[0];
	p=0;
	for(i=0;i<n;i++)
		if(b[i]>max)
		{
			max=b[i];
			p=i;
		}
	for(i=0;i<n;i++)
		if((max-b[i])<(1e-9))
		{
			t++;
			if(t==1)
				printf("%d",a[i]);
			else
			{
				printf(",");
				printf("%d",a[i]);
			}
		}
		return 0;
}

		

	