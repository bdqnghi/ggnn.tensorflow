
int run(int a)
{
	if ( a%4==0 && a%100 !=0 || a%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	int isr = run(y);
	int p[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int days= 0;
	for (int i = 1;i<m;i++)
	{
		days = days + p[i];
	}
	days = days + d;
	if (isr==1 && m>=3)
		days++;
	cout<<days;
}