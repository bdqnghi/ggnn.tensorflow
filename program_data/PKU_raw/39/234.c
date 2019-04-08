struct award
{
	char name[20];
	int score1;
	int score2;
	char leader;
	char west;
	int paper;
	int money;
};
int main()
{
	struct award stu[100];
	struct award max;
	int n,i,sum=0;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].leader,&stu[i].west,&stu[i].paper);
	}
	for (i=0;i<n;i++)
	{
		stu[i].money=0;
		if (stu[i].score1>80 && stu[i].paper>0)
		{
			stu[i].money+=8000;
		}
		if (stu[i].score1>85 && stu[i].score2>80)
		{
			stu[i].money+=4000;
		}
		if (stu[i].score1>90)
		{
			stu[i].money+=2000;
		}
		if (stu[i].score1>85 && stu[i].west=='Y')
		{
			stu[i].money+=1000;
		}
		if (stu[i].score2>80 && stu[i].leader=='Y')
		{
			stu[i].money+=850;
		}
		sum+=stu[i].money;
	}
	max=stu[0];
	for (i=1;i<n;i++)
	{
		if (stu[i].money>max.money)
		{
			max=stu[i];
		}
	}
	puts(max.name);
	printf("%d\n",max.money);
	printf("%d\n",sum);
	return 0;
}