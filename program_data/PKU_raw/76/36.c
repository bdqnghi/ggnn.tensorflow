int main()
{
	int n;
	int a[100],b[100];
	int i,j,min,max,tmp1=0,tmp2=1;
	float k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	min=a[0];
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(i=min;i<max;i++)
	{
		k=i+0.5f;
		tmp1=0;
		for(j=0;j<n;j++)
		{
			if(k>=a[j]&&k<=b[j])
			{
				tmp1=1;
				break;
			}
		}
		if(tmp1==0)
		{
			tmp2=0;
			break;
		}
	}
	if(tmp2==1)
		printf("%d %d\n",min,max);
	else
		printf("no\n");
	return 0;
}