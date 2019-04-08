int main()
{
	int Sy,Sm,Sd,Ey,Em,Ed,year,month,day,x;
	int Y[2]={365,366};
	int M[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>Sy>>Sm>>Sd;
	cin>>Ey>>Em>>Ed;
	year=Sy;
	x=((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	if(Sy==Ey)
	{
		if(Sm==Em)
			cout<<Ed-Sd<<endl;
		else if(Em-Sm==1)
			cout<<M[x][Sm-1]-Sd+Ed<<endl;
		else
			{
				day=M[x][Sm-1]-Sd;
				for(month=Sm;month<Em-1;month++)
					{
						day+=M[x][month];
				}
				cout<<day<<endl;
		    }

	}
	else if(Ey-Sy==1)
	{
		
		day=M[x][Sm-1]-Sd;
		for(month=Sm;month<12;month++)
			day+=M[x][month];
		year=Ey;
		x=((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
		for(month=0;month<Em-1;month++)
			day+=M[x][month];
		day+=Ed;
		cout<<day<<endl;
	}
	else
	{
		day=M[x][Sm-1]-Sd;
		for(month=Sm;month<12;month++)
			day+=M[x][month];
		for(year=Sy+1;year<Ey;year++)
		{
			x=((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
			day+=Y[x];
		}
		for(month=0;month<Em-1;month++)
			{
				year=Ey;
				x=((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
				day+=M[x][month];
		   }
		day+=Ed;
		cout<<day<<endl;
	}
    return 0;
}
