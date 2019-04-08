main()
{
	long int n0[31], t, m0[31],  s[31]={0};
	//sum????10?????? t???????10????????????sum; s??????????m????
	
	int sum=0, a, b, l, i, j;
	char n[31]={'\0'}, m[31]={'\0'};
	scanf("%d %s %d", &a, n, &b);
	
	for(i=0; n[i]!='\0'; i++)
	{
		if(n[i]>=65&&n[i]<=90)
			n0[i]=n[i]-55;
		else if(n[i]>=97&&n[i]<=122)//????else if??? 
			n0[i]=n[i]-87;
		else
			n0[i]=n[i]-48;
	}
	
	l=strlen(n);
	for(i=0; i<l; i++)
	{
		t=(int)(n0[i]*pow(a, l-i-1));
		sum=sum+t;
	}
	
	
	i=0;
	do
	{
		s[i]=sum%b;
		sum=(sum-s[i])/b;
		i++;
	}while(sum!=0);
	
	for(j=0; j<i; j++)
	{
		m0[j]=s[i-1-j];
		if(m0[j]>=10)
			m[j]=m0[j]+55;
		else
			m[j]=m0[j]+48;
	}
	puts(m);
	return 0;
}
