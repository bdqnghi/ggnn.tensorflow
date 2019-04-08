int d(int y,int month);
int main()
{
	int n,y,i,m1,m2,sum;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=0;
		cin>>y>>m1>>m2;
		if(m1>m2)
		{
			int change=m1;
			m1=m2;
			m2=change;
		}
		for(;m1<m2;m1++)
		{
			sum+=d(y,m1);
		}
		if(sum%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
int d(int y,int m)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
	if(m!=2) return 30;
	if((y%4==0&&y%100!=0)||y%400==0) return 29;
	return 28;
}