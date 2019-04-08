int main()
{
	int i,a[2][12]={{3,0,3,2,3,2,3,3,2,3,2,3},{3,1,3,2,3,2,3,3,2,3,2,3}},y,m,d,k=0;
	cin>>y>>m>>d;
	k=(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		if(m==1)
		{
			k=k+d;
		}
		else if(m>1)
		{
			for(i=0;i<m-1;i++)
			{
				k=k+a[1][i];
			}
			k=k+d;
		}
	}
	else
	{
		if(m==1)
		{
			k=k+d;
		}
		else if(m>1)
		{
			for(i=0;i<m-1;i++)
			{
				k=k+a[0][i];
			}
			k=k+d;
		}
	}
	if(k%7==1)
	{
		cout<<"Mon."<<endl;
	}
	else if(k%7==2)
	{
		cout<<"Tue."<<endl;
	}
	else if(k%7==3)
	{
		cout<<"Wed."<<endl;
	}
	else if(k%7==4)
	{
		cout<<"Thu."<<endl;
	}
	else if(k%7==5)
	{
		cout<<"Fri."<<endl;
	}
	else if(k%7==6)
	{
		cout<<"Sat."<<endl;
	}
	else
	{
		cout<<"Sun."<<endl;
	}
	return 0;
}