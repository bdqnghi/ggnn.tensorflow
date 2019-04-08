struct money
{
	char name[20];
	int qm;
	int bj;
	char gb;
	char xb;
	int lw;
}
main()
{
	struct money stu[100];
	int n,i,p;
	long a[100]={0},max=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qm,&stu[i].bj,&stu[i].gb,&stu[i].xb,&stu[i].lw);
		if(stu[i].qm>80&&stu[i].lw>=1)
			a[i]=a[i]+8000;
		if(stu[i].qm>85&&stu[i].bj>80)
			a[i]=a[i]+4000;
		if(stu[i].qm>90)
			a[i]=a[i]+2000;
		if(stu[i].qm>85&&stu[i].xb=='Y')
			a[i]=a[i]+1000;
		if(stu[i].bj>80&&stu[i].gb=='Y')
			a[i]=a[i]+850;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(max<a[i])
			max=a[i];
	}
	for(i=0;i<n;i++)
		if(max==a[i])
		{
			p=i;
			break;
		}
	printf("%s\n%ld\n%ld",stu[p].name,a[p],sum);
}