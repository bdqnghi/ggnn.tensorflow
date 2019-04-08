void main()
{
	long int a;
	int b,c,d,e,f;
	scanf("%ld",&a);
	if(a<10)
	printf("%d\n",a);
	else if(a<100&&a>=10)
	{			b=a%10;c=a/10;
	e=b*10+c;
            printf("%d\n",e);
	}
			else if(100<=a&&a<1000)
			{			b=a%10;c=a/100;
			d=a+99*b-99*c;
			printf("%d\n",d);
			}
			else if(a>=1000&&a<10000)
			{	b=a%10;c=a/1000;d=(a-1000*c)/100;e=(a-1000*c-100*d)/10;
			f=1000*b+100*e+10*d+c;
			printf("%d\n",f);
			}
else 
{  b=a%10;c=a/10000;d=(a-10000*c)/1000;e=(a%100-b)/10;
f=a+9999*b-9999*c-990*d+990*e;
printf("%d\n",f);
}
}