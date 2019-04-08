
int main()
{
	int n = 0;
	int score[11] = {0};
	int ok[11] ={0};
	double grade[11] = {0};
	int i = 1;
	int m = 1;
	int t = 1;
	double sum1 = 0.0;
	double ave = 0.0;

	cin >> n;

	cout << endl;

	while(i <= n)
	{
		cin >> score[i++];
	}
	cout << endl;

	while(m <= n)
	{
		cin >> ok[m++];
	}

	for(t=1;t<=n;t++)
	{
		if( ok[t]>=90)
		{
			grade[t]=4.0;continue;
		}
		if(ok[t]>=85)
		{
			grade[t]=3.7;continue;
		}
		if(ok[t]>=82)
		{
			grade[t]=3.3 ;continue;
		}
		if(78<=ok[t])
		{
			grade[t]=3.0;continue;
		}
		if(75<=ok[t])
		{
			grade[t]=2.7;continue;
		}
		if(72<=ok[t])
		{
			grade[t]=2.3;continue;
		}
		if(68<=ok[t])
		{
			grade[t]=2.0;continue;
		}
		if(64<=ok[t])
		{
			grade[t]=1.5;continue;
		}
		if(60<=ok[t])
		{
			grade[t]=1.0;continue;
		}
		if(60>ok[t])
		{
			grade[t]=0.0;continue;
		}
	}

	for(i=1;i<=n;i++)
	{
		sum1 += score[i]*grade[i];
	}
	
	ave = sum1 / ( score[1] + score[2] + score[3] + score[4] + score[5] + score[6] + score[7] + score[8] + score[9] + score[10]);

	cout << fixed << setprecision(2) << ave << endl;

	return 0;

}