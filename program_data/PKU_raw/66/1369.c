int t=0;
int year(int y)
{
	int d;
	if(((y%4==0)&&(y%100!=0))||(y%400==0)) d=366;
	else  d=365;
	return d;
}
int month(int y,int m)
{
	int d;
	if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)) d=31;
	if((m==4)||(m==6)||(m==9)||(m==11)) d=30;
	if(m==2)
	{
		if(((y%4==0)&&(y%100!=0))||(y%400==0)) d=29;
		else  d=28;
	}
	return d;
}
int main()
{
	int a,m,b,c,i,w;
	scanf("%d%d%d",&a,&b,&c);
	m=(a-1)%400;
	for(i=1;i<=m;i++) t=t+year(i);
	for(i=1;i<b;i++) t=t+month(a,i);
	t=t+c;
	w=t%7;
	switch(w)
	{
	case 1:printf("Mon.");break;
	case 2:printf("Tue.");break;
	case 3:printf("Wed.");break;
	case 4:printf("Thu.");break;
	case 5:printf("Fri.");break;
	case 6:printf("Sat.");break;
	case 0:printf("Sun.");break;
	}
	return 0;
}
