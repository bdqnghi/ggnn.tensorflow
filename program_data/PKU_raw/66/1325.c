int main()
{
	int year,month,day,y,d,num4,num100,x;
	int a[13]={0,0,31,59,90,120,151,181,212,243,273,304,334};
	int b[13]={0,0,31,60,91,121,152,182,213,244,274,305,335};
	scanf("%d%d%d",&year,&month,&day);
	y=year%400;
	if(y==0) y=400;
	num4=(y-1)/4;
	num100=(y-1)/100;
	if(num100==4) num100=3;
	d=(y-1)*365+num4-num100;
	if(y%4!=0)	d=d+a[month]+day;
	if(y%4==0)  d=d+b[month]+day;
	x=d%7;
	if(x==0) printf("Sun.\n");
	if(x==1) printf("Mon.\n");
	if(x==2) printf("Tue.\n");
	if(x==3) printf("Wed.\n");
	if(x==4) printf("Thu.\n");
	if(x==5) printf("Fri.\n");
	if(x==6) printf("Sat.\n");
	return 0;
}


