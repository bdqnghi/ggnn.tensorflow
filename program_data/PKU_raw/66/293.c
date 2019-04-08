
struct date{
	int century;													//century??????100?????????????023???0???
	int year;
	int month;
	int day;
};


int runnian(int year)
{
	if((year%4==0&&year%100!=0)||year%400==0) return 1;
	else return 0;
}


long int day_from_cen_begin(struct date d)
{
	long int day=0;
	int i;
	for(i=100*d.century ;i<d.year;i++)
	{
		if(runnian(i)) day=day+366;
		else day=day+365;
		day=day%7;
	}
	day=day%7;
	//????1?1?????0?1?1??????
	for(int j=1;j<d.month ;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
		{
			day=day+31;
		}
		if(j==4||j==6||j==9||j==11)
		{
			day=day+30;
		}
		if(j==2)
		{
			if(runnian(d.year)) day=day+29;
			else day=day+28;
		}
	}
	//???????????????
	day=day+d.day-1;
	day=day%7;
	return day;
}

/* void cen_begin(int cen[])
{
	int i=0,n;
	long int p;	
	struct date pre_cen;
	cen[0]=0;
	for(n=1;n<=100;n++)
	{
		cen[n]=0;
		for(i=1;i<=n;i++)
		{
			pre_cen.century =i-1;
			pre_cen.year =100*(i-1)+99;
			pre_cen.month=12;
			pre_cen.day= 31;
			p=day_from_cen_begin(pre_cen)+1;
			p=p%7;
			//cout<<"p="<<p<<endl;
			cen[n]=cen[n]+p;
			
		}
		cen[n]=cen[n]%7;
		//cout<<cen[n]<<endl;
	}
	
} */

void putout(int flag)
{
	char s[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cout<<s[flag%7]<<endl;
}

int main()
{
	struct date d;
	int cen,flag,i,m=0,x[10000];
	//cen_begin(cen);
for(i=0;i<50000;i++) m++;
		//cout<<cen[i]<<endl;
	cin>>d.year>>d.month >>d.day ;
	d.century =d.year /100;
	//cout<<day_from_cen_begin(d);
		if(d.century%4==0) cen=0;
		if(d.century%4==1) cen=6;
		if(d.century%4==2) cen=4;
		if(d.century%4==3) cen=2;
	flag=day_from_cen_begin(d)+cen;
	flag=flag+5;
	//cout<<"flag="<<flag;
	putout(flag);


}