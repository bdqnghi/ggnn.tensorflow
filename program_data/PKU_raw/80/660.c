int main()
{
    int ya,ma,da,yb,mb,db,s=0,i,mon1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},mon2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},q;
    cin>>ya>>ma>>da>>yb>>mb>>db;
    for(i=ya;i<yb;i++)
    {
		if((i%4==0&&i%100!=0)||(i%400==0))s=s+366;
		else s=s+365;
	}
	if((yb%4==0&&yb%100!=0)||(yb%400==0))
	{
		for(i=ma;i<mb;i++)
		{
			s=s+mon1[i];
		}
		for(i=mb;i<ma;i++)
		{
			s=s-mon1[i];
		}
	}
	else
	{
		for(i=ma;i<mb;i++)
		{
			s=s+mon2[i];
		}
		for(i=mb;i<ma;i++)
		{
			s=s-mon2[i];
		}
	}
	s=s+db-da;
	cout<<s;
	cin>>q;
	return 0;
	
}
