int run(int year)
{
	if(year%100 == 0)
		if(year%400 == 0)
			return 1;
		else
			return 0;
	else
		if(year%4 == 0)
			return 1;
		else 
			return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++)
	{
		int year,m1,m2;
		scanf("%d %d %d",&year,&m1,&m2);
		int m[13];
		m[1] = 31;
		m[2] = 28;
		m[3] = 31;
		m[4] = 30;
		m[5] = 31;
		m[6] = 30;
		m[7] = 31;
		m[8] = 31;
		m[9] = 30;
		m[10] = 31;
		m[11] = 30;
		m[12] = 31;
		int p = 0;
		int q = 0;
		if(run(year))
		{
			m[2] = 29;
			int j = 1;
			while(j<m1)
			{
				p = p + m[j];
				j++;
			}
			j = 1;
			while(j<m2)
			{
				q = q + m[j];
				j++;
			}
		}
		else
		{
			int j = 1;
			while(j<m1)
			{
				p = p + m[j];
				j++;
			}
			j = 1;
			while(j<m2)
			{
				q = q + m[j];
				j++;
			}
		}
		if((p-q)%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}