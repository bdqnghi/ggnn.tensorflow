int main()
{
	int y,m,d,x=0,i,a[12]={31,29,31,30,31,30,31,31,30,31,30,31},b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	if(m==1)
		x=d;
	else if(m==2)
		x=31+d;
	else if(y%100!=0&&y%4==0||y%400==0)
	{
		for(i=0;i<m-1;i++)
			x+=a[i];
		x+=d;
	}
	else
	{
		for(i=0;i<m-1;i++)
			x+=b[i];
		x+=d;
	}
	cout<<x<<endl;
	return 0;
}