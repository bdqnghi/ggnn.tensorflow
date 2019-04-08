int main()
{
	int n,maxmoney,i;
	char maxname[20];
	struct
	{
		char name[20];
		int qimo;
		int banji;
		char ganbu;
		char xibu;
		int paper;
	}student[101];
	int money[101];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%s %d %d %c %c %d",&student[i].name, &student[i].qimo,&student[i].banji,
			&student[i].ganbu,&student[i].xibu,&student[i].paper);
	}
	int total=0;
	for(i=1;i<=n;i++)
	{
		money[i]=0;
		//printf("%d %d\n",student[i].qimo,student[i].paper);
		if((student[i].qimo>80) && (student[i].paper>=1))
		{
			money[i] += 8000;
			//printf("%d\n",money[i]);
		}
		if((student[i].qimo>85) && (student[i].banji>80))
		{
			money[i] += 4000;
		    //printf("%d\n",money[i]);
		}
		if(student[i].qimo>90)
			money[i] += 2000;
		//printf("%d\n",money[i]);
		if((student[i].qimo>85) && (student[i].xibu=='Y'))
			money[i] += 1000;
		//printf("%d\n",money[i]);
		if((student[i].banji>80) && (student[i].ganbu=='Y'))
			money[i] += 850;
		//printf("%d\n",money[i]);*/
		total = total + money[i];
	}

	maxmoney = money[1];
	strcpy(maxname , student[1].name);
	for(i=2;i<=n;i++)
	{
		if(money[i] > maxmoney)
		{
			maxmoney=money[i];
			strcpy(maxname,student[i].name);
		}

	}
	printf("%s\n%d\n%d\n",maxname,maxmoney,total);
	return 0;
}