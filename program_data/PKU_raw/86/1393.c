int main(){
    int n,m[100],t[100],a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            t[i]=60;
            scanf("%d",&m[i]);
            for(int j=0;j<m[i];j++){
                    scanf("%d",&a);
                    if(t[i]-a-3>=0)
                    t[i]-=3;
                    if(t[i]-a>=0&&t[i]-a<3)
                    t[i]=a;
                    }
            }
    for(int i=0;i<n-1;i++){
            printf("%d\n",t[i]);
            }
    printf("%d",t[n-1]);
    return 0;
}