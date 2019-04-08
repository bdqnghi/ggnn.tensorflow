struct student
{
	char name[20];
	int GPA;
	int val;
	char moni;
	char west;
	int paper;
	int scholar;

}stu[100];
void main()
{
	int n,i,max=0,sum,k;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].GPA,&stu[i].val,&stu[i].moni,&stu[i].west,&stu[i].paper);
	}
	for(i=0;i<=n-1;i++)
	{
		stu[i].scholar=0;
		if(stu[i].GPA>80&&stu[i].paper>=1)
			stu[i].scholar=stu[i].scholar+8000;
		if(stu[i].GPA>85&&stu[i].val>80)
			stu[i].scholar=stu[i].scholar+4000;
		if(stu[i].GPA>90)
			stu[i].scholar=stu[i].scholar+2000;
		if(stu[i].GPA>85&&stu[i].west=='Y')
			stu[i].scholar=stu[i].scholar+1000;
		if(stu[i].val>80&&stu[i].moni=='Y')
			stu[i].scholar=stu[i].scholar+850;

	}
	for(i=0,max=stu[0].scholar,sum=0;i<=n-1;i++)
	{
		if(stu[i].scholar>max)
		{
			k=i;
			max=stu[i].scholar;
		}
		sum=sum+stu[i].scholar;
	}
	
	printf("%s\n%d\n%d",stu[k].name,stu[k].scholar,sum);

}