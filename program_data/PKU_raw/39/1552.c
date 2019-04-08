void main()
{
	struct student
	{
		char name[20];
		int score;
		int grade;
		char ganbu;
		char west;
		int paper;
		long money;
	};
	int a,i,j,n,sum;
	char c;
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s%d%d%c%c%c%c%c%d",stu[i].name,&stu[i].score,&stu[i].grade,&c,&stu[i].ganbu,&c,&stu[i].west,&c,&stu[i].paper);
		stu[i].money=0;
	}
	for(i=0;i<=n-1;i++)
	{
		if (stu[i].score>80&&stu[i].paper>=1)
			stu[i].money=stu[i].money+8000;
		if (stu[i].score>85&&stu[i].grade>80)
			stu[i].money=stu[i].money+4000;
		if (stu[i].score>90)
			stu[i].money=stu[i].money+2000;
		if (stu[i].score>85&&stu[i].west=='Y')
			stu[i].money=stu[i].money+1000;
		if (stu[i].grade>80&&stu[i].ganbu=='Y')
			stu[i].money=stu[i].money+850;
	}
	j=0;
	a=stu[0].money;
	sum=stu[0].money;
	for(i=1;i<=n-1;i++)
	{
		if (stu[i].money>a)
		{
			j=i;
			a=stu[i].money;
		}
		sum=sum+stu[i].money;
	}
	printf("%s\n%d\n%d\n",stu[j].name,a,sum);
}