void main()
{
	int m,a,b,c,d,e,k;
	scanf("%d",&m);
	a=m/10000;
	b=(m-10000*a)/1000;
	c=(m-10000*a-1000*b)/100;
	d=(m-10000*a-1000*b-100*c)/10;
	e=m%10;
	if(a!=0)
		k=10000*e+1000*d+100*c+10*b+a;
	else
		if(a==0&&b!=0)
			k=1000*e+100*d+10*c+b;
		else
			if(a==0&&b==0&&c!=0)
				k=100*e+10*d+c;
			else
				if(a==0&&b==0&&c==0&&d!=0)
					k=10*e+d;
				else
					k=e;
				printf("%d\n",k);
}
