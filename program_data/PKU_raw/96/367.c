main()
{
    char a[101]={0},b[101]={0};
    b[0]='0';                                                     //give b a initial '0' in case of quotient=0
    int i=0,j=0,court=0,c=0,d=0,e=0,f=0,g=0;
    gets(a);
    court=strlen(a);
    for(i=0;i<=court-1;i++)
    {
        c=10*d+(a[i]-'0');
        b[i]=c/13+'0';
        d=c%13;
    }
    while(b[0]=='0'&&b[1]!='\0')                                   //in case of quotient=0
    {
        for(j=0;j<=court;j++)
        {
            b[j]=b[j+1];
        }
    }
    printf("%s\n",b);
    printf("%d\n",d);


}
