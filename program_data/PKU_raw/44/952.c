int fanxu(int num)
{
	int m,n,l,k,a,t;
	if(fabs(num)>=10000)
	{
		m=num/10000;
		n=num/1000-m*10;
		l=num/100-m*100-n*10;
		k=num/10-m*1000-n*100-l*10;
        t=num%10;
		a=t*10000+k*1000+l*100+n*10+m;
	}
	else if(fabs(num)>=1000)
	{
		m=num/1000;
	    n=num/100%10;
	    l=num/10%10;
	    k=num%10;
	    a=k*1000+l*100+n*10+m;
	}
	else if(fabs(num)>=100)
	{
		m=num/100;
		n=num/10-m*10;
		l=num%10;
		a=l*100+n*10+m;
	}
	else if(fabs(num)>=10)
	{
		m=num/10;
		n=num%10;
		a=n*10+m;
	}
	else
		a=num;
	return(a);
}
void main()
{
	int b[6],i,p;
	for(i=0;i<6;i++)
	{
		scanf("%ld",&b[i]);
		p=fanxu(b[i]);
		printf("%d\n",p);
	}
}