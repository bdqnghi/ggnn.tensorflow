void main()
{
	int i,j,k,a,b;
	long n=0;
	char s[30]={'\0'},c;
	scanf("%d%s%d",&a,s,&b);
	k=strlen(s);
	for(i=0;i<k;i++)
	{
		if((j=islower(s[i]))!=0) s[i]=s[i]-'a'+10;
		else if((j=isupper(s[i]))!=0) s[i]=s[i]-'A'+10;
		else s[i]=s[i]-'0';
		n=n+s[i]*(int)(pow(a,k-i-1));
	}
	if(n==0) putchar('0'); 
	else 
	{	
		for(i=0;i<30;i++) s[i]='\0';
		for(i=0;n!=0;i++)
		{
			j=n%b;
			if(j<10) s[i]=j+48;
			else s[i]=j-10+'A';
			n=n/b;
		}
		k=strlen(s);
		for(i=0;i<=k/2-1;i++) { c=s[i]; s[i]=s[k-i-1]; s[k-i-1]=c; }
		puts(s);
	}
}
