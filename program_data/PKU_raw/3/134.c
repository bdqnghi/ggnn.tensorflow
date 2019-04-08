int main(){
    int n,k,i,a[2000],j,sum=0;
    scanf("%d %d",&n,&k);
    scanf("%d",&a[1]);
    for(i=2;i<=n;i++){
    scanf("%d",&a[i]);for(j=1;j<i;j++)
    {if((a[j]+a[i])==k){sum+=1;}}
     }
    if(sum==0)printf("no");
    else printf("yes");
    return 0;
}
    
    