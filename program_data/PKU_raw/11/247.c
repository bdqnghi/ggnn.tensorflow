int main()
{
	long a,b,c;
         int i=1;
         loop:if(i<=5)
       {
         int n=0;
	scanf("%ld %ld %ld",&a,&b,&c);
	switch(b)
	{
	case 12:n=n+30;
	case 11:n=n+31;
	case 10:n=n+30;
	case 9:n=n+31;
	case 8:n=n+31;
	case 7:n=n+30;
	case 6:n=n+31;
	case 5:n=n+30;
	case 4:n=n+31;
	case 3:n=n+28;
	case 2:n=n+31;
	case 1:n=n+c;break;
	}
	if(((a%4==0&&a%100!=0)||a%400==0)&&b>=3)
		n=n+1;
	printf("%d\n",n);
         i++;
         goto loop;
       }
		return 0;
}