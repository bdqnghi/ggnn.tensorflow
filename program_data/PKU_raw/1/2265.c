int ys(int af,int bf)
{
	int s;
	if(af<bf)
	s=0;
	if(af==bf)
	s=1;
	if(af>bf)
	{
		s=1;
		for(int i=af/2;i>=bf;i--)
		{
			if(af%i == 0)
			{
			s+=ys(af/i,i);
			}
		}
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	int p;
	while(cin>>p)
	{
		cout << ys(p,2) << endl;
	} 
	return 0;
}
