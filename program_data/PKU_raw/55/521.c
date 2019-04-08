void main()
{
	int a,b,i,p,len;
	long int w=0;
	char s[1000],s1[1000];
	int zs[1000],zs1[1000];
	scanf("%d %s %d",&a,s,&b);
    len=strlen(s);
    
	for(i=0;i<len;i++)
	{
		if(s[i]>=48&&s[i]<=57)
		zs[i]=s[i]-48;
	else if(s[i]<=90&&s[i]>=65)
		zs[i]=s[i]-55;
	else if(s[i]<=122&&s[i]>=97)
		zs[i]=s[i]-87;
        w=w*a+zs[i];
	}
	for(i=0;i<1000;i++)
	{
		p=i;
		zs1[i]=w%b;
	    w=w/b;
		if(w==0)
			break;

	}

	  
	for(i=0;i<=p;i++)
	{
		if(zs1[i]>=0&&zs1[i]<=9)
			s1[i]=zs1[i]+48;
		else if(zs1[i]>=10)
			s1[i]=zs1[i]+55;
		else break;
		
	}
	
	for(i=p;i>=0;i--)
		printf("%c",s1[i]);
}


	

    




