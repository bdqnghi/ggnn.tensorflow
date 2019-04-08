main()
{
	long int a,b,i=0,x=0,k;  char c[20], n[20];
	scanf("%d", &a);
	scanf("%s", &c);
	scanf("%d", &b);
    while(c[i]!='\0')
	{
		if(c[i]>=65&&c[i]<=90) c[i]=c[i]-55;
		else if(c[i]>=97&&c[i]<=122) c[i]=c[i]-87;
		else c[i]=c[i]-48;
		i++;
	}
	for(k=0;k<=i-1;k++)
	{
		x=a*x+c[k];
	}
	i=0;
	if(x==0) printf("0");
	while(x!=0)
	{
		n[i]=x%b;
		x=x/b;
		if(n[i]>=10)
			n[i]=n[i]+55;
		else n[i]=n[i]+48;
		i++;
	}
	n[i]='\0';
	for(i=0;;i++)
		if(n[i]=='\0') break;
	for(k=i-1;k>=0;k--)
		printf("%c",n[k]);
	printf("\n");
}
