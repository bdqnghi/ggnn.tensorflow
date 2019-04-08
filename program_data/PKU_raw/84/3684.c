void main()
{
	int n,i,j,k,t,max1=0,min,max2;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{
		if(max1<a[j])
			max1=a[j];
		else
			continue;
	}
	min=max1;
	for(k=0;k<n;k++)
	{
		t=max1-a[k];
		if(t==0)
			continue;
		else 
		{
			if(min>t)
				min=t;
		    else
				continue;
		}
	}
	max2=max1-min;
	printf("%d\n%d\n",max1,max2);
}