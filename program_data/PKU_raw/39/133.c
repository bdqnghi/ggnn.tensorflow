void main()
{
	struct student
	{
		char name[20];
		int a;
		int b;
		char c;
		char d;
		int num;
		int money;
	}stu[100];
	int n,i,j=0,he=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].a,&stu[i].b,&stu[i].c,&stu[i].d,&stu[i].num);
		stu[i].money=0;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].a>80&&stu[i].num>=1)
			stu[i].money=stu[i].money+8000;
		if(stu[i].a>85&&stu[i].b>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].a>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].a>85&&stu[i].d=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].b>80&&stu[i].c=='Y')
			stu[i].money=stu[i].money+850;
	}
	for(i=0;i<n;i++)
		if(stu[i].money>max)
		{
			max=stu[i].money;
			j=i;
		}
    for(i=0;i<n;i++)
	{
		he=he+stu[i].money;
	}
	printf("%s\n%d\n%d\n",stu[j].name,max,he);
}