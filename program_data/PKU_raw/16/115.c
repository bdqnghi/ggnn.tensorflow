
int main()
{
	int n,a,b,c,d,e,y;
	scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if(a!=0) {printf("%d",e);
	          printf("%d",d);
			  printf("%d",c);
			  printf("%d",b);
			  printf("%d",a);}
		else if(b!=0) {printf("%d",e);
	          printf("%d",d);
			  printf("%d",c);
			  printf("%d",b);}
		else if(c!=0) {printf("%d",e);
	          printf("%d",d);
			  printf("%d",c);}
		else if(d!=0) {printf("%d",e);
	          printf("%d",d);}
		else {printf("%d",e);}
	return 0;
}
