
 

int mtod(int yy,int mm1,int mm2)
{
	int dd1,dd2,dd;
	if ((yy%400==0)||((yy%4==0)&&(yy%100!=0)))
	{
		switch(mm1)
		{
		case 1:dd1=0;break;
		case 2:dd1=31;break;
		case 3:dd1=31+29;break;
		case 4:dd1=31+29+31;break;
		case 5:dd1=31+29+31+30;break;
		case 6:dd1=31+29+31+30+31;break;
		case 7:dd1=31+29+31+30+31+30;break;
		case 8:dd1=31+29+31+30+31+30+31;break;
		case 9:dd1=31+29+31+30+31+30+31+31;break;
		case 10:dd1=31+29+31+30+31+30+31+31+30;break;
		case 11:dd1=31+29+31+30+31+30+31+31+30+31;break;
		default:dd1=31+29+31+30+31+30+31+31+30+31+30;break;
		}
		switch(mm2)
		{
		case 1:dd2=0;break;
		case 2:dd2=31;break;
		case 3:dd2=31+29;break;
		case 4:dd2=31+29+31;break;
		case 5:dd2=31+29+31+30;break;
		case 6:dd2=31+29+31+30+31;break;
		case 7:dd2=31+29+31+30+31+30;break;
		case 8:dd2=31+29+31+30+31+30+31;break;
		case 9:dd2=31+29+31+30+31+30+31+31;break;
		case 10:dd2=31+29+31+30+31+30+31+31+30;break;
		case 11:dd2=31+29+31+30+31+30+31+31+30+31;break;
		default:dd2=31+29+31+30+31+30+31+31+30+31+30;break;
		}
	}
	else
	{
		switch(mm1)
		{
		case 1:dd1=0;break;
		case 2:dd1=31;break;
		case 3:dd1=31+28;break;
		case 4:dd1=31+28+31;break;
		case 5:dd1=31+28+31+30;break;
		case 6:dd1=31+28+31+30+31;break;
		case 7:dd1=31+28+31+30+31+30;break;
		case 8:dd1=31+28+31+30+31+30+31;break;
		case 9:dd1=31+28+31+30+31+30+31+31;break;
		case 10:dd1=31+28+31+30+31+30+31+31+30;break;
		case 11:dd1=31+28+31+30+31+30+31+31+30+31;break;
		default:dd1=31+28+31+30+31+30+31+31+30+31+30;break;
		}
		switch(mm2)
		{
		case 1:dd2=0;break;
		case 2:dd2=31;break;
		case 3:dd2=31+28;break;
		case 4:dd2=31+28+31;break;
		case 5:dd2=31+28+31+30;break;
		case 6:dd2=31+28+31+30+31;break;
		case 7:dd2=31+28+31+30+31+30;break;
		case 8:dd2=31+28+31+30+31+30+31;break;
		case 9:dd2=31+28+31+30+31+30+31+31;break;
		case 10:dd2=31+28+31+30+31+30+31+31+30;break;
		case 11:dd2=31+28+31+30+31+30+31+31+30+31;break;
		default:dd2=31+28+31+30+31+30+31+31+30+31+30;break;
		}
	}
	dd=dd2-dd1;
	return dd;
}

int main()
{
	int n,i,k;
	int year,month1,month2;
	int ans[201];
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>year
			>>month1
			>>month2;
		k=mtod (year,month1,month2);
		if (k%7==0)
		{
			ans[i]=1;
		}
		else
		{
			ans[i]=0;
		}
		year=month1=month2=0;
	}
    for (i=1;i<=n;i++)
	{
		if (ans[i]==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
