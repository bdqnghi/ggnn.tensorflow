int main( ){
      int n,k,a,b,c;
      c=0;
      int sz[1000];
      scanf("%d%d",&n,&k);
      for(a=0;a<n;a++){
                  scanf("%d",&sz[a]);
                  }
      for(a=0;a<(n-1);a++){
                 for(b=(a+1);b<n;b++){
                      if(sz[a]+sz[b]==k){
                               printf("yes");
                               return 0;
                               }
                      if(sz[a]+sz[b]!=k){
                               c++;
                                }
                  }
       }
       if(c==n*(n-1)/2){
                 printf("no");
                 return 0;
                }
}
    