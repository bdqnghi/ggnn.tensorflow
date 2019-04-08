//?????
int main()
{
	int y[10000],m1[10000],m2[10000],n,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>y[i]>>m1[i]>>m2[i];
	}
	for(int i=0;i<n;i++)
	{
		if(y[i]%4==0&&y[i]%100!=0||y[i]%400==0)
		{
			switch(m1[i])
			{
			case 1:m1[i]=1;break;
			case 2:m1[i]=31+1;break;
			case 3:m1[i]=31+29+1;break;
			case 4:m1[i]=31+29+31+1;break;
			case 5:m1[i]=31+29+31+30+1;break;
			case 6:m1[i]=31+29+31+30+31+1;break;
			case 7:m1[i]=31+29+31+30+31+30+1;break;
			case 8:m1[i]=31+29+31+30+31+30+31+1;break;
			case 9:m1[i]=31+29+31+30+31+30+31+31+1;break;
			case 10:m1[i]=31+29+31+30+31+30+31+31+30+1;break;
			case 11:m1[i]=31+29+31+30+31+30+31+31+30+31+1;break;
			case 12:m1[i]=31+29+31+30+31+30+31+31+30+31+30+1;break;
			}
			switch(m2[i])
			{
			case 1:m2[i]=1;break;
			case 2:m2[i]=31+1;break;
			case 3:m2[i]=31+29+1;break;
			case 4:m2[i]=31+29+31+1;break;
			case 5:m2[i]=31+29+31+30+1;break;
			case 6:m2[i]=31+29+31+30+31+1;break;
			case 7:m2[i]=31+29+31+30+31+30+1;break;
			case 8:m2[i]=31+29+31+30+31+30+31+1;break;
			case 9:m2[i]=31+29+31+30+31+30+31+31+1;break;
			case 10:m2[i]=31+29+31+30+31+30+31+31+30+1;break;
			case 11:m2[i]=31+29+31+30+31+30+31+31+30+31+1;break;
			case 12:m2[i]=31+29+31+30+31+30+31+31+30+31+30+1;break;
			}
			if((m1[i]-m2[i])%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
			switch(m1[i])
		{
			case 1:m1[i]=1;break;
			case 2:m1[i]=31+1;break;
			case 3:m1[i]=31+28+1;break;
			case 4:m1[i]=31+28+31+1;break;
			case 5:m1[i]=31+28+31+30+1;break;
			case 6:m1[i]=31+28+31+30+31+1;break;
			case 7:m1[i]=31+28+31+30+31+30+1;break;
			case 8:m1[i]=31+28+31+30+31+30+31+1;break;
			case 9:m1[i]=31+28+31+30+31+30+31+31+1;break;
			case 10:m1[i]=31+28+31+30+31+30+31+31+30+1;break;
			case 11:m1[i]=31+28+31+30+31+30+31+31+30+31+1;break;
			case 12:m1[i]=31+28+31+30+31+30+31+31+30+31+30+1;break;
		}
			switch(m2[i])
			{
			case 1:m2[i]=1;break;
			case 2:m2[i]=31+1;break;
			case 3:m2[i]=31+28+1;break;
			case 4:m2[i]=31+28+31+1;break;
			case 5:m2[i]=31+28+31+30+1;break;
			case 6:m2[i]=31+28+31+30+31+1;break;
			case 7:m2[i]=31+28+31+30+31+30+1;break;
			case 8:m2[i]=31+28+31+30+31+30+31+1;break;
			case 9:m2[i]=31+28+31+30+31+30+31+31+1;break;
			case 10:m2[i]=31+28+31+30+31+30+31+31+30+1;break;
			case 11:m2[i]=31+28+31+30+31+30+31+31+30+31+1;break;
			case 12:m2[i]=31+28+31+30+31+30+31+31+30+31+30+1;break;
			}
			if((m1[i]-m2[i])%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}