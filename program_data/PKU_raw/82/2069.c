int main()
{
    int n,u;
    u=0;
    scanf("%d\n",&n);
    int x[1000],y[1000],t[100];
    for(int i=0;i<100;i++){
        t[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d %d\n",&x[i],&y[i]);
        if(x[i]>=90&&x[i]<=140&&y[i]>=60&&y[i]<=90){
            t[u]++;
        }
        else{
            u=u+1;
        }
    }
    int max;
    max=0;
    for(int i=0;i<100;i++){
        if(max<=t[i]){
            max=t[i];
        }
    }
    printf("%d",max);
    return 0;
}
