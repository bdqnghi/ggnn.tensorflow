int main()
{
    char str[1001],s[1001][1001];
    int n,i,j,k=0,m,a[1001]={0},t=0,p;
    scanf("%d",&n);
    scanf("%s",str);
    m=strlen(str)-n;
    for(i=0;i<=m;i++)
        for(j=0;j<n;j++)
            s[i][j]=str[i+j];
    for(i=0;i<=m;i++)
        for(j=i;j<=m;j++)
            if(strcmp(s[j],s[i])==0) a[i]++;
    for(i=0;i<=m;i++)
        if(a[i]>t) t=a[i];
    p=0;
    for(i=0;i<m;i++)
       for(j=0;j<m;j++)
          if(a[i]!=a[j]) {p=1;break;}
    if(p==0) printf("NO\n");
    else{
    printf("%d\n",t);
    for(i=0;i<=m;i++)
    {
        if(a[i]==t)
        {
            for(j=0;j<i;j++)
                if(strcmp(s[i],s[j])==0) k=1;
            if(k==0) printf("%s\n",s[i]);
        }
    }}
}