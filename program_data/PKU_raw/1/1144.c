int main()
{
    int count(int x,int y);
    int i,j,n,a[100],b[100];
    scanf("%d", &n);
    for(i=1;i<=n;i++){scanf("%d", &a[i]);}
    for(i=1;i<=n;i++){
                      b[i]=0;
                      for(j=2;j<=a[i];j++){
                                        b[i]+=count(a[i],j);
                                        }
                      }
    for(i=1;i<=n;i++){printf("%d\n", b[i]);}
    return 0;
}
    
int count(int x,int y)
{
    int c=0,k;
    if(x==y){c=1;}
    if(x%y!=0){c=0;}
    if(x!=y&&x%y==0){
         for(k=y;k>=2;k--){c+=count((x/y),k);}
         }
    return(c);
}
