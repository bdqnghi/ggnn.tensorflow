
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int m,d,i,count=0;long int y;
	cin>>y>>m>>d;
count=count+(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;
		if(y%4==0&&y%100!=0||y%400==0)
	{
		for(i=0;i<=m-1;i++)
			count=count+*(b+i);
	}
	else
	{
		for(i=0;i<=m-1;i++)
			count=count+*(a+i);
	}
	count+=d-1;
	switch(count%7)
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

