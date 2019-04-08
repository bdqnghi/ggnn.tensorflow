int main()
{
	int n=100;
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(b>a){
		int p;
		p=b;
		b=a;
		a=p;
	}
	for(i=3;i<n;i++)
	{
		int c,m,k;
		scanf("%d",&c);
		if(c>b&&c<a)
		{
			m=a;
			k=c;
			a=m;
			b=k;
		}
		else if(c>a)
		{
			m=c;
			k=a;
			a=m;
			b=k;
		}
	}
	printf("%d\n%d\n",a,b);
	return 0;
}

