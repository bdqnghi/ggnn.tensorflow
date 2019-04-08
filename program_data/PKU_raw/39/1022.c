struct studen{char name[100];int score1;int score2; char H;char W;int paper;int money;}stu[200];
int main()
{
	int n,i,j,money=0,student,scholar=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",stu[i].name,&stu[i].score1,&stu[i].score2,&stu[i].H,&stu[i].W,&stu[i].paper);
		stu[i].money=0;
		if(stu[i].score1>80&&stu[i].paper>0)
			stu[i].money+=8000;
		if(stu[i].score1>85&&stu[i].score2>80)
			stu[i].money+=4000;
		if(stu[i].score1>90)
			stu[i].money+=2000;
		if(stu[i].score1>85&&stu[i].W=='Y')
			stu[i].money+=1000;
		if(stu[i].score2>80&&stu[i].H=='Y')
			stu[i].money+=850;
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].money>money)
		{
			student=i;
			money=stu[i].money;
		}
		scholar=scholar+stu[i].money;
	}
		printf("%s\n%d\n%d\n",stu[student].name,stu[student].money,scholar);
	return 0;
}


	




