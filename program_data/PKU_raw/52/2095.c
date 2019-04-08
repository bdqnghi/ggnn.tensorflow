int main(){
    int n,m,i;
    int s[100];
    scanf("%d %d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
         scanf("%d",&(s[i]));
         getchar();
    }
    for(i=n-m;i<n;i++){
         printf("%d ",s[i]);
         getchar();
    }
    for(i=0;i<n-m-1;i++){
         printf("%d ",s[i]);
         getchar();
    }
    i=n-m-1;
    printf("%d",s[i]);
    return 0;
}