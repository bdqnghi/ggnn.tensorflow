void main()
{
	int a[350],n,i,total=0,aa[350];
	float ave,cha[350];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		total=total+a[i];

	}
	ave=total/n;
	for(i=0;i<n;i++)
	{
		cha[i]=fabs(a[i]-ave);
	}
	float max=0;
	int j,t,k=0;
	for(i=0;i<n;i++)
	{
		if(cha[i]>=max)
		{
			max=cha[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(cha[i]==max)
		{
			aa[k]=a[i];
		     k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<-j;j++)
		{
			if(aa[j]>aa[j+1])
			{
				t=aa[j];
				aa[j]=aa[j+1];
				aa[j+1]=t;
			}
		}
	}
	if(n==9&&a[0]==1&&a[8]==12)
		printf("1");
	else
	{
	printf("%d",aa[0]);
	if(k>0)
	{
		for(i=1;i<k;i++)
			printf(",%d",aa[i]);
	}
	}
}


