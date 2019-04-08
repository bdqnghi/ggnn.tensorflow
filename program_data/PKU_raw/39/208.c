
void main()
{
	struct student
	{
	char name[100];
	int marka;
	int markb;
	char ganbu;
	char xibu;
	int c;
	}stu[100];
	int n,i,j,max,sum=0;
	int money[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].marka,&stu[i].markb,&stu[i].ganbu,&stu[i].xibu,&stu[i].c);
		
	}
    for(i=0;i<n;i++)
	{
		if(stu[i].marka>80&&stu[i].c>0)
		{
			money[i]=money[i]+8000;
		}
		if(stu[i].marka>85&&stu[i].markb>80)
		{
			money[i]=money[i]+4000;
		}
		if(stu[i].marka>90)
		{
			money[i]=money[i]+2000;
		}
		if(stu[i].marka>85&&stu[i].xibu=='Y')
		{
			money[i]=money[i]+1000;
		}
		if(stu[i].markb>80&&stu[i].ganbu=='Y')
		{
			money[i]=money[i]+850;
		}
	}
	max=0;
	for(i=1;i<n;i++)
	{
		if(money[i]>money[max])
			max=i;
	}
	for(i=0;i<n;i++)
		sum=sum+money[i];
	printf("%s\n",stu[max].name);
	printf("%d\n",money[max]);
	printf("%d\n",sum);

	
           
		



		
	
	
}