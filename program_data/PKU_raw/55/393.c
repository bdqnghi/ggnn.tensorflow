main()
{
    long a,b,c,i,m,j;
    char n[33];
    scanf("%ld %s %ld",&a,n,&b);
    c=strlen(n);
    for(i=0,m=0;i<c;i++)
    {
        if(n[i]>='0'&&n[i]<='9')
            m=m*a+(n[i]-'0');
        else if(n[i]>='a'&&n[i]<='z')
            m=m*a+(n[i]+10-'a');
        else if(n[i]>='A'&&n[i]<='Z')
            m=m*a+(n[i]+10-'A');
    }
    for(i=0,n[0]=0;m>=0;i++)
    {
        for(j=i;j>=0;j--)
            n[j+1]=n[j];
        if(m%b<=9)
            n[0]=m%b+'0';
        else
            n[0]=m%b+'A'-10;
        m=m/b;
		if(m==0)
			break;
    }
    printf("%s",n);
}