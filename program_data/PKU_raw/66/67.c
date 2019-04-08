int main()
{
	long a,b,c,sum;
	int i,j,d,e;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%ld%ld%ld",&a,&b,&c);
	for(i=0;a>400;i++)
	{
	  a=a-400;
	}
    d=(a-1)/4;
    e=(a-1)/100;
	sum=(a-1)*365+d-e;
    for(j=0;j<b;j++)
	{
	   sum=sum+month[j];
	}
	if((a%4==0&&a%100!=0||a%400==0)&&b>2)
		sum++;
	sum=sum+c;
	sum=sum%7;
	switch(sum)
	{
	   case 1:   printf("Mon."); break;
	   case 2:   printf("Tue."); break;
	   case 3:   printf("Wed."); break;
	   case 4:   printf("Thu."); break;
	   case 5:   printf("Fri."); break;
	   case 6:   printf("Sat."); break;
	   case 0:   printf("Sun."); break;	
	}
    return 0;
}