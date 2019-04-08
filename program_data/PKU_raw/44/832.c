int main()
{
	int reverse(int n);
	int i;
	int a[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",reverse(a[i]));
	}
	return 0;
}
int reverse(int n)
{
	
	int a,b,c,d,m,p;
	if(n/10000!=0)
	{
		a=n/10000;
		b=(n-a*10000)/1000;
		c=(n-a*10000-b*1000)/100;
		d=(n-a*10000-b*1000-c*100)/10;
		p=n-a*10000-b*1000-c*100-d*10;
		m=p*10000+d*1000+c*100+b*10+a;
	}
	else if(n/1000!=0)
	{
		a=n/1000;
		b=(n-a*1000)/100;
		c=(n-a*1000-b*100)/10;
		d=n-a*1000-b*100-c*10;
		m=d*1000+c*100+b*10+a;
	}
	else if(n/100!=0)
	{
		a=n/100;
		b=(n-a*100)/10;
		c=n-a*100-b*10;
		m=c*100+b*10+a;
	}
	else if(n/10!=0)
	{
		a=n/10;
		b=n-a*10;
		m=b*10+a;
	}
	else
		m=n;
	return (m);
}