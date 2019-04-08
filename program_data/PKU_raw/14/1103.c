struct stu
{
	int num;
	int score1;
	int score2;
}
main()
{
	struct stu damn[4];
	int n,i,j,total;
	scanf("%d",&n);
	for(i=0;i<3;i++) scanf("%d %d %d",&damn[i].num,&damn[i].score1,&damn[i].score2);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(damn[j].score1+damn[j].score2<damn[j+1].score1+damn[j+1].score2)
			{
				damn[3]=damn[j];
				damn[j]=damn[j+1];
				damn[j+1]=damn[3];
			}
		}
	}
	for(i=0;i<n-3;i++)
	{
		scanf("%d %d %d",&damn[3].num,&damn[3].score1,&damn[3].score2);
		if(damn[3].score1+damn[3].score2<damn[2].score1+damn[2].score2) continue;
		else if(damn[3].score1+damn[3].score2<=damn[1].score1+damn[1].score2&&damn[3].score1+damn[3].score2>damn[2].score1+damn[2].score2)
		{
			damn[2]=damn[3];
		}
		else if(damn[3].score1+damn[3].score2<=damn[0].score1+damn[0].score2&&damn[3].score1+damn[3].score2>damn[1].score1+damn[1].score2)
		{
			damn[2]=damn[1];
			damn[1]=damn[3];
		}
		else if(damn[3].score1+damn[3].score2>damn[0].score1+damn[0].score2)
		{
			damn[2]=damn[1];
			damn[1]=damn[0];
			damn[0]=damn[3];
		}

	}
	for(i=0;i<2;i++)
	{
		total=damn[i].score1+damn[i].score2;
		printf("%d %d\n",damn[i].num,total);
	}
	total=damn[i].score1+damn[i].score2;
	printf("%d %d",damn[i].num,total);
}
