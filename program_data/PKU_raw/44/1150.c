void main()
{
	int rev(int a);
	int length(int a);
	int i,a[6],c[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		c[i]=rev(a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%d\n",c[i]);
	}
}
int rev(int a)
{
		int i,l,m,b[15],c=0;
		l=length(a);
		m=pow(10,l-1);
		for(i=0;i<l;i++)
		{
			b[i]=a/m;
			a=a%m;
			m=m/10;
		if(m==0) 
			break;
		}
		for(i=0;i<l;i++)
		{
			c=c+b[i]*pow(10,i);
		}
		return(c/10);
}
int length(int a)
{
		int i,b=1,c;
		c=-1;
		for(i=0;c!=0;i++)
		{
			c=a/b;
			b=b*10;
		}
		return(i);
}