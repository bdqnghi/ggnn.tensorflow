int main()
{
	int n,a[300],i,b[300]={15},j=0,m,temp2;
	double sum=0,temp,ave;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=sum/n;
	temp=fabs(a[0]-ave);
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-ave)>temp)
		{
			temp=fabs(a[i]-ave);
		}
	}
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-ave)==temp)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=1;i<j;i++)
	{
		for(m=0;m<j-i;m++)
		{
			if(b[m]>b[m+1])
			{
				temp2=b[m];
				b[m]=b[m+1];
				b[m+1]=temp2;
			}
		}
	}
	printf("%d",b[0]);
	for(m=1;m<j;m++)
	{
		printf(",%d",b[m]);
	}
	printf("\n");
	return 0;
}