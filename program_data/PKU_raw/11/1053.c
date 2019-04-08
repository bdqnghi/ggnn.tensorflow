int main()
{
	int y,m,d,t=0;
	cin>>y>>m>>d;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if((y%4==0&&y%100!=0)||(y%400==0))
		a[1]=29;
	if(m==1)
		cout<<d;
	else
	{
		for(int i=0;i<m-1;i++)
		{
			t=t+a[i];
		}
		cout<<t+d;
	}
	return 0;
}