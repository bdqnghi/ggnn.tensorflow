int main()
{
	int n;
	scanf("%d",&n);
	struct student
	{
		char name[100];
		int qi;
		int ping;
		char gan;
		char xi;
		int lun;
	}a[1000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].qi,&a[i].ping,&a[i].gan,&a[i].xi,&a[i].lun);
	}
	int d[1000]={0};
	for(i=0;i<n;i++)
	{
		if(a[i].qi>80&&a[i].lun!=0)
		{d[i]+=8000;}
		if(a[i].qi>85&&a[i].ping>80)
		{d[i]+=4000;}
		if(a[i].qi>90)
		{d[i]+=2000;}
		if(a[i].qi>85&&a[i].xi=='Y')
		{d[i]+=1000;}
		if(a[i].ping>80&&a[i].gan=='Y')
		{d[i]+=850;}
	}
	int sum=0;
	for(i=0;i<n;i++)
	{sum+=d[i];}
	int z=0;
	for(i=0;i<n;i++)
	{
		if(d[z]<d[i])
		{z=i;}
	}
	printf("%s\n%d\n%d",a[z].name,d[z],sum);
	return 0;
}

