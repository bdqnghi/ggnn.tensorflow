void main()
{
	int n,all=0,i,j;
	struct student
	{
		char name[20];
		int score1;
		int score2;
		char ganbu;
		char west;
		int article;
		int money;
	}stu[100],temp;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,
			&stu[i].score1,&stu[i].score2,&stu[i].ganbu,&stu[i].west,
			&stu[i].article);
	}//?????????
	//???????????????????
	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		if(stu[i].score1>80&&stu[i].article>=1)
			stu[i].money+=8000;
		if(stu[i].score1>85&&stu[i].score2>80)
			stu[i].money+=4000;
		if(stu[i].score1>90)
			stu[i].money+=2000;
		if(stu[i].score1>85&&stu[i].west=='Y')
			stu[i].money+=1000;
		if(stu[i].score2>80&&stu[i].ganbu=='Y')
			stu[i].money+=850;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(stu[j].money<stu[j+1].money)
			{
				temp=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=temp;
			}
		}
	}
	printf("%s\n",stu[0].name);
	printf("%d\n",stu[0].money);
	for(i=0;i<n;i++)
		all+=stu[i].money;
	printf("%d\n",all);
}

				
