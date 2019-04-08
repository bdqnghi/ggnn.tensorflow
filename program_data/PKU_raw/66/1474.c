
int main()
{
	int n,m,d,cnt=0,cntpingnian=0,cntyiqian=0,cntrunnian=0,cntthisyear=0,i,a1[13]={31,28,31,30,31,30,31,31,30,31,30,31},a2[13]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n>>m>>d;
	cntrunnian=(n-1)/4-(n-1)/100+(n-1)/400;
	cntpingnian=n-1-cntrunnian;
	cntyiqian=cntpingnian+2*cntrunnian;
	if((n%4==0&&n%100!=0)||(n%400==0))
	{
		for(i=0;i<m-1;i++)
			cntthisyear+=a2[i];
		cntthisyear+=d;
	}
	else
	{
		for(i=0;i<m-1;i++)
			cntthisyear+=a1[i];
		cntthisyear+=d;
	}
	cnt=cntyiqian+cntthisyear-1;
	i=cnt%7;
	switch(i)
	{
		case 0:cout<<"Mon."<<endl;break;
		case 1:cout<<"Tue."<<endl;break;
		case 2:cout<<"Wed."<<endl;break;
		case 3:cout<<"Thu."<<endl;break;
		case 4:cout<<"Fri."<<endl;break;
		case 5:cout<<"Sat."<<endl;break;
		case 6:cout<<"Sun."<<endl;break;
	}


	return 0;
}