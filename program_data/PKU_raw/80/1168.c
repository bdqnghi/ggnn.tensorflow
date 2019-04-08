int main()
{
	int y1,y2,m1,m2,d1,d2;
	int md1[12]={31,28,31,30,31,30,31,31,30,31,30,31},md2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int jl=0;
	int i,j,k;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	for(i=y1;i<y2;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			jl+=366;
		}
		else
		{
			jl+=365;
		}
	}
	if((y1%4==0&&y1%100!=0)||(y1%400==0))
	{
		for(i=0;i<m1-1;i++)
		{
			jl-=md2[i];
		}
		jl-=d1;
	}
	else
	{
		for(i=0;i<m1-1;i++)
		{
			jl-=md1[i];
		}
		jl-=d1;
	}
	if((y2%4==0&&y2%100!=0)||(y2%400==0))
	{
		for(i=0;i<m2-1;i++)
		{
			jl+=md2[i];
		}
		jl+=d2;
	}
	else
	{
		for(i=0;i<m2-1;i++)
		{
			jl+=md1[i];
		}
		jl+=d2;
	}
	cout<<jl<<endl;
	return 0;
}