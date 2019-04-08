int main(){
    int m,n,i,a[MAX],count,p;
    while(scanf("%d%d",&n,&m)!=EOF){
        if(m==0&&n==0)
        break;
        for(i=0;i<n;i++){
            a[i]=1;
        }
        count=0;
        p=-1;
        while(count!=(n-1)){
            for(i=0;i<m;){
                p++;
                if(a[p%n]!=0)
                i++;
            }
            a[p%n]=0;
            count++;
        }
        for(i=0;i<n;i++)
        if(a[i]!=0)
        break;
        printf("%d\n",i+1);
    }
    return 0;
}
