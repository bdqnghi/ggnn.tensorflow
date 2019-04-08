int main()
{
	int y[2],m[2],d[2];
	int td=0,tm=0,ty=0,t,s;
	int i;
	int mon_1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int mon_2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>y[0]>>m[0]>>d[0]>>y[1]>>m[1]>>d[1];
	td=d[1]-d[0];
	if((y[1]% 4 == 0&&y[1] % 100 != 0) || (y[1] % 400 == 0))
	{
		if(m[1]<m[0])
			for(i=m[1];i<m[0];i++)
				tm=tm-mon_2[i-1];
		else if(m[1]>m[0])
			for(i=m[0];i<m[1];i++)
				tm=tm+mon_2[i-1];
	}
	else
	{
		if(m[1]<m[0])
			for(i=m[1];i<m[0];i++)
				tm=tm-mon_1[i-1];
		else if(m[1]>m[0])
			for(i=m[0];i<m[1];i++)
				tm=tm+mon_1[i-1];
	}
	if(y[1]>y[0])
	{
	if(m[0]<=2)
	{
		if((y[0]% 4 == 0&&y[0] % 100 != 0) || (y[0] % 400 == 0))
			ty=ty+366;
		else
			ty=ty+365;
	}
	else
	{
		ty=ty+365;
	}
	}
	for(i=y[0]+1;i<y[1];i++)
	{
		if((i% 4 == 0&&i% 100 != 0) || (i% 400 == 0))
			ty=ty+366;
		else
			ty=ty+365;
	}
	//cout<<td<<" "<<tm<<" "<<ty<<endl;
	s=td+tm+ty;
	cout<<s<<endl;
	return 0;
}