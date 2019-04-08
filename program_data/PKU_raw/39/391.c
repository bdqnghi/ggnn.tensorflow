struct student
{
	char name[200];
	int score1;
	int score2;
	char c1;
	char c2;
	int paper;
	int money;
}a[100];
int main()
{
	int N,i,maxmoney=0,maxnum=0,summoney=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",&a[i].name,&a[i].score1,&a[i].score2,&a[i].c1,&a[i].c2,&a[i].paper);
		if(a[i].score1>80&&a[i].paper>0)
		{
			a[i].money+=8000;
		}
		if(a[i].score1>85&&a[i].score2>80)
		{
			a[i].money+=4000;
		}
		if(a[i].score1>90)
		{
			a[i].money+=2000;
		}
		if(a[i].score1>85&&a[i].c2=='Y')
		{
			a[i].money+=1000;
		}
		if(a[i].score2>80&&a[i].c1=='Y')
		{
			a[i].money+=850;
		}
	}
	for(i=0;i<N;i++)
	{
		if(a[i].money>maxmoney)
		{
			maxmoney=a[i].money;
			maxnum=i;
		}
		summoney+=a[i].money;
	}
	printf("%s\n%d\n%d",a[maxnum].name,maxmoney,summoney);
}



