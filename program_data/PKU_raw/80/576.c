int main()
{
	int f1(int,int,int);
	int f2(int,int);
	int y1,y2,m1,m2,d1,d2,s;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	s=f1(y2,m2,d2)-f1(y1,m1,d1)+f2(y1,y2);
	printf("%d",s);
}
int f1(int y,int m,int d)
{
	int a,b,f;
	a=(y%4==0&&y%100!=0)||(y%400==0);
	b=(m>2);
	if(m==1) f=d-1;
	if(m==2) f=d+30;
	if(m==3) f=d+58;
	if(m==4) f=d+89;	
	if(m==5) f=d+119;
	if(m==6) f=d+150;
	if(m==7) f=d+180;
	if(m==8) f=d+211;
	if(m==9) f=d+242;
	if(m==10) f=d+272;
	if(m==11) f=d+303;
	if(m==12)f=d+333;
	f=f+a*b;
    return f;
}
int f2(int year1,int year2)
{
	int f=0,i;
	for(i=year1;i<year2;i++)
		f+=(i%4==0&&i%100!=0)||(i%400==0);
	f+=365*(year2-year1);
	return f;
}





