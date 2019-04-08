int main()
{
	int n,a,b,c,d,e,f,m;
	scanf("%d",&n);
	int i;
	i=n/100;
	printf("%d\n",i);
	a=n-i*100;
	m=a/50;
	
		printf("%d\n",m);
		b=(a-50*m)/20;
		printf("%d\n",b);
		c=(a-50*m-b*20)/10;
		printf("%d\n",c);
		d=a-a/10*10;
		e=d/5;
		printf("%d\n",e);
		f=d-5*e;
		printf("%d\n",f);
	


	return 0;


}