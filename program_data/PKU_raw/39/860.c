struct stu
{
	char name[21];
	int final;
	int pingyi;
	char leader;
	char west;
	int essay;
	int total;
};
int main()
{
	int yuanshi(struct stu s);
	int wusi(struct stu s);
	int score(struct stu s);
	int western(struct stu s);
	int contribution(struct stu s);
	int n,i;
	int sum=0,max;
	struct stu s[101],boss;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",s[i].name,&s[i].final,&s[i].pingyi,&s[i].leader,&s[i].west,&s[i].essay);
		s[i].total=0;
		if (yuanshi(s[i]))
			s[i].total+=8000;
		if (wusi(s[i]))
			s[i].total+=4000;
		if (score(s[i]))
		    s[i].total+=2000;
		if (western(s[i]))
			s[i].total+=1000;
		if (contribution(s[i]))
			s[i].total+=850;
	}
    max=s[0].total;
	for (i=0;i<n;i++)
	{
		if (max<s[i].total)
		{
			max=s[i].total;
			boss=s[i];

		}
		sum+=s[i].total;
	}
	printf("%s\n%d\n%d\n",boss.name,boss.total,sum);
	return 0;
}

int yuanshi(struct stu s)
{
	if ((s.final>80)&&(s.essay>=1))
	{
		return 1;
	}
	else
		return 0;
}

int wusi(struct stu s)
{
	if ((s.final>85)&&(s.pingyi>80))
		return 1;
	else
		return 0;
}

int score(struct stu s)
{
	if (s.final>90)
		return 1;
	else
		return 0;
}

int western(struct stu s)
{
	if ((s.final>85)&&(s.west=='Y'))
		return 1;
	else 
		return 0;
}

int contribution(struct stu s)
{
	if ((s.pingyi>80)&&(s.leader=='Y'))
		return 1;
	else
		return 0;
}