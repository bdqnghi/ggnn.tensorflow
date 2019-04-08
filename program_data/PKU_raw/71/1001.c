int fc(int year,int mon1,int mon2);
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int year,mon1,mon2;
	    scanf("%d%d%d",&year,&mon1,&mon2);
    	if(mon1>mon2)
		{
		    int tmp;
		    tmp=mon1;
		    mon1=mon2;
	    	mon2=tmp;
		}
	    if(fc(year,mon1,mon2)%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

int fc(int year,int mon1,int mon2)
{
	int delta=0;
	int i;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=mon1;i<mon2;i++)
	{
		delta+=month[i];
	}
	if(mon1==2||(mon1==1&&mon2>2))
	{
		if(year%4==0&&year>=4&&year%100!=0)
		    delta+=1;
	    else if(year%100==0&&year>=100&&year%400==0)
		    delta+=1;
	}
	return delta;
}