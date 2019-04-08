struct student
{
	char name[20];
	int a1;
	int a2;
    char w;
	char m;
	int e;
	int sch;
}stu[100];
void main()
{
	int n,i,sum=0;
	struct student p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a1,&stu[i].a2,&stu[i].m,&stu[i].w,&stu[i].e);
		stu[i].sch=0;
		if(stu[i].a1>80&&stu[i].e>0)  stu[i].sch+=8000;
		if(stu[i].a1>85&&stu[i].a2>80)    stu[i].sch+=4000;
		if(stu[i].a1>90)    stu[i].sch+=2000;
		if(stu[i].a1>85&&stu[i].w=='Y')   stu[i].sch+=1000;
		if(stu[i].a2>80&&stu[i].m=='Y')  stu[i].sch+=850;
		sum+=stu[i].sch;
	}
	p=stu[0];
	for(i=0;i<n;i++)
	if(stu[i].sch>p.sch)  p=stu[i];
	printf("%s\n%d\n%d",p.name,p.sch,sum);
}

