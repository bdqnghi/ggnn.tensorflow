void main(){
    int i;
    int m,mm,n,k;
    scanf("%d%d",&n,&k);
    mm=0;
    while(1){
        mm+=n-1;
        m=mm;
        for(i=0;i<n&&m%(n-1)==0;i++)
                m=m/(n-1)*n+k;
        if(i>=n){
            printf("%d\n",m);
            break;
        }
    }
}    