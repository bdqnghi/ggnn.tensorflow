int main()
{
    char a[10][20],b[10][20];
    int i,t,y,u=0;
   while(scanf("%s",a[u])!=EOF)
  {
    strcpy(b[u],a[u]);
    for(t=0;a[u][t]!=0;t++)
    {
        if(a[u][t]!=40&&a[u][t]!=41)
            b[u][t]=32;
        if(b[u][t]==41)
        {
            for(y=t;y>-1;y--)
            {
                if(b[u][y]==40)
                    {b[u][y]=32;b[u][t]=32;break;}
            }
        }
    }
    for(t=0;b[u][t]!=0;t++)
    {
        if(b[u][t]==40)
            b[u][t]=36;
        else if(b[u][t]==41)
            b[u][t]=63;
    }
    puts(a[u]);
    puts(b[u]);
    u++;

    }
    return 0;
}
