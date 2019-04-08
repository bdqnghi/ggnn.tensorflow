int reverse(int num)
{
	int a,b,c,d,b1,b2,b3,b4,b5,t;
	if(num==-32768) a=num;
	t=abs(num);
	if(t<10) a=num;
	else if(t>=10&&t<=99)
	{
		b1=t%10;
		b2=(t-b1)/10;
		a=b1*10+b2;
	}
    else if(t>=100&&t<=999)
	{
		b1=t%10;
		c=t%100;
		b3=(t-c)/100;
		b2=(t-100*b3-b1)/10;
		a=b1*100+b2*10+b3;
	}
    else if(t>=1000&&t<=9999)
	{
		b1=t%10;
		c=t%100;
		b=t%1000;
		b4=(t-b)/1000;
		b3=(b-c)/100;
		b2=(c-b1)/10;
		a=b1*1000+b2*100+b3*10+b4;
	}
	    else
	{
		b1=t%10;
		c=t%100;
		b=t%1000;
		d=t%10000;
		b5=(t-d)/10000;
		b4=(d-b)/1000;
		b3=(b-c)/100;
		b2=(c-b1)/10;
		a=b1*10000+b2*1000+b3*100+b4*10+b5;
	}
		return(a);
}


void main()
{
	int a[6],i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		if(a[i]<0) printf("%d\n",-reverse(a[i]));
		if(a[i]>=0) printf("%d\n",reverse(a[i]));
	}
}

