int main()
{
    char a[250],b[250],sum[250];
    int k,l,m,i,flag=0;
    for(i=0;i<250;i++)
        a[i]=b[i]=sum[i]='0';
    scanf("%s %s",a,b);
    k=strlen(a);
    l=strlen(b);
    m=l>k? l:k;
    for(i=1;i<=m;i++)
    {
        sum[m-i]=a[k-i]-'1'+1+b[l-i]-'1'+1+flag;
        flag=0;
        if(sum[m-i]>9)
        {
            sum[m-i]-=10;
            flag=1;
        }
        sum[m-i]+='1'-1;
    }
    if(flag==1) printf("1");
    sum[m]='\0';
    if(flag!=1)
    {
    for(;sum[0]=='0';)
        for(i=0;i<m;i++) sum[i]=sum[i+1];
    if(sum[0]=='\0') sum[0]='0';
    }
    printf("%s",sum);
        return 0;
}
