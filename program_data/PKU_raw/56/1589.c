void main()
{
	int n,a1,a2,a3,a4,a5,m;
	scanf("%d",&n);
	a1=n/10000;
	a2=(n-10000*a1)/1000;
	a3=(n-10000*a1-1000*a2)/100;
	a4=(n-10000*a1-1000*a2-100*a3)/10;
	a5=n%10;
	if(a1!=0)
		m=10000*a5+1000*a4+100*a3+10*a2+a1;
	else if(a2!=0)
		m=1000*a5+100*a4+10*a3+a2;
	else if(a3!=0)
		m=100*a5+10*a4+a3;
	else if(a4!=0)
		m=10*a5+a4;
	else
		m=a5;
	printf("%d",m);
}
