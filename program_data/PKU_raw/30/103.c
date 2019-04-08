int main()
{ 
	int n,a,b,c,d,sum=0;
	scanf("%d",&d);
	for (n=1;n<=d;n++)
	{
		a=(int)n/100;
		b=(int)(n-a*100)/10;
		c=n-100*a-10*b;
		if(n%7!=0&&a!=7&&b!=7&&c!=7)
			sum=sum+n*n;}
			printf("%d\n",sum);
	
return 0;
}