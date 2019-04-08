int main()
{
	int n,a,b,c,d,e,f;
	
	scanf("%d",&n);
	a=n/100;
	printf("%d\n",a);
	n=n%100;
	b=n/50;
    printf("%d\n",b);
	n=n%50;
    c=n/20;
    printf("%d\n",c);
	n=n%20;
	d=n/10;
    printf("%d\n",d);
	n=n%10;
	e=n/5;
    printf("%d\n",e);
	n=n%5;
	f=n/1;
    printf("%d\n",f);
	n=n%1;
	return 0;
}

  