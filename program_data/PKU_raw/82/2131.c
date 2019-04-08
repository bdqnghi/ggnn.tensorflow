int main(){
    int sz[100];
    int cz[100];
    int pz[100];
    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&cz[i],&sz[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(sz[i]>=60&&sz[i]<=90&&cz[i]>=90&&cz[i]<=140){
            sum=sum+1;
            pz[i]=sum;
            }
            else sum=0;
                 pz[i]=sum;
    }
    a=pz[0];
    for(int i=1;i<n;i++){
        if(a<pz[i]){
        a=pz[i];
        }
    }
    printf("%d\n",a);
    return 0;
}