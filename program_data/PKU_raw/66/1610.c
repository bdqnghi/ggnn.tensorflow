int main()
{
	int i,y,m,d,a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31},x;
	cin>>y>>m>>d;
	y=y%400;
	if(y==0)
		y=400;
	x=(y-1)*365+(y-1)/400+(y-1)/4-(y-1)/100;
	if(m==1)
		x+=d;
	else if(y%4==0&&y%100!=0||y%400==0)
	{
		for(i=0;i<m-1;i++)
			x+=b[i];
		x+=d;
	}
	else
	{
		for(i=0;i<m-1;i++)
			x+=a[i];
		x+=d;
	}
	switch((x-1)%7)
	{
	case 0:cout<<"Mon."<<endl;break;
	case 1:cout<<"Tue."<<endl;break;
	case 2:cout<<"Wen."<<endl;break;
	case 3:cout<<"Thu."<<endl;break;
	case 4:cout<<"Fri."<<endl;break;
	case 5:cout<<"Sat."<<endl;break;
	case 6:cout<<"Sun."<<endl;break;
	}
	return 0;
}