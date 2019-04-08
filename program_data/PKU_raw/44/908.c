void main()
{
	int reverse(int);
	int i,n,m;
	for(i=0;i<=5;i++)
	{
		scanf("%d",&n);
		m=reverse(n);
		printf("%d\n",m);
	}
}
int reverse(int x)
{
	int a,b,c,d,e,k;
	a=x%10;
	b=(x-a)/10%10;
	c=(x-a-10*b)/100%10;
	d=(x-a-10*b-c*100)/1000%10;
	e=(x-a-10*b-100*c-1000*d)/10000%10;
	k=10000*a+1000*b+100*c+10*d+e;
    if(k%10000==0) return(k/10000);
	else if(k%1000==0) return(k/1000);
	else if(k%100==0) return(k/100);
	else if(k%10==0) return(k/10);
	else return(k);
}