main()
{
	int n,i;
	float min,max,a[300],sum,aver;
	scanf("%d",&n);
	scanf("%f",&a[0]);
	min=max=sum=a[0];
    for(i=1;i<n;i++) 
	{
		scanf("%f",&a[i]);
		sum=sum+a[i];
		if(max<a[i]) max=a[i];
		else if(min>a[i]) min=a[i];
	}
	aver=sum/n;
	if(max-aver>aver-min) printf("%.0f",max);
	else if(max-aver<aver-min) printf("%.0f",min);
	else printf("%.0f,%.0f",min,max);
	return 0;
}