int main()
{
    int n,i,a,b,t=0,m=0;
    scanf("%d",&n);
    int sz[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>89&&a<141&&b>59&&b<91)
        {
            sz[i]=0;
        }
        else{sz[i]=1;}
    }
    //for(i=0;i<n;i++)
    //{ printf("%d\n",sz[i]);}
    
    for(i=0;i<n;i++)
    {
        if(sz[i]==0) {t=t+1;}
      //  printf("%d%d",sz[i],t);
        if(sz[i]==1) {t=0; }
        if(m<t){ m=t;}
    }
    printf("%d\n",m);
    return 0;
}




