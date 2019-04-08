/*
 *
 * ????
 * ???2011-01-09
 * ?????? 1000012774
 * ???
 */

int judge(int year)
{
	int i,j,t;
	if(year%4!=0)
		return 0;
	else
	{
		if(year%100==0){
			if(year%400==0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
}

int main()
{
	int y1,y2,m1,m2,d1,d2,day=0,temp;
	int a[14];
	int i,j,k;
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	a[1]=31;
	a[2]=28;
	a[3]=31;
	a[4]=30;
	a[5]=31;
	a[6]=30;
	a[7]=31;
	a[8]=31;
	a[9]=30;
	a[10]=31;
	a[11]=30;
	a[12]=31;
	if((y2-y1)>1){
		for(i=y1+1;i<y2;i++)
		{
			if(judge(i))
				day=day+366;
			else
				day=day+365;
		}
	}
	if((y2-y1)!=0){
	if(judge(y1)){
		a[2]=29;
		if(m1!=12){
		for(i=m1+1;i<=12;i++)
			day=day+a[i];
		}
		day=day+a[m1]-d1;
	}
	a[2]=28;
	if(judge(y1)==0)
	{
		if(m1!=12){
			for(i=m1+1;i<=12;i++)
			day=day+a[i];
				}
		day=day+a[m1]-d1;
	}
	if(judge(y2)!=0){
		a[2]=29;
		temp=0;
				if(m2!=1){
				for(i=1;i<m2;i++)
					day=day+a[i];
				day=day+d2;
				}
				else
					day=day+d2;
	}
	a[2]=28;
	if(judge(y2)==0){
					if(m2!=1){
					for(i=1;i<m2;i++)
						day=day+a[i];
					day=day+d2;
					}
					else
						day=day+d2;
		}
	}
	a[2]=28;
	if(y2-y1==0){
		if(judge(y1)==0){
			if((m2-m1)!=0){
				for(i=m1+1;i<m2;i++)
					day=day+a[i];
			day=day+a[m1]-d1+d2;
			}
			else
				day=d2-d1;
		}
		if(judge(y1)!=0){
			a[2]=29;
					if((m2-m1)!=0){
						for(i=m1+1;i<m2;i++)
							day=day+a[i];
					day=day+a[m1]-d1+d2;
				}
					else
						day=d2-d1;
		}
	}
	cout<<day;
	return 0;
}



