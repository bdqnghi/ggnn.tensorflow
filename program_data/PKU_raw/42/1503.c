int main(){
    int n,l[100000],k,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&l[i]);
            }
    scanf("%d",&k);
    for(int i=0;i<n-c;i++){
            if(l[i]==k){
              for(int j=i;j<n-c;j++){
                      l[j]=l[j+1];
                      }
              c++;
              i--;
              }
            }
    for(int i=0;i<n-c;i++){
            if(i==n-c-1)
            printf("%d",l[i]);
            else
            printf("%d ",l[i]);
            }
    return 0;
}