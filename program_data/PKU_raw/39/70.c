void main()
{
	struct student
	{
		char name[30];
		int num1;
		int num2;
		char isstu;
		char iswest;
		int paper;
	}stu[100];
	int n,i,max,all=0;
	int reward[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		reward[i]=0;
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].num1,&stu[i].num2,&stu[i].isstu,&stu[i].iswest,&stu[i].paper);
	for(i=0;i<n;i++)
	{
		if(stu[i].num1>80&&stu[i].paper>=1)
			reward[i]=reward[i]+8000;
		if(stu[i].num1>85&&stu[i].num2>80)
			reward[i]=reward[i]+4000;
		if(stu[i].num1>90)
			reward[i]=reward[i]+2000;
		if(stu[i].num1>85&&stu[i].iswest=='Y')
			reward[i]=reward[i]+1000;
		if(stu[i].num2>80&&stu[i].isstu=='Y')
			reward[i]=reward[i]+850;
	}
	for(i=0;i<n;i++)
		all=all+reward[i];
	max=reward[0];
	for(i=1;i<n;i++)
		if(max<reward[i])
			max=reward[i];
	for(i=0;i<n;i++)
		if(max==reward[i])
			break;
	printf("%s\n%d\n%d\n",stu[i].name,reward[i],all);
}
	