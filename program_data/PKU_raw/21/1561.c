void main()
{
	int a[300],n,i,total=0,min,max;

	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d,",&a[i]);
	max=a[0];min=a[0];
	for(i=0;i<=n-1;i++)
	{
		total=total+a[i];
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}


    if((total-min*n)==(max*n-total))
		printf("%d,%d\n",min,max);
	else if((max*n-total)>(total-min*n))
		printf("%d",max);
	else
		printf("%d",min);
}
    
