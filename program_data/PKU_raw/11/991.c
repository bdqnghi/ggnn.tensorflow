int main()
{
	int zz[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	int y,m,d;
	cin>>y>>m>>d;
	if ( y % 4 != 0 || ( y % 4 == 0 && y % 100 == 0 && y % 400 != 0 ))
		cout<<zz[m-1]+d<<endl;
	else
	{
		if ( m <= 2 )
			cout<<zz[m-1]+d<<endl;
		else
			cout<<zz[m-1]+d+1<<endl;
	}
}