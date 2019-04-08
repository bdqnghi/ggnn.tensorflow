void main()
{
	int a[310],max,min,n,i;
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			max=a[i];min=a[i];sum=a[i];
		}
		else
		{
			sum+=a[i];
			max=(a[i]>max)? a[i]:max;
			min=(a[i]<min)? a[i]:min;
		}
	}
	sum=sum/n;
	if((max-sum)>(sum-min))
		printf("%d",max);
	else if((max-sum)<(sum-min))
		printf("%d",min);
	else printf("%d,%d",min,max);
}
