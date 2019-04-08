int main(int argc, char* argv[])
{
	int a,b,c,d,e,n,f;
	scanf("%d",&n);
	a=n/10000;
	b=n/1000-(10*a);
	c=n/100-100*a-10*b;
	d=n/10-a*1000-b*100-c*10;
	e=n-10000*a-1000*b-100*c-10*d;
	if(n>100&&n<1000)
	{
		f=100*e+10*d+c;
		printf("%d\n",f);
	}
       else if(n>1000&&n<10000)
	{
		f=1000*e+100*d+10*c+b;
		printf("%d\n",f);
	}
	   else
	   {
        f=10000*e+1000*d+100*c+10*b+a;
		printf("%d\n",f);
	   }

	return 0;
}