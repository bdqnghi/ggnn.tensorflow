struct student
{
	char name[30];
	int examgrade;
	int appgrade;
	char a;
	char b;
	int thesis;
};
void main()
{
    int n,i,temp,sum=0,max=0;
	int money[100]={0};
	struct student stu[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].name);
		scanf("%d%d",&stu[i].examgrade,&stu[i].appgrade);
		scanf(" %c %c",&stu[i].a,&stu[i].b);
		scanf("%d",&stu[i].thesis);
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].examgrade>80)
		{
			if(stu[i].thesis>=1)
				money[i]=money[i]+8000;
			if(stu[i].examgrade>85)
			{
				if(stu[i].appgrade>80)
					money[i]=money[i]+4000;
				if(stu[i].examgrade>90)
					money[i]=money[i]+2000;
				if(stu[i].b=='Y')
					money[i]=money[i]+1000;
			}
		}
		if(stu[i].a=='Y'&&stu[i].appgrade>80)
			money[i]=money[i]+850;
	}
	for(i=0;i<n;i++)
	{
		sum=sum+money[i];
		if(money[i]>max)
		{
			max=money[i];
			temp=i;
		}
	}
	printf("%s\n",stu[temp].name);
	printf("%d\n%d",max,sum);
}