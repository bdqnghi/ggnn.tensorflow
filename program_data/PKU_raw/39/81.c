void main()
{
	struct student
	{char name[20];
	 int qimo;
	 int banyi;
	 char ganbu;
	 char xibu;
	 int paper;
	}stu[100];
	int n,i,max,p,sum=0;
	int sch[]={8000,4000,2000,1000,850};
	int a[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].banyi,&stu[i].ganbu,&stu[i].xibu,&stu[i].paper);
    for(i=0;i<n;i++)
	{
		if(stu[i].qimo>80&&stu[i].paper>=1)
			a[i]+=sch[0];
		if(stu[i].qimo>85&&stu[i].banyi>80)
			a[i]+=sch[1];
		if(stu[i].qimo>90)
			a[i]+=sch[2];
		if(stu[i].qimo>85&&stu[i].xibu=='Y')
			a[i]+=sch[3];
		if(stu[i].banyi>80&&stu[i].ganbu=='Y')
			a[i]+=sch[4];
	}
    max=a[0];
	p=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			p=i;
		}
		sum+=a[i];
	}
    printf("%s\n%d\n%d",stu[p].name,max,sum);
}

