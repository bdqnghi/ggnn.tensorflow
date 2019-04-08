int xinqi(int z,int x,int w)
{
    int D,C;
	D=365*(z-1)+w-1;
    if(x==2) D=D+0;
	if(x==2) D=D+31;
	if(x==3) D=D+59;
	if(x==4) D=D+90;
	if(x==5) D=D+120;
	if(x==6) D=D+151;
	if(x==7) D=D+181;
	if(x==8) D=D+212;
	if(x==9) D=D+243;
	if(x==10) D=D+273;
	if(x==11) D=D+304;
	if(x==12) D=D+334;
    if(x>2)
	D=D+z/4-z/100+z/400;
	else D=D+(z-1)/4-(z-1)/100+(z-1)/400;
	C=D%7;
	return C;
}
void main()
{
   int year,mon,day,days;
   scanf("%d%d%d",&year,&mon,&day);
   year=year%200000;
   
   days=xinqi(year,mon,day);
   if(days==0) printf("Mon.");
   if(days==1) printf("Tue.");
   if(days==2) printf("Wed.");
   if(days==3) printf("Thu.");
   if(days==4) printf("Fri.");
   if(days==5) printf("Sat.");
   if(days==6) printf("Sun.");
   }
