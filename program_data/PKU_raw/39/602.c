void main()
{
	char name[100][20],ganbu[100],xibu[100];
	int qimo[100],banji[100],lunwen[100],i,n,sum[100]={0},flag=0,max=0,total=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",name[i],&qimo[i],&banji[i],&ganbu[i],&xibu[i],&lunwen[i]);
	}
	for (i=0;i<n;i++)
	{
		if (qimo[i]>80&&lunwen[i]>=1) sum[i]+=8000;
		if (qimo[i]>85&&banji[i]>80) sum[i]+=4000;
		if (qimo[i]>90) sum[i]+=2000;
		if (qimo[i]>85&&xibu[i]=='Y') sum[i]+=1000;
		if (banji[i]>80&&ganbu[i]=='Y') sum[i]+=850;
	}
	for (i=0;i<n;i++)
	{
		if (max<sum[i]) 
		{
			max=sum[i];
			flag=i;
		}
		total=total+sum[i];
	}
	printf("%s\n%d\n%d\n",name[flag],sum[flag],total);
}