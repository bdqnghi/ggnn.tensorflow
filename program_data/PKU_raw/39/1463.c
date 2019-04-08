main()
{
	int n;
	int i;
	int j=0;
	int s;
	int all=0;
	scanf("%d",&n);
	struct student
	{
		char name[20];
		int avg;
		int cls;
		char aso[2];
		char wst[2];
		int pap;
		int mny;
	};
	struct student stu[101];
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %s %s %d",stu[i].name,&stu[i].avg,&stu[i].cls,stu[i].aso,stu[i].wst,&stu[i].pap);
	}
	for(i=0;i<n;i++)
		stu[i].mny=0;
	for(i=0;i<n;i++)
	{
		if((stu[i].avg>80)&(stu[i].pap>=1))
			stu[i].mny=stu[i].mny+8000;
		if((stu[i].avg>85)&(stu[i].cls>80))
			stu[i].mny=stu[i].mny+4000;
		if(stu[i].avg>90)
			stu[i].mny=stu[i].mny+2000;
		if((stu[i].avg>85)&(stu[i].wst[0]=='Y'))
			stu[i].mny=stu[i].mny+1000;
		if((stu[i].cls>80)&(stu[i].aso[0]=='Y'))
			stu[i].mny=stu[i].mny+850;
	}
	s=stu[0].mny;
	for(i=1;i<n;i++)
	{
		if(stu[i].mny>s)
		{
			s=stu[i].mny;
			j=i;
		}
	}
	for(i=0;i<n;i++)
		all=all+stu[i].mny;
	printf("%s\n",stu[j].name);
	printf("%d\n",s);
	printf("%d",all);
}