int main()
{
	int n,i=0;
	int a[10000];
	int b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	int min,max;
	min=a[0],max=b[0];
	i=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	float j,m=0,e=0,k=0;
	i=0;
	j=min;
	for(j=min;j<=max;j=j+0.5)
	{	
		e=0;

		for(i=0;i<n;i++)
		{
			if(j>=a[i]&&j<=b[i])
				e++;
		}
		if(e==0)
		{
			k=1;
			break;
		}
	
	}
	if(k==1)
		printf("no");
	if(k==0)
		printf("%d %d",min,max);
	return 0;
}
			
