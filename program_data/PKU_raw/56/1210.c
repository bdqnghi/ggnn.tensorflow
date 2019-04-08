int main()
{
	int a,i,b,c,d,e,n,f;
	scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	e=n%10;
	d=(n%100-e)/10;
	f=e*10000+d*1000+100*c+10*b+a;
	for(i=0;i<=4;i++){
		if(f%10==0)
			f=f/10;
		}
	    printf("%d",f);
	
	return 0;
}
 