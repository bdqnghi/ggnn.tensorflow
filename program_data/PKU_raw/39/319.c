void main()
{
	int n;
	scanf("%d",&n);
	struct student
	{
		char name[20];
		int score;
		int judge;
		char work;
		char west;
        int paper;
		int money;
	}stu[100];
	int i;
	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].score,&stu[i].judge,&stu[i].work,&stu[i].west,&stu[i].paper);
		if(stu[i].score>80&&stu[i].paper>=1)
			stu[i].money=stu[i].money+8000;
		if(stu[i].score>85&&stu[i].judge>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].score>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].score>85&&stu[i].west=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].judge>80&&stu[i].work=='Y')
			stu[i].money=stu[i].money+850;
	}
	int max=0,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+stu[i].money;
		if(stu[i].money>max)
			max=stu[i].money;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].money==max)
		{	
			printf("%s\n%d\n",stu[i].name,max);
		break;
		}
	}
	printf("%d\n",sum);
}







