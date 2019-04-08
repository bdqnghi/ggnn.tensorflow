struct student
{
	char name[20];
	int score;
	int pscore;
	char gjud;
	char wjud;
	int paper;
	int sum;
}stu[100];
void main()
{
	int n,i,ssum=0,tsum=0,ti;scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].score,&stu[i].pscore,&stu[i].gjud,&stu[i].wjud,&stu[i].paper),stu[i].sum=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].score>80&&stu[i].paper>=1)stu[i].sum+=8000;
		if(stu[i].score>85&&stu[i].pscore>80)stu[i].sum+=4000;
		if(stu[i].score>90)stu[i].sum+=2000;
		if(stu[i].score>85&&stu[i].wjud=='Y')stu[i].sum+=1000;
		if(stu[i].pscore>80&&stu[i].gjud=='Y')stu[i].sum+=850;
		ssum+=stu[i].sum;	
	}
	for(i=0;i<n;i++)if(stu[i].sum>tsum)tsum=stu[i].sum,ti=i;
	printf("%s\n%d\n%d",stu[ti].name,tsum,ssum);
}



