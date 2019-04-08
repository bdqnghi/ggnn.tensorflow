void main()
{
	int i,n,a,b,c;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	if(a<b){a=a+b;b=a-b;a=a-b;}
	else{a=a;b=b;}
    for(i=3;i<=n;i++)
	{
		scanf("%d",&c);
		if(c>a){b=a;a=c;}
		else if(c>b){a=a;b=c;}
		else{a=a;b=b;}
		
	}
	printf("%d\n",a);
	printf("%d",b);
}
