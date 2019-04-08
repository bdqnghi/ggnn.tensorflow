int main()
{
    int n,tmp,i,j,s,t;
    int a[50001][3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i][0],&a[i][1]);
    
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n-j;i++){
            if(a[i][0]>a[i+1][0]){
            tmp=a[i][0];
            a[i][0]=a[i+1][0];
            a[i+1][0]=tmp;
            s=a[i][1];
            a[i][1]=a[i+1][1];
            a[i+1][1]=s;
        }
    }}
    t=1;
    tmp=a[0][1];
    for(i=1;i<n;i++)
    {
        if(a[i][0]>tmp) t=0;
        else if(a[i][1]>tmp) tmp=a[i][1];
    }
    
    if(t==1){printf("%d %d",a[0][0],tmp);}
    else{
         printf("no");}

    return 0;
}
