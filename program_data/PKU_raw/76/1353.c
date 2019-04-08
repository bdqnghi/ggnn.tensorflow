int main(){
    int N=100000;
    int sum=1;
    int n;
    scanf("%d\n",&n);
    int a[n];
    int b[n];
    int c[n];
    int d[n];
    for(int i=1;i<=n;i++){
        scanf("%d %d\n",&a[i-1],&b[i-1]);
        c[i-1]=a[i-1];d[i-1]=b[i-1];
    }
   
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n-k;i++){
            if(a[i-1]>=a[i]){int y;y=a[i-1];a[i-1]=a[i];a[i]=y;}
            if(b[i-1]<=b[i]){int x;x=b[i-1];b[i-1]=b[i];b[i]=x;}
        }
    }
    int left=a[0];
    int right=b[0];
    int sz[2*N];
    for(int i=1;i<=2*N;i++){sz[i-1]=0;}
    for(int i=1;i<=n;i++){
        for(int t=(2*c[i-1]-1);t<=(2*d[i-1]-1);t++){sz[t-1]=1;}
    }
    for(int i=(2*left-1);i<=(2*right-1);i++){if(sz[i-1]==0){sum=0;}}
    if(sum==0){printf("no");}
    if(sum==1){printf("%d %d",left,right);}
    return 0;
}
