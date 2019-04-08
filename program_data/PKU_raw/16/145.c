int main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    if(n==100)
	{printf("001");}
    else if(n>=1&&n<=9)
	{  printf("%d",n);}
	else if(n>=10&&n<=99)
	{  a=n%10;
	   b=n/10;
	   c=a*10+b;
	   d=e=0;
	   printf("%d",c);
	}
	else if(n>100&&n<=999)
	{   a=n%100;
	    b=a%10;
		c=a/10;
		d=n/100;
        e=b*100+c*10+d;
		printf("%d",e);
	}
    else if (n>=1000&&n<=9999)
	{
		a=n%10;
		b=(n%100-a)/10;
		c=n%1000/100;
		d=n/1000;
		e=a*1000+b*100+c*10+d;
		printf("%d",e);
	}
	else 
	{ printf("error");}
	return 0;
}