int main()
{
	
	int l,m,n,o,i=0;
	for(i;i<=500;i++)
	{
		int a,b,c,d,e,f;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(1<=a&&a<=11&&1<=d&&d<=11&&0<=b&&b<=59&&0<=c&&c<=59&&0<=e&&e<=59&&f>=0&&f<=59)
		{
			l=3600*a+60*b+c;
			m=3600*(d+12)+60*e+f;
			n=m-l;
			printf("%d\n",n);	
		}
		else
			return 0;
	}
}
