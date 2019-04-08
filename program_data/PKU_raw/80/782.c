int  NO[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int  SP[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int boolean(int year)
{
	if  ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 1 ;
	   else return 0;
}
void main()
{
	long i,sum,y1,m1,d1,y2,m2,d2;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	sum=0;
	for (i=1;i<=m1-1;i++)
		if (boolean(y1)==1)
	      sum=sum-NO[i];
		else sum=sum-SP[i];
	sum=sum-d1;
	for (i=1;i<=m2-1;i++)
	  if (boolean(y2)==1)
	      sum=sum+NO[i];
		else sum=sum+SP[i];
	sum=sum+d2;
	for (i=y1;i<=y2-1;i++)
		if (boolean(i)==1) sum=sum+366;
		else sum=sum+365;
	printf("%ld\n",sum);
}