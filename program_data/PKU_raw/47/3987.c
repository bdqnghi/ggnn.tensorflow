int main(){
    int sz[98];
    int n;
    scanf("%d\n",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d ",&(sz[i]));}
    int end[98];
    
    for(int m=0;m<n-1;m++){
        end[m]=sz[n-1-m];
        printf("%d ",end[m]);}
     end[n-1]=sz[0];
     printf("%d",end[n-1]);
      
     return 0;
}

        