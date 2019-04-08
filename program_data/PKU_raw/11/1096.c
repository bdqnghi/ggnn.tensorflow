int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,l=0;
	cin>>y>>m>>d;
	if(y%4!=0||(y%100==0&&y%400!=0))//???
	{
		if(m==1)
			cout<<d;
		else
		{
			for(int i=0;i<m-1;i++)
			{
				l+=a[i];
			}
			cout<<l+d;
		}
	}
	else
	{
		if(m==1)
			cout<<d;
		else
		{
			for(int i=0;i<m-1;i++)
			{
				l+=b[i];
			}
			cout<<l+d;
		}
	}
	return 0;
}