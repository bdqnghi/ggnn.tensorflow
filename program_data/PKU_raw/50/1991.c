int main()
{
	int monthdays[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,sum=0,w;
	cin >> w;
	for(i=0;i<=11;i++)
	{
		sum+=monthdays[0][i];
		monthdays[1][i]=sum+12+w;
		if(monthdays[1][i]==5||monthdays[1][i]%7==5)
			cout << i+1 << endl;
	}
	return 0;
}