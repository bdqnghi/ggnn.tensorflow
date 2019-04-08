void main()
{
	int reverse(int num);
	int a[5],i;
    for(i=0;i<=5;i++)
		scanf("%d",&a[i]);
    for(i=0;i<=5;i++)
	printf("%d\n",reverse(a[i]));
}

int reverse(int num)
{
	int z,a,b,c,d,e;
	a=num/10000;
	b=(num-10000*a)/1000;
	c=(num-10000*a-1000*b)/100;
	d=(num-10000*a-1000*b-100*c)/10;
	e=num-10000*a-1000*b-100*c-10*d;
	if(a!=0)
	z=10000*e+1000*d+100*c+10*b+a;
	if(a==0&&b!=0)
		z=1000*e+100*d+10*c+b;
	if(a==0&&b==0&&c!=0)
		z=100*e+10*d+c;
	if(a==0&&b==0&&c==0&&d!=0)
		z=10*e+d;
	if(a==0&&b==0&&c==0&&d==0)
		z=e;
	return(z);
}