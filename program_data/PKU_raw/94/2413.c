int main(){
    int n,i,j=0,c=0;
    scanf("%d",&n);
    int sz[n];
    int js[501];
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
    }
    for(i=0;i<501;i++){
        js[i]=0;
    }
    for(i=0;i<n;i++){
        if(sz[i]%2==1){
            js[j]=sz[i];
            j++;
            c++;
        }
    }
    int e,k;
    for(k=1;k<=c;k++){
        for(i=0;i<c-k;i++){
            if(js[i]>js[i+1]){
                e=js[i+1];
                js[i+1]=js[i];
                js[i]=e;
            }
        }
    }
    for(i=0;i<c-1;i++){
        printf("%d,",js[i]);
    }
    printf("%d",js[c-1]);
    return 0;
}
