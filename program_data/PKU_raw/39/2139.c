
int main()
{
	struct data
	{
		char name[22];
		int score1;
		int score2;
		char mas;
		char dis;
		int paper;
		int sum;
	}p[100];
	int n;
	scanf("%d",&n);
	int i = 0 ;
	for ( i = 0 ; i < n ; i++ )
	{
		scanf("%s",p[i].name);
		scanf("%d",&(p[i].score1));
		scanf("%d",&(p[i].score2));
		getchar();
		scanf("%c",&(p[i].mas));
		getchar();
		scanf("%c",&(p[i].dis));
		scanf("%d",&(p[i].paper));
	}
	for ( i = 0 ; i < n ; i++ )
	{
		p[i].sum = 0;
	}
	int k = 0;
	int max = 0;
	int total = 0;
	for ( i = 0 ; i < n ; i++ )
	{
		if ( p[i].score1 > 80 && p[i].paper >= 1 )
		{
			p[i].sum += 8000;
		}
		if ( p[i].score1 > 85 && p[i].score2 > 80)
		{
			p[i].sum += 4000;
		}
		if ( p[i].score1 > 90 )
		{
			p[i].sum += 2000;
		}
		if ( p[i].score1 > 85 && p[i].dis == 'Y' )
		{
			p[i].sum += 1000;
		}
		if ( p[i].score2 > 80 && p[i].mas == 'Y' )
		{
			p[i].sum += 850;
		}
		total += p[i].sum;
		if ( p[i].sum > max )
		{
			max = p[i].sum;
			k = i;
		}
	}
	printf("%s\n",p[k].name);
	printf("%d\n",max);
	printf("%d\n",total);
	return 0;
}
