int main()
{
    char s1[81],s2[81];
    int i,j,k,l,m,n;
    gets(s1);
    gets(s2);
    j=strlen(s2);
    for (i=0;i<=j-1;i++)
        if ((s2[i]>='a')&&(s2[i]<='z')) s2[i]=s2[i]+'A'-'a';
    j=strlen(s1);
    for (i=0;i<=j-1;i++)
        if ((s1[i]>='a')&&(s1[i]<='z')) s1[i]=s1[i]+'A'-'a'; 
    m=0;
    m=strcmp(s1,s2); 
    if (m==0) puts("=");
    if (m>0) puts(">");
    if (m<0) puts("<");
    return 0;
}   
