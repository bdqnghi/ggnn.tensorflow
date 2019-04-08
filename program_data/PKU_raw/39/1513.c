struct student
{
	int avescore,classscore,paper,money;
	char name[21],lead[2],west[2];
}stu[100];

main()
{
	int n,i,max=0,money=0;
	char output[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		scanf("%s%d%d%s%s%d",&stu[i].name,&stu[i].avescore,&stu[i].classscore,&stu[i].lead,&stu[i].west,&stu[i].paper);
		if(stu[i].avescore>80&&stu[i].paper>=1)
		{
			stu[i].money+=8000;
		}
		if(stu[i].avescore>85&&stu[i].classscore>80)
		{
			stu[i].money+=4000;
		}
		if(stu[i].avescore>90)
		{
			stu[i].money+=2000;
		}
		if(stu[i].avescore>85&&stu[i].west[0]=='Y')
		{
			stu[i].money+=1000;
		}
		if(stu[i].classscore>80&&stu[i].lead[0]=='Y')
		{
			stu[i].money+=850;
		}
		money+=stu[i].money;
		if(max<stu[i].money)
		{
			max=stu[i].money;
			strcpy(output,stu[i].name);
		}
	}
	printf("%s\n%d\n%d\n",output,max,money);
	return 0;
}