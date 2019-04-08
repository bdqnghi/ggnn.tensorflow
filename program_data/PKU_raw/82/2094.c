int main()
{
    int i,n;
    scanf("%d",&n);
    int shousuo[101],shuzhang[101],count,Max,a[101];
    for(i=0;i<n;i++){
        scanf("%d %d",&shousuo[i],&shuzhang[i]);
        if(shousuo[i]>=90&&shousuo[i]<=140&&60<=shuzhang[i]&&90>=shuzhang[i]){
            a[i+1]=1;
        }else{a[i+1]=0;}
    }
    a[0]=0;
    Max=0;
    count=0;
    for(i=1;i<n+1;i++){
        if(a[i-1]==0&&a[i]==1){
            count=1;
        }else if(a[i-1]==1&&a[i]==1){
            count=count+1;
        }
            if(Max<count){
                Max=count;
            }
        
    }
    printf("%d",Max);
    return 0;
}
   


