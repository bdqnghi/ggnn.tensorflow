char s[100];
int pd(int);
int main()
{
    int n,i,j,q;    
    scanf("%d\n",&n);
    while(n)
    {   
        q=0;
        gets(s);
        for(i='a';i<='z';i++)
            if(s[0]==i) q=1;
        for(i='A';i<='Z';i++)
            if(s[0]==i) q=1;
        if(s[0]=='_') q=1;
        for(i=1;s[i]!='\0';i++)
             if(pd(i)==0) q=0;
        if(q==1) printf("1\n");
        else printf("0\n");
        n--;
    }
    return 0;
}
int pd(int t)
{
    int i,q;
    q=0;
    for(i=1;s[i]!='\0';i++)
    for(i='a';i<='z';i++)
        if(s[t]==i) q=1;
    for(i='A';i<='Z';i++)
        if(s[t]==i) q=1;
    if(s[t]=='_') q=1;
    for(i='0';i<='9';i++)
        if(s[t]==i) q=1;
    return q;
}
        
        
