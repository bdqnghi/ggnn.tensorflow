int main()
{
    int N,e;
    int a[500],b[500];
    scanf("%d",&N);
    int i=0,t=0;
    while(i<N){
    scanf(" %d",&a[i]);
    if(a[i]%2!=0){
    b[t]=a[i];
    t++;
    }
    i++;
    }
    int s=1;
    while(s<=t){
    int r=0;
    while(r<t-s){
    if(b[r]>b[r+1]){
    e=b[r+1];
    b[r+1]=b[r];
    b[r]=e;
    }
    r++;
    }
    s++;
    }
    int u=0;
    while(u<t){
    if(u==0){
    printf("%d",b[0]);
    }else{
    printf(",%d",b[u]);
    }
    u++;
    }
    return 0;
}