
int main()
{
    int i,j,t,a[16]={0},sum=0,k=0;
    while(scanf("%d",&a[0]) && a[0]!=-1){
    for(i=1;i<=16;i++){
        scanf("%d",&a[i]);
        if(a[i]!=0) sum++;
        else break;
    }
    for(i=0;i<=sum;i++){
        for(j=i+1;j<=sum;j++){
            if(a[i]==2*a[j] || a[j]==a[i]*2) k++;
        }
    }
    printf("%d\n",k);
    sum=0;
    k=0;
    }
    return 0;
}