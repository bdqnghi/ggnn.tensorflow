void main()
{
	int sum[100]={0},i,n,p=0;
	struct student
	{
		char name[21];
		int a;
		int b;
		char c;
		char d;
		int e;
	}stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,
			&stu[i].c,&stu[i].d,&stu[i].e);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].a>80&&stu[i].e>=1)
			sum[i]+=8000;
		if(stu[i].a>85&&stu[i].b>80)
			sum[i]+=4000;
		if(stu[i].a>90) 
			sum[i]+=2000;
		if(stu[i].a>85&&stu[i].d=='Y')
			sum[i]+=1000;
		if(stu[i].b>80&&stu[i].c=='Y')
			sum[i]+=850;
	}
	for(i=0;i<n;i++)
	{p+=sum[i];}
	for(i=1;i<n;i++)
	{
		if(sum[0]<sum[i])
		{stu[0]=stu[i];
		sum[0]=sum[i];}
	}
	printf("%s\n",stu[0].name);
	printf("%d\n",sum[0]);
	printf("%d",p);
}