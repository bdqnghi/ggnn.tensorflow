void main()
{
	int year1,year2,month1,month2,day1,day2,s1=0,s2=0,s3=0;
	scanf("%d %d %d\n",&year1,&month1,&day1);
	scanf("%d %d %d",&year2,&month2,&day2);
	int num(int year,int month,int day);
	int laf(int a,int b);
	s1=num(year1,month1,day1);
	s2=num(year2,month2,day2);
	s3=laf(year1,year2);
	printf("%d\n",s3+s2-s1);
}
int num(int year,int month,int day)
{
	int z;
	int sum1(int a,int b);
	int sum2(int a,int b);
	if((year%400==0)||((year%100!=0)&&(year%4==0)))
	   z=sum1(month,day);
    else z=sum2(month,day);
    return(z);
}
int sum1(int a,int b)
{
	int z=0;
	switch(a)
	{
		case 1:z=b;break;
		case 2:z=31+b;break;
		case 3:z=60+b;break;
		case 4:z=91+b;break;
		case 5:z=121+b;break;
		case 6:z=152+b;break;
		case 7:z=182+b;break;
		case 8:z=213+b;break;
		case 9:z=244+b;break;
		case 10:z=274+b;break;
		case 11:z=305+b;break;
		case 12:z=335+b;
	}
	return(z);
}
int sum2(int a,int b)
{
	int z=0;
	switch(a)
	{
		case 1:z=b;break;
		case 2:z=31+b;break;
		case 3:z=59+b;break;
		case 4:z=90+b;break;
		case 5:z=120+b;break;
		case 6:z=151+b;break;
		case 7:z=181+b;break;
		case 8:z=212+b;break;
		case 9:z=243+b;break;
		case 10:z=273+b;break;
		case 11:z=304+b;break;
		case 12:z=334+b;
	}
	return(z);
}
int laf(int a,int b)
{
	int z=0,i;
	for(i=a;i<b;i++)
      {if((i%400==0)||((i%100!=0)&&(i%4==0)))
         z=z+366;
      else z=z+365;}
    return(z);
}