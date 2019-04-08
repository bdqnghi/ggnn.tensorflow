int main()
{
	int a,b,g,s,h,q,w;
	scanf("%d",&a);
	if(a<10)
	{
		printf("%d",a);
	}
 if(a<=10&&a<100)
 {
		g=a/10;
	    s=a%10;
		b=10*s+g;
		printf("%d",b);
 }
	 if(a>=100&&a<1000)
	 {
		g=a/100;
	    a=a-100*g;
		s=a/10;
        h=a%10;
		b=100*h+10*s+g;
		printf("%d",b);
	 }
	 if(a>=1000&&a<10000)
	 {
		g=a/1000;
	    a=a-1000*g;
		s=a/100;
		a=a-100*s;
		h=a/10;
		q=a%10;
		b=1000*q+100*h+10*s+g;
		printf("%d",b);
	 }
	 if(a>=10000&&a<100000)
	 {
        g=a/10000;
	    a=a-10000*g;
		s=a/1000;
		a=a-1000*s;
		h=a/100;
		a=a-100*h;
		q=a/10;
		w=a%10;
		b=10000*w+1000*q+100*h+10*s+g;
		printf("%d",b);
	 }
return 0;
}



