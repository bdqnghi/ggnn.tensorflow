void main()
{
	int n,all=0,i,j,m;
	struct student
	{
		char name[20];
		int score1;
		int score2;
		char monitor;
		char west;
		int paper;
		int money;
	}stu[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,
			&stu[i].score1,&stu[i].score2,&stu[i].monitor,&stu[i].west,
			&stu[i].paper);
	}
	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		if(stu[i].score1>80 && stu[i].paper>=1)
			stu[i].money+=8000;
		if(stu[i].score1>85 && stu[i].score2>80)
			stu[i].money+=4000;
		if(stu[i].score1>90)
			stu[i].money+=2000;
		if(stu[i].score1>85 && stu[i].west=='Y')
			stu[i].money+=1000;
		if(stu[i].score2>80 && stu[i].monitor=='Y')
			stu[i].money+=850;
	}
    m=stu[0].money;
	j=0;
	for(i=0;i<n;i++)
	{
		
			if(stu[i].money>m)
			{
				m=stu[i].money;j=i;
			}
		
	}
	for(i=0;i<n;i++)
		all+=stu[i].money;
	printf("%s\n%d\n",stu[j].name,stu[j].money);
	
	
	printf("%d\n",all);
}


