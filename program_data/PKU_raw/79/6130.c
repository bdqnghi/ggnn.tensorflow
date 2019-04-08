int main(){
    int c;
    for(c=0;c<31221;c++){
        int sz[300],a,s,i,k,n,m,b;
        scanf("%d%d",&n,&m);
        if(n==0&&m==0){break;}
        a=0,b=0,s=0;
        for(i=0;i<n;i++){
            sz[i]=1;
        }
        k=0;
        while(b<n-1){
                s=s+sz[k];
                if(s==m){
                    sz[k]=0;s=0;b=b+1;
                }
            
        k=k+1;
        if(k==n){k=0;}
        }
        for(i=0;i<n;i++){
            if(sz[i]==1){
                printf("%d\n",i+1);
            }
        }
    }
return 0;}

