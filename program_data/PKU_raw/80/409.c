
int main()
{
	int s1[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int s2[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int y1, y2, m1, m2, d1, d2, flag, sum=0, i;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	for(i=y1+1;i<y2;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			sum+=366;
		else
			sum+=365;
	}
	if(y1<y2)
	{
		flag = 0;
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
			flag = 1;
		for(i=m1-1;i<12;i++)
		{
			if(flag)
				sum+=s2[i];
			else
				sum+=s1[i];
		}
		sum-=d1;

		flag = 0;
		if((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
			flag = 1;

		for(i=0;i<m2-1;i++)
		{
			if(flag)
				sum+=s2[i];
			else
				sum+=s1[i];
		}
		sum+=d2;
	}
	else
	{
		flag = 0;
		if((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
			flag = 1;
		for(i=m1-1;i<m2-1;i++)
		{
			if(flag)
				sum+=s2[i];
			else
				sum+=s1[i];
		}
		sum = sum - d1 + d2;
	}
	cout << sum << endl;
	return 0;


}