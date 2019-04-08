void main()
{
	int n;
	scanf("%d",&n);
	struct student
	{
		char name[32];
		int sco1;
		int sco2;
		char l;
		char w;
		int es;
		int scho;
	};
	struct student stu[n];
	int i;
	for(i=0;i<n;i++)
	{
	    scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].sco1,&stu[i].sco2,&stu[i].l,&stu[i].w,&stu[i].es);
	    stu[i].scho=0;
		if(stu[i].sco1>80&&stu[i].es>0)stu[i].scho+=8000;
		if(stu[i].sco1>85&&stu[i].sco2>80)stu[i].scho+=4000;
		if(stu[i].sco1>90)stu[i].scho+=2000;
		if(stu[i].sco1>85&&stu[i].w=='Y')stu[i].scho+=1000;
		if(stu[i].sco2>80&&stu[i].l=='Y')stu[i].scho+=850;
	}
	int max=stu[0].scho;
	for(i=0;i<n;i++)
	if(stu[i].scho>max)max=stu[i].scho;
	for(i=0;i<n;i++)
	if(stu[i].scho==max)
	{
	    printf("%s\n%d\n",stu[i].name,max);
	    break;
	}
	int sum=0;
	for(i=0;i<n;i++)sum+=stu[i].scho;
	printf("%d\n",sum);
}