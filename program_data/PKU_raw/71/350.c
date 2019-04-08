int runnian(int n);
int day(int m);
int main()
{
	int n,y,m1,m2;
	int i;
	int e,da;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2)
		{
			e=m1;
			m1=m2;
			m2=e;
		}
		if((m1==1||m1==2)&&(m2!=1&&m2!=2)&&runnian(y)==1)
		{
			da=day(m2)-day(m1)+1;
		}
		else 
			da=day(m2)-day(m1);
	if(da%7==0)
		printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}
int runnian(int n)
{
	if(n%400==0)
		return 1;
	else if(n%100==0)
		return 0;
	else if(n%4==0)
		return 1;
	else return 0;
}
int day(int m)
{
	int num;
	if(m==1)
		num=0;
	else if(m==2)
		num=31;
	else if(m==3)
		num=59;
	else if(m==4)
		num=90;
	else if(m==5)
		num=120;
	else if(m==6)
		num=151;
	else if(m==7)		
		num=181;
	else if(m==8)
		num=212;
	else if(m==9)
		num=243;
	else if(m==10)
		num=273;
	else if(m==11)
		num=304;
	else if(m==12)
		num=334;
	return num;
}