int main()
{
	//int y[2]={365,366};
	int mon[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int y1,y2,m1,m2,d1,d2,a=0,i,t;
	cin>>y1>>m1>>d1>>y2>>m2>>d2;
	t=y1;
    while(t<y2)
	{
		if((t% 4 == 0 && t % 100 != 0)||(t% 400 == 0))
			a+=366;
		else a+=365;
		t++;
	}
	if((y1% 4 == 0 && y1 % 100 != 0) ||(y1% 400 == 0))
		for(i=0;i<m1-1;i++)//0 dai biao 1 yue
			a-=mon[1][i];
	else for(i=0;i<m1-1;i++)
		a-=mon[0][i];
    if((y2%4== 0 && y2% 100!= 0)||(y2% 400 == 0))
		for(i=0;i<m2-1;i++)//0 dai biao 1 yue
			a+=mon[1][i];
	else for(i=0;i<m2-1;i++)
		a+=mon[0][i];
	a=a+d2-d1;
	cout<<a;
   return 0;
}