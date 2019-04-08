int main()
{
	int n, leap=0, year, mon1, mon2, day=0, mon[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(int i=0; i<n;i++)
	{
		day=0;
		cin>>year>>mon1>>mon2;
        leap=((year%4==0 && year%100!=0) || year%400==0);
	    int m;
		m=mon1>mon2?mon2:mon1;
		while(m<mon1 || m<mon2)
		{
			day+=mon[leap][m];
			m++;
		}
		if(day%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
