void main()
{
	unsigned long n=0,temp;
	int f,a,b,l,i,j;
	char c[100],r[100];
	scanf("%d %s %d",&a,c,&b);
	l=strlen(c);
	for(i=0;i<l;i++)
	{	f=0;
		temp=c[i]-'0';
		if((temp<=9)&&(temp>=0)) ;
		else if(temp>=49) temp=temp-39;
		else temp=temp-7;
		for(j=0;j<(l-1-i);j++) temp=temp*a;
		n=temp+n;
	}
	i=0;
	f=1;
	while(f!=0)
	{	
		if(n>=b)
		{
		if((n%b)>9) {r[i]=(n%b)+55;}
		else r[i]=(n%b)+48;
		n=n/b;
		i++;
		}
		else 
		{
			if(n>9) {r[i]=n+55;}
			else r[i]=n+48;
			f=0;
		}
	}
	for(;i>=0;i--) printf("%c",r[i]);
	printf("\n");
}