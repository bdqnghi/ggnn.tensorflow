int main()
{
	int y1,y2,mon1,mon2,da1,da2,days=0;
	cin>>y1>>mon1>>da1>>y2>>mon2>>da2;
	while(y2>y1)
	{
		if(((y1) % 4 == 0 && (y1) %100!= 0)|| ((y1) % 400 == 0))
		{days=days+366;y1=y1+1;}
		else {days=days+365;y1=y1+1;}
	}
	while(mon2>mon1)
	{
		if(((y1) % 4 == 0 && (y1) %100!= 0)|| ((y1) % 400 == 0))
		{if(mon1==1||mon1==3||mon1==5||mon1==7||mon1==8||mon1==10||mon1==12)
		  {days=days+31;mon1=mon1+1;}
		  else if(mon1==2){days=days+29;mon1=mon1+1;}
		  else {days=days+30;mon1=mon1+1;}
		 }
	else {
		  if(mon1==1||mon1==3||mon1==5||mon1==7||mon1==8||mon1==10||mon1==12)
		{days=days+31;mon1=mon1+1;}
		    else if(mon1==2){days=days+28;mon1=mon1+1;}
			else {days=days+30;mon1=mon1+1;}
	     }

	     }
	while(mon2<mon1)
	{
		if(((y1) % 4 == 0 && (y1) %100!= 0)|| ((y1) % 400 == 0))
		{if(mon2==1||mon2==3||mon2==5||mon2==7||mon2==8||mon2==10||mon2==12)
		  {days=days-31;mon2=mon2+1;}
		  else if(mon2==2){days=days-29;mon2=mon2+1;}
		  else {days=days-30;mon2=mon2+1;}
		 }
	else {
		  if(mon2==1||mon2==3||mon2==5||mon2==7||mon2==8||mon2==10||mon2==12)
		{days=days-31;mon2=mon2+1;}
		    else if(mon2==2){days=days-28;mon2=mon2+1;}
			else {days=days-30;mon2=mon2+1;}
	     }

	     }
	days=days+(da2-da1);
	
	cout<<days;
}
		
	