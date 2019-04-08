int main()
{
	int sy,sm,sd,ey,em,ed,day=0;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	while(sy!=ey||sm!=em||sd!=ed)
	{
		day++;
		if((sd==31&&(sm==1||sm==3||sm==5||sm==7||sm==8||sm==10))||(sd==30&&(sm==4||sm==6||sm==9||sm==11)))
		{
			//cout<<sy<<" "<<sm<<" "<<sd<<endl;
			sd=1;
			sm+=1;
		}
		else if(sd==29&&sm==2&&((sy%4==0&&sy%100!=0)||sy%400==0))
		{
			//cout<<sy<<" "<<sm<<" "<<sd<<endl;
			sd=1;
			sm+=1;
		}
		else if(sd==28&&sm==2&&(!((sy%4==0&&sy%100!=0)||sy%400==0)))
		{
			//cout<<sy<<" "<<sm<<" "<<sd<<endl;
			sd=1;
			sm+=1;
		}
		else if(sd==31&&sm==12)
		{
			//cout<<sy<<" "<<sm<<" "<<sd<<endl;
			sy+=1;
			sm=1;
			sd=1;
		}
		else
		{
			sd+=1;
		}
	}
	cout<<day<<endl;
	return 0;
}
