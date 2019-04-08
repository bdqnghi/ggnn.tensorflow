int main()
{
	int n,i,flag,min,max,j;
	int a[50000],b[50000];
	double k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min) min=a[i];
		if(b[i]>max) max=b[i];
	}
	flag=1;
	for(k=min;k<=max;k=k+0.5)
	{
		for(j=0;j<n;j++)
		{
			if((k>=a[j])&&(k<=b[j])) 
			{
				flag=1;
				break;
			}
			else flag=0;
		}
		if(flag==0) 
		{
			printf("no");
			break;
		}
	}
	if(flag==1)
	{
	printf("%d %d",min,max);
	}
	return 0;
}