int main()
{
	int month1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,sum=0;
	cin>>year>>month>>day;
	int y[2]={365,366};
	for (int i=1;i<year%400+400;i++)
	{
		if (i%4!=0||(i%100==0&&i%400!=0))
			sum+=y[0]%7;
		else
			sum+=y[1]%7;
	}
	if (year%4!=0||(year%100==0&&year%400!=0))
		month1[1]=28;
	else
		month1[1]=29;
	for (int i=0;i<month-1;i++)
	{
		sum+=month1[i]%7;
	}
	sum+=day%7;
	int w=(sum-1)%7;
	switch (w)
	{
	case 0:cout<<"Mon."<<endl;break;
	case 1:cout<<"Tue."<<endl;break;
	case 2:cout<<"Wen."<<endl;break;
	case 3:cout<<"Thu."<<endl;break;
	case 4:cout<<"Fri."<<endl;break;
	case 5:cout<<"Sat."<<endl;break;
	case 6:cout<<"Sun."<<endl;break;
	default:break;
	}

	return 0;
}