int reverse(int n); 
int main()
{
	int i,answer,n;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		answer=reverse(n);
		printf("%d\n",answer);       
	}
	return 0;
}
int reverse(int n)
{
	if(n==0)
		return 0;
	char a[35]={'\0'};
	int i,p=1,l,j;
	if(n<0)
	{	
		p=-1;
	    n=n*p;
	}
	for(i=0;n>0;i++)
	{
		a[i]=n%10+'0';
		n=n/10;
	}
	l=strlen(a);
    while(a[0]=='0')
	{
		for(i=0;i<l;i++)
		{a[i]=a[i+1];
		l=strlen(a);}
	}
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		j=pow(10,i);

        n+=(a[l-1-i]-'0')*j;
	}
	n=n*p;
	return n;
}

