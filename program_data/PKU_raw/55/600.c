int main()
{
	long a,b,n,i,p[100];
	long sum=0;
	char u[100];
	scanf("%ld%s%ld",&a,u,&b);
	n=strlen(u);
	if(u[0]=='0')
		printf("0\n");
	else{
	for(i=0;i<n;i++)
	{
		if(u[i]>='0'&&u[i]<='9')
			sum=sum+(u[i]-48)*pow(a,n-i-1);
		if(u[i]>='a'&&u[i]<='z')
			sum=sum+(u[i]-87)*pow(a,n-i-1);
		if(u[i]>='A'&&u[i]<='Z')
			sum=sum+(u[i]-55)*pow(a,n-i-1);
	}
	long t;
	t=sum;
	i=0;
	n=0;
	while(t!=0)
	{
		p[i]=t%b;
		t=t/b;
		i++;
		n++;
	}
	for(i=n-1;i>=0;i--)
	{
        if(p[i]<=9)
			printf("%ld",p[i]);
		if(p[i]>=10)
			printf("%c",p[i]+55);
	}
	}
	return 0;
}