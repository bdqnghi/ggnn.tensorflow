int y(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                   return 366;
	else
		 return 365;
}
int m(int y,int m)
{
	int d;
	switch(m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		d=31;
		break;
	case 4:case 6:case 9:case 11:
		d=30;
                  break;
	case 2:
		if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			d=29;
		else 
			d=28;
		break;
	}
	return d;
}

int main()
{
	int y1,m1,d1;
	int y2,m2,d2;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
         int d=0;
         int p1=0;
         int p2=0;
	int i;
	
	for(i=m1;i<=12;i++)
		p1=p1+m(y1,i);
	p1-=d1;

	for(i=1;i<=m2;i++)
		p2=p2+m(y2,i);
	p2=p2-m(y2,m2)+d2;

	if(y2-y1>1)
	{
           	for(i=y1+1;i<y2;i++)
			d=d+y(i);
                  d=d+p1+p2;

	         printf("%d",d);
         }
         if(y2-y1==1)
         {
                  d=p1+p2;
                  printf("%d",d);
         }
         if(y2==y1)
         {
               d=p1+p2-y(y1); 
               printf("%d",d);
         }
	return 0;
}
