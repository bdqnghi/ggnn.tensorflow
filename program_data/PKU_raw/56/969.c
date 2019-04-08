int main ()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
	scanf("%d",&a);
	if(a/10==0)
	{
		printf("%d",a);
	}
	else if(a/100==0)
	{
		b=a/10;
		c=a-10*b;
		d=b+c*10;
		printf("%d",d);
	}
	else if(a/1000==0)
	{
		e=a/100;
		f=(a-100*e)/10;
		g=a-100*e-10*f;
		h=g*100+f*10+e;
		printf("%d",h);
	}
	else if(a/10000==0)
	{
		i=a/1000;
		j=(a-1000*i)/100;
		k=(a-1000*i-100*j)/10;
		l=a-1000*i-100*j-10*k;
		m=l*1000+k*100+j*10+i;
		printf("%d",m);
	}
	else
	{
		n=a/10000;
		o=(a-10000*n)/1000;
		p=(a-10000*n-1000*o)/100;
		q=(a-10000*n-1000*o-100*p)/10;
		r=a-10000*n-1000*o-100*p-10*q;
		s=10000*r+1000*q+100*p+10*o+n;
		printf("%d",s);
	}
	return 0;
}