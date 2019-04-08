void main()
{
	int n,a,b,c,d,e,q;
	scanf("%d",&n);
	a=n/10000;
	if(a!=0) b=(n-a*10000)/1000;
	else b=n/1000;
	if(b!=0) c=(n-a*10000-b*1000)/100;
	else c=n/100;
	if(c!=0) d=(n-a*10000-b*1000-c*100)/10;
	else d=n/10;
	if(d!=0) e=n-a*10000-b*1000-c*100-d*10;
	else e=n;
	if(n>10000) q=e*10000+d*1000+c*100+b*10+a;
	else if(n>1000&n<10000) q=e*1000+d*100+c*10+b;
	else if(n>100&n<1000) q=e*100+d*10+c;
	else if(n>10&n<100) q=e*10+d;
	else q=e;
	printf("%d",q);
}