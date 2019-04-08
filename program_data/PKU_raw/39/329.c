struct student
{
	char name[30];
	int money;
}stu[999];

void main()
{
	int n,i,sum=0,max=0;
	int grade_1,grade_2,paper;
	char a,b;
	char *winner;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&grade_1,&grade_2,&a,&b,&paper);
		stu[i].money=0;
		if(grade_1>80&&paper>0)
			stu[i].money+=8000;
		if(grade_1>85&&grade_2>80)
			stu[i].money+=4000;
		if(grade_1>90)
			stu[i].money+=2000;
		if(grade_1>85&&b=='Y')
			stu[i].money+=1000;
		if(grade_2>80&&a=='Y')
			stu[i].money+=850;
	}
	for(i=0;i<n;i++)
	{
		sum+=stu[i].money;
		if(max<stu[i].money)
		{
			max=stu[i].money;
			winner=stu[i].name;
		}
	}			
	printf("%s\n%d\n%d",winner,max,sum);
}
