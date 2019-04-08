int main(){
    int a[1000],n[1000],m[1000],i,j,k,l;
    for(i=0;i<998;i++){
        scanf("%d%d",&n[i],&m[i]);
        if(n[i]==0){
            break;
        }
    }
    for(l=0;l<998;l++){
        if(n[l]==0){
            break;
        }
        for(i=1;i<=n[l];i++){
            a[i]=1;
        }
        j=0;
        for(i=1;i<=n[l]-1;i++){
            k=0;
            while(k<m[l]){
                j++;
                if(j>n[l]){
                    j=0;
                }
                if(a[j]==1){
                    k++;
                }
            }
            a[j]=0;
        }
        for(i=1;i<=n[l];i++){
            if(a[i]==1){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}