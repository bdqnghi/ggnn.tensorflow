int main()
{
	int n,f;
	scanf("%d",&n);
	int a=(int)(n/100);
	int b=(int)(n-a*100)/50;
	int c=(int)(n-100*a-50*b)/20;
	int d=(int)(n-100*a-50*b-20*c)/10;
	int e=(int)(n-100*a-50*b-20*c-10*d)/5;
	f=n-100*a-50*b-20*c-10*d-5*e;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}
