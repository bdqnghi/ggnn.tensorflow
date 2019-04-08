int main()
{
	int sy,sm,sd,ey,em,ed;
	int date=0;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	while (sy!=ey || sm!=em || sd!=ed)
	{
		date++;
		if (sm==12 && sd==31)
		{
			sy++;
			sm=1;
			sd=1;
		}
		else if (
			((sm==1 || sm==3 || sm==5 || sm==7 || sm==8 || sm==10) && sd==31)
			||((sm==4 || sm==6 || sm==9 || sm==11) && sd==30))
		{
			sm++;
			sd=1;
		}
		else if (sm==2 && ((sy%4==0 && sy%100!=0) || (sy%400==0)) && sd==29)
		{
			sm++;
			sd=1;
		}
		else if (sm==2 && ((sy%4!=0) || (sy%100==0 && sy%400!=0)) && sd==28)
		{
			sm++;
			sd=1;
		}
		else sd++;
	}
	cout<<date<<endl;
	return 0;
}