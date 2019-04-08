int main()
{
    char s1[81],s2[81];
    gets(s1);gets(s2);
    int t=0,l1,l2,i;
    l1=strlen(s1);l2=strlen(s2);
    for(i=0;i<l1;i++)
        if(s1[i]>='A'&&s1[i]<='Z') s1[i]=s1[i]-'A'+'a';
    for(i=0;i<l2;i++)
        if(s2[i]>='A'&&s2[i]<='Z') s2[i]=s2[i]-'A'+'a';
    if(l1>l2) l1=l2;
    while(t<l1&&s1[t]==s2[t]) t++;
    if(s1[t]>s2[t]) printf(">");
        else if(s1[t]<s2[t]) printf("<");
            else printf("=");
}