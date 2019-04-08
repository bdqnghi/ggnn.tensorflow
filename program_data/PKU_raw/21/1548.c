int main()
{
	int n,i,count=0;
	double a[1000]={0.0},total=0.0,average,max=-1.0;
    scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf", &a[i]);
		total+=a[i];
	}
	average=total/n;
	for(i=1;i<=n;i++)
	{
		if(fabs(a[i]-average)>max) max=fabs(a[i]-average);
	}
	for(i=1;i<=n;i++)
	{
		if(fabs(fabs(a[i]-average)-max)<0.001)
		{
			if(count==0)
			{
				printf("%.0f", a[i]);
				count+=1;
			}
			else printf(",%.0f", a[i]);
		}
	}
	printf("\n");
	return 0;
}


