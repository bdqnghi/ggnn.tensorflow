int main()
{
    int i,count,out,n,m;

    count=0;
    out=0;

    while(1){
        scanf("%d%d",&n,&m);
        int num[n+1];
        if(m==0&&n==0)
        break;
        for(i=1;i<=n;i++){
      num[i]=0;
    }
    i=1;
    do
    {

        if(num[i]==0)
            count++;
        if(count==m){
            num[i]=1;
            out++;
            count=0;
        }
        if(i==n)
            i=0;
        i++;
    }
    while(out<n-1);
    for(i=1;i<=n;i++){
    if(num[i]==0){
    printf("%d\n",i);
    count=0;
    out=0;
    }
    }
    }
    return 0;
}