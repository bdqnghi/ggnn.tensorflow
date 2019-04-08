struct student{
	char name[20];
	int qimo;
	int banji;
	char leader;
	char west;
	int essay;
}stu[1000];
struct money{
	long p;
	int q;
}money[1000];

void main()
{
	int n,i,j,max[1000]={0},mmax,k=0;
	long sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo ,&stu[i].banji ,&stu[i].leader ,&stu[i].west ,&stu[i].essay);
	}
	for(i=0;i<n;i++)
	{   money[i].p=0;
	money[i].q =i;
		if(stu[i].qimo >80&&stu[i].essay>=1)
			money[i].p=money[i].p+8000;
		if(stu[i].qimo >85&&stu[i].banji>80)
			money[i].p =money[i].p +4000;	
		if(stu[i].qimo >90)
			money[i].p =money[i].p +2000;
	if(stu[i].qimo >85&&stu[i].west=='Y')
			money[i].p =money[i].p +1000;
		if(stu[i].banji >80&&stu[i].leader=='Y')
			money[i].p =money[i].p+850;
	}
	j=i;
	mmax=money[0].p;
	for(i=0;i<j;i++)
	{
		if(mmax<money[i].p)
			mmax=money[i].p;
	}
	for(i=0;i<j;i++)
		if(mmax==money[i].p)
		{
			k=money[i].q;
			break;
		}

		for(i=0;i<n;i++)
			sum=sum+money[i].p;
		printf("%s\n%ld\n%ld",stu[k].name,money[k].p,sum);
}