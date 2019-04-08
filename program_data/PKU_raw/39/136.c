void main()
{
	struct stu
	{char name[21];
	int ta;
	int ca;
	char l;
	char w;
	int p;
    char name0[21];
	}stu[101],temp;
    int sch[101],a;
	int n,i,j;
	scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].ta,&stu[i].ca,&stu[i].l,&stu[i].w,&stu[i].p);
	for(i=0;i<n;i++)
		sch[i]=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].ta>80&&stu[i].p>=1)
			sch[i]=sch[i]+8000;
		if(stu[i].ta>85&&stu[i].ca>80)
		  	sch[i]=sch[i]+4000;
		if(stu[i].ta>90)
			sch[i]=sch[i]+2000;
		if(stu[i].ta>85&&stu[i].w=='Y')
			sch[i]=sch[i]+1000;
		if(stu[i].ca>80&&stu[i].l=='Y')
			sch[i]=sch[i]+850;
	}
	for(i=1;i<n;i++)
	{
		if(sch[0]<sch[i])
		{
			a=sch[i];
		    sch[i]=sch[0];
			sch[0]=a;
			temp=stu[i];
			stu[i]=stu[0];
			stu[0]=temp;
		}
	}
	for(i=0,j=0;i<n;i++)
		j=j+sch[i];

	printf("%s\n",stu[0].name);
	printf("%d\n",sch[0]);
	printf("%d\n",j);
}

