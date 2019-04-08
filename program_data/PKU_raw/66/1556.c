int main ()
{
	int y,m,d,s=0,x;
	int a[12]={31,28,31 ,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	y=(y-1)%400+1;
	if(y>1)
	{
		for(int i=1;i<y;i++)
		{
			if(i%400==0||(i%4==0&&i%100!=0)) s=s+2;
			else s=s+1;
		}
	}
	if(m>1)
	{
		if(y%4==0&&y%100!=0) a[1]=29;
		for(int i=1;i<m;i++)
		{
			s=s+a[i-1];
		}
	}
	s=s+d;
	switch (s%7)
	{
	case 0:  cout<<"Sun."<<endl;break;
	case 1:  cout<<"Mon."<<endl;break;
	case 2:  cout<<"Tue."<<endl;break;
	case 3:  cout<<"Wed."<<endl;break;
	case 4:  cout<<"Thu."<<endl;break;
	case 5:  cout<<"Fri."<<endl;break;
	case 6:  cout<<"Sat."<<endl;break;
	}
	return 0;
}