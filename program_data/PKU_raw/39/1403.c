void main()
{
	struct student
	{
		char name[20];
		int q;
		int b;
		char g;
		char x;
		int l;
	};
	struct student stu[100];
	int i,n;
    long sum[100]={0},sum2=0,sum1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(P,stu[i].name,&stu[i].q,&stu[i].b,&stu[i].g,&stu[i].x,&stu[i].l);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].q>80&&stu[i].l>=1)
			sum[i]=sum[i]+8000;
		if(stu[i].q>85&&stu[i].b>80)
			sum[i]=sum[i]+4000;
		if(stu[i].q>90)
			sum[i]=sum[i]+2000;
		if(stu[i].q>85&&stu[i].x=='Y')
			sum[i]=sum[i]+1000;
		if(stu[i].b>80&&stu[i].g=='Y')
			sum[i]=sum[i]+850;
	}
	sum1=sum[0];
	sum2=sum[0];
	for(i=1;i<n;i++)
	{
		if(sum[i]>sum1)
			sum1=sum[i];
		sum2=sum2+sum[i];
	}
	for(i=0;i<n;i++)
	{
		if(sum1==sum[i])
		{
			printf("%s\n",stu[i].name);
			break;
		}
	}
	printf("%ld\n",sum1);
	printf("%ld\n",sum2);


}
