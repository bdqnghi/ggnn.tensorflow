int main()
{
    char s[10000];
	int a,b,k,d,i,j,c,n;
	k=0;
	scanf("%d %s %d",&a,s,&b);
    for(i=strlen(s)-1;i>=0;i--)
	{
		if(s[i]>='a'&&s[i]<='z')
			d=10+(int)(s[i]-'a');
		if(s[i]>='A'&&s[i]<='Z')
			d=10+(int)(s[i]-'A');
        if(s[i]>='0'&&s[i]<='9')
			d=(int)(s[i]-'0');
		n=strlen(s)-1-i;
		c=1;
	    for(j=0;j<n;j++)
			c*=a;
		k=k+d*c;	
	}
	for(i=0;;i++)
	{
		if(k%b<=9)
		{
		   c=k%b+48;
		   s[i]=(char)(c);
		}
		if(k%b>9)
		{
			c=k%b+55;
			s[i]=(char)(c);
		}
		if(k/b==0)
		{
			break;
		}
        k=k/b;
	}
	d=i;
	for(i=d;i>=0;i--)
		printf("%c",s[i]);
	scanf("%d",1);
	return 0;
}
