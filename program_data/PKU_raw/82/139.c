int main()
{
	int n,i,j=0,max=0,a[100],b[100],c[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
        {
			c[j]++;
		}   
		else
		{
			j++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(c[i]>max)
			max=c[i];
	}
	printf("%d",max);
	return 0;
}


