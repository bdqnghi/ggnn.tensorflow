
int main()
{
    int zhuan(char);
    int a,b,l,i,wei;
    char n[100];
    long shi;
    scanf("%d%s%d",&a,n,&b);
    l=strlen(n);
    for(i=0,shi=0;i<=l-1;i++)
    {
                       if(i<l-1)
                      shi=(shi+zhuan(n[i]))*a;
                       else
                       shi=shi+zhuan(n[i]);
    }
    
    for(i=0;;shi=shi/b,i++)
    {
                       wei=shi%b;
                       if(wei>=10)
                       n[i]=wei-10+'A';
                       else
                       n[i]=wei+'0';
                       
                       if(shi<b)
                       break;
    }
    for(i=i;i>=0;i--)
    printf("%c",n[i]);
                       
    
    return 0;
}
int zhuan(char b)
{
    int a;
    if(b>='0'&&b<='9')
    a=b-48;
    if(b>='a'&&b<='z')
    a=10+b-'a';
    if(b>='A'&&b<='Z')
    a=10+b-'A';
    return a;
}
