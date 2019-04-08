int main()
{
	int starty,startm,startd;
	int endy,endm,endd;
	int i,j,y=0,m1=0,m2=0,year,year1;
	int month1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//????
	int month2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};//??

	cin>>starty>>startm>>startd;
	cin>>endy>>endm>>endd;
	for( year=starty;year<endy;year++)//??????????
	{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		 year1=366;
	else year1=365;
	y=y+year1;
	}

	if((starty % 4 == 0 && starty % 100 != 0) || (starty % 400 == 0))
	{for(i=1;i<startm;i++)
	m1=m1+month2[i];
	}
	else {for(i=1;i<startm;i++)
m1=m1+month1[i];
		}
	if((endy % 4 == 0 && endy % 100 != 0) || (endy % 400 == 0))
		{for(i=1;i<endm;i++)
		m2=m2+month2[i];
		}
		else {
			for(i=1;i<endm;i++)
				m2=m2+month1[i];
			}
	int sum;
	sum=y+m2-m1+endd-startd;
	cout<<sum;


	}

