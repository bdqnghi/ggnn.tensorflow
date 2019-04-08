int y(int x);
main()
{
    char a[80],b[80];char m;
    gets(a);
    gets(b);
    int i,na,nb;
    for(i=0;a[i]!='\0';i++)
    {}
    na=i;
    for(i=0;b[i]!='\0';i++)
    {}
    nb=i;
    for(i=0;i<na;i++)
    {
                     if(a[i]>='A'&&a[i]<='Z')
                     a[i]+=32;
                     }
    for(i=0;i<nb;i++)
    {
                     if(b[i]>='A'&&b[i]<='Z')
                     b[i]+=32;
                     }
    if(strcmp(a,b)>0)
    m='>';
   else if(strcmp(a,b)<0)
    m='<';
    else
    m='=';
    
    printf("%c",m);
   
}
