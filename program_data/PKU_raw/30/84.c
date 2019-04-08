void main()
{
	int n,a,b,c,d,t1=0,t2=0,t;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(a<10&&a!=7)
		{
			c=a*a;
			t1=t1+c;
		}
		else if(a>9)
		{
			b=a/10;
			if((a%7!=0)&&(b!=7)&&(a-b*10!=7))
			{
				d=a*a;
				t2=t2+d;
			}
		}
	}
	t=t1+t2;
	printf("%d",t);
}
