int main()
{
    int n,i,j,d,k,m;
    d=0;
    k=0;
    char g[1000][6],r[1000];
    scanf("%d",&n);
    scanf("%s",r);
    m=strlen(r);
    for(i=0;i<m;i++)
    {   g[i][5]=1;
        for(j=0;j<n;j++)
        {
           g[i][j]=r[i+j];  
        }
    }
   
    for(i=0;i<m;i++)
    { 
        for(j=i+1;j<m;j++)
        {
            if(strcmp(g[i],g[j])==0)
            {
            g[i][5]++;
            } 
        }                 
    }
    for(i=0;i<m;i++)
    {
           if(g[i][5]>d)
           {
           d=g[i][5];
           }  
    }
if(d>1)
{
    printf("%d\n",d);
    for(i=0;i<m;i++)
    {
       if(g[i][5]==d)
       printf("%s\n",g[i]);
    }   
}
else
printf("NO");
    return 0;
    }
