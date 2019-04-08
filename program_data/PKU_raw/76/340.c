int main()
{
    int n,i,a,b,t,l=0;
    int ai[50000],bi[50000],sz[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&ai[i],&bi[i]);
        }
    for(t=0;t<10000;t++){
        sz[t]=0;
        }
    for(i=0;i<n;i++){
        if(ai[i]==bi[i]){
        t=ai[i]-1;  
        sz[t]=1;
        }
        for(t=ai[i]-1;t<bi[i]-1;t++){
            sz[t]=1;
        }
    }
    a=ai[0];
    b=bi[0];
    for(i=1;i<n;i++){
        if(a>ai[i])
        a=ai[i];
        if(b<bi[i])
        b=bi[i];
    }
    sz[b-1]=1;
    for(t=a-1;t<b;t++){
        if(sz[t]==0){
           printf("no");
           l=1;
           break;
        }
    }
    if(l==0)
    printf("%d %d",a,b);    

    return 0;
}

 
