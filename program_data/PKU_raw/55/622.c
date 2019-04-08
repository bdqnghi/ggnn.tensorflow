void fun(char[][10],int*,int*,int);
void main()
{
	long i,l,a,b,t=0,r;
	char n[20],m[20]={'\0'};
	scanf("%ld %s %ld",&a,n,&b);
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		if(n[i]>='0'&&n[i]<='9')
			t+=(n[i]-'0')*pow(a,l-i-1);
		else if(n[i]>='a'&&n[i]<='z')
			t+=(n[i]-'a'+10)*pow(a,l-i-1);
		else 
			t+=(n[i]-'A'+10)*pow(a,l-i-1);
	}
	if(t==0)
		printf("0");
	else
	{
    	for(i=0;t>0;i++)
		{
    		r=t%b;
    		if(r<10)
	    		m[i]='0'+r;
	    	else
		    	m[i]='A'+(r-10);
	    	t/=b;
		}
		for(i=i-1;i>=0;i--)
			printf("%c",*(m+i));
	}
}
