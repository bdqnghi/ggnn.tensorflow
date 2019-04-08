int main()
{
    int m[30000],n[300],i,k,s[3000],j;
    i=0;
    do
    {
        i++;
        scanf("%d %d",&n[i],&m[i]);
        
    }
    while(n[i]!=0&&m[i]!=0);
    for(k=1;k<i;k++)   s[k]=0;
    for(k=1;k<i;k++)
    {
        for(j=2;j<=n[k];j++)  s[k]=(s[k]+m[k])%j;
        
    }
    for(k=1;k<i;k++)  printf("%d\n",s[k]+1);
    return 0;
}