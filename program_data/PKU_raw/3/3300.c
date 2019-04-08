int main()
{
    int n,k,i,j;
    int s=0;
    scanf("%d %d",&n,&k);
    int*pi=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d ",pi+i);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(pi+i)+*(pi+j)==k){
               s=s+1;
            }
        }
    }
    if(s==0){
        printf("no");
    }
    else{
        printf("yes");
    }
    free(pi);
    return 0;
}
