int ys(int x,int min){
    int r=1;
    if(x<min)
    return 0;
    for(int i=min;i<x;i++){
            if(x%i==0)
              r+=ys(x/i,i);
            }
    return r;
}
int main(){
    int n,a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            }
    for(int i=0;i<n;i++){
            printf("%d\n",ys(a[i],2));
            }
    return 0;
}
