int main()
{
    int i,l,n;
    char s[200];
    
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
       char st[200]={'\0'};
       
       gets(s);
       l=strlen(s);
       if((s[l-1]=='r')&&(s[l-2]=='e'))
         strncpy(st,s,l-2);
       else if((s[l-1]=='y')&&(s[l-2]=='l'))
         strncpy(st,s,l-2);
       else if((s[l-1]=='g')&&(s[l-2]=='n')&&(s[l-3]=='i'))\
         strncpy(st,s,l-3);
       puts(st);                
    }
    
    return 0;
}