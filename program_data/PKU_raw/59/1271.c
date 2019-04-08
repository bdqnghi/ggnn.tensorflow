int main()
{
    int a[120][120];
    char s[120][120];
    char c1[10];
    int i,m,n,j,o,p,q;
    memset(s,0,sizeof(s));
    memset(a,0,sizeof(a));
    scanf("%d",&n);
    for (i=0;i<=n-1;i++)
    scanf("%s",s[i]);
    scanf("%d",&m);
    
    for (o=1;o<=m-1;o++)
    {
        memset(a,0,sizeof(a));
        for (i=0;i<=n-1;i++)
        for (j=0;j<=n-1;j++)
        if (s[i][j]=='@')
        {
           if ((s[i-1][j]=='.')&&(i>0)) a[i-1][j]=1;              
           if ((s[i][j-1]=='.')&&(j>0)) a[i][j-1]=1;
           if ((s[i+1][j]=='.')&&(i<n-1)) a[i+1][j]=1;
           if ((s[i][j+1]=='.')&&(j<n-1)) a[i][j+1]=1;
        }
        for (i=0;i<=n-1;i++)
        for (j=0;j<=n-1;j++)
        if (a[i][j]==1) s[i][j]='@';
    }
    p=0;
  
    for (i=0;i<=n-1;i++)
        for (j=0;j<=n-1;j++)   
        if (s[i][j]=='@')  p++;
        printf("%d",p);
        
        return 0;
}            
