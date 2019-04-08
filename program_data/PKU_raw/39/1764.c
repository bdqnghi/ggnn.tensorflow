void main()
{
	struct student
	{char name[21];
	int score1;
	int score2;
	char q1;
	char q2;
	int paper;
	};
	struct student stu[101];
	//struct student*p;
	int p;
	int n,i,money[101],max=0,sum=0;
	scanf("%d",&n);
	for (p=0;p<n;p++)
	{
		scanf ("%s %d %d %c %c %d",&(stu[p].name),&(stu[p].score1),&(stu[p].score2),&(stu[p].q1),&(stu[p].q2),&(stu[p].paper));
	}
	for (i=0;i<n;i++)money[i]=0;
	i=0;
	for (p=0;p<n;p++)
	{if (stu[p].score1>80&&stu[p].paper>0)money[i]+=8000;
	if (stu[p].score1>85&&stu[p].score2>80)money[i]+=4000;
	if (stu[p].score1>90)money[i]+=2000;
	if (stu[p].score1>85&&stu[p].q2=='Y')money[i]+=1000;
	if (stu[p].score2>80&&stu[p].q1=='Y')money[i]+=850;
	if (money[i]>money[max])max=i;
	sum+=money[i];i++;}
	printf("%s\n%d\n%d",stu[max].name,money[max],sum);
	
}