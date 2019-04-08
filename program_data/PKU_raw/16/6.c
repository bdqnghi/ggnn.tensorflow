int main()
{
	int n;
	scanf("%d",&n);
	if(n<10)
	{
		printf("%d",n);
	}
	else if((10<n)&&(n<100))
	{
		int i,j,k;
	    i=n/10;
	    j=n%10;
	    k=10*j+i;
	    printf("%d",k);
	}
	else if((100<n)&&(n<1000))
	{
		int a,b,c,d,e;
		a=n/100;
		b=n%100;
		c=b/10;
		d=b%10;
		e=100*d+10*c+a;
		printf("%d",e);
	}
	else if((1000<n)&&(n<10000))
	{
		int f,l,m,w,o,p,q;
		f=n/1000;
		l=n%1000;
		m=l/100;
		w=l%100;
		o=w/10;
		p=w%10;
		q=1000*p+100*o+10*m+f;
		printf("%d",q);
	}
	else if(n==10)
	{
		printf("01");
	}
		else if(n==100)
	{
		printf("001");
	}
		else if(n==1000)
	{
		printf("0001");
	}
	return 0;
}

