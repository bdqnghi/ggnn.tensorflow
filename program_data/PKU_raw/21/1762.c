int n,i;
long int rec[301];
long int min,max;
float sum;
main()
{
	scanf("%d\n",&n);
	sum=0;
	min=100000; 
	max=0;
	for(i=1;i<=n;i++) 
	{
		scanf("%d",&rec[i]);
		sum=sum+rec[i];
		if (rec[i]<min) min= rec[i];
		if (rec[i]>max) max=rec[i];
	}
	sum=sum/n;
	if (max-sum==sum-min) printf("%d,%d\n",min,max);
	else if (max-sum>sum-min) printf("%d\n",max);
	else printf("%d\n",min);
}