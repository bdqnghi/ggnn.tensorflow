int sy,sm,sd,ey,em,ed,i,pmonth[14]={0,31,28,31,30,31,30,31,31,30,31,30,31,0};
int rmonth[14]={0,31,29,31,30,31,30,31,31,30,31,30,31,0},day=0,sum[10],r=0;
void load()
{
	cin>>sy>>sm>>sd>>ey>>em>>ed;
}
int isrun(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
void cacul()
{
	if(ey>sy)
	{
	if(isrun(sy)==1)
	{
		for(i=sm+1;i<14;i++)
		{
			sum[1]=sum[1]+rmonth[i];
		}
		sum[2]=rmonth[sm]-sd+1;
	}
	if(isrun(sy)==0)
	{
		for(i=sm+1;i<14;i++)
		{
			sum[1]=sum[1]+pmonth[i];
		}
		sum[2]=pmonth[sm]-sd+1;
	}
	if(isrun(ey)==1)
	{
		for(i=0;i<em;i++)
		{
			sum[3]=sum[3]+rmonth[i];
		}
		sum[4]=ed;
	}
	if(isrun(ey)==0)
	{
		for(i=0;i<em;i++)
		{
			sum[3]=sum[3]+pmonth[i];
		}
		sum[4]=ed;
	}
	if((ey-sy)>1)
	{
		for(i=sy+1;i<ey;i++)
	    {
		     if(isrun(i)==1)
			    sum[5]=sum[5]+366;
		     if(isrun(i)==0)
			   sum[5]=sum[5]+365;
	     }
	}
	else
		sum[5]=0;
	for(i=1;i<=5;i++)
		r=r+sum[i];
	cout<<r-1;
	}
	else
	{
		if(sm==em)
			cout<<ed-sd;
		else
		{
			if(isrun(sy)==1)
			{
				for(i=sm;i<em;i++)
				{
					sum[6]=sum[6]+rmonth[i];
				}
				sum[6]=sum[6]-rmonth[sm]+1+ed;
			}
			if(isrun(sy)==0)
			{
				for(i=sm;i<em;i++)
				{
					sum[6]=sum[6]+pmonth[i];
				}
				sum[6]=sum[6]-rmonth[sm]+1+ed;
			}
			cout<<sum[6];
		}
	}
}

int main()
{
	load();
	cacul();
}
