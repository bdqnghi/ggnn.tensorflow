int main()
{
    char str[100000];
    long int k,t,n,m,a,i,j;
    scanf("%d%s%d",&k,str,&t);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]>96)
        str[i]=str[i]-32;
    }
    m=0;
    for(i=0;i<n;i++)
    {
        a=1;
        for(j=1;j<n-i;j++)
        {
            a=a*k;
        }
        if(str[i]>=65)
        m=m+(str[i]-55)*a;
        else
        m=m+(str[i]-48)*a;
    }
    if(m==0)
    printf("0");
    else
    {i=0;
    while(m>0)
    {
        j=m%t;
        if(j<10)
        str[i]=j+48;
        else str[i]=j+55;
        i=i+1;
        m=(m-j)/t;
    }
    for(j=i-1;j>=0;j--)
    printf("%c",str[j]);}
    return 0;
}
