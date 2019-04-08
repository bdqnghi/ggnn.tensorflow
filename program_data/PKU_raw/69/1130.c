int max(int a,int b)
{
    int z;
    if(a>=b)
    z=a;
    else
    z=b;
    return(z);
}
int main()
{
    int max(int a,int b);
    int i,n,x=0;
    char str1[252],str2[252],str3[252],str4[252];char s[252];
    scanf("%s",str3);
    scanf("%s",str4);
    for(i=0;i<strlen(str3);i++)
    str1[strlen(str3)-i-1]=str3[i];
    for(i=strlen(str3);i<251;i++)
    str1[i]='0';
    for(i=0;i<strlen(str4);i++)
    str2[strlen(str4)-i-1]=str4[i];
    for(i=strlen(str4);i<251;i++)
    str2[i]='0';
    for(i=0;i<251;i++)
    s[i]='0';
    for(i=0;i<=max(strlen(str3),strlen(str4));i++)
    {
        s[i]=str1[i]+str2[i]+s[i]-'0'-'0';
        if(s[i]>'9')
        {
            s[i]=s[i]-10;
            s[i+1]='1';
        }
    }
    for(i=max(strlen(str3),strlen(str4))+1;i>=0;i--)
    {
        if(s[i]!='0')
        {
            for(i=i;i>=0;i--)
            printf("%c",s[i]);
            x++;
        }
    }
    if(x==0)
    printf("%d",x);

    return 0;
}