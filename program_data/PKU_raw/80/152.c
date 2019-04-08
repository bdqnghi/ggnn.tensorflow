int year(int y)
{
	int a;
	if((y%4==0&&y%100!=0)||(y%400==0)) a=366;
	else a=365;
	return(a);
}
int month(int m)
{
	int d;
	switch(m)
	{
	case 1:d=31;break;
    case 2:d=28;break;
    case 3:d=31;break;
    case 4:d=30;break;
    case 5:d=31;break;
    case 6:d=30;break;
    case 7:d=31;break;
    case 8:d=31;break;
    case 9:d=30;break;
    case 10:d=31;break;
    case 11:d=30;break;
    case 12:d=31;break;
	}
	return(d);
}
void main()
{
	int y1,y2,m1,m2,d1,d2,i,ds=0;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	for(i=y1;i<y2;i++) ds=ds+year(i);
	for(i=1;i<m1;i++) ds=ds-month(i);
	for(i=1;i<m2;i++) ds=ds+month(i);
	ds=ds+d2-d1;
	if(y1==y2&&year(y1)==366)
	{
		if(m2>2&&m1<3) ds=ds+1;
	}
	if(y1!=y2)
	{
		if(year(y1)==366&&m1>2) ds=ds-1;
	    if(year(y2)==366&&m2>2) ds=ds+1;
	}
	printf("%d\n",ds);
}