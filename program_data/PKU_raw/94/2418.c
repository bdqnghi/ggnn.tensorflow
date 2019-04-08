int main(){
    int n,zhan,k=0,i=0,j=0;
    scanf("%d",&n);
    int s[n];
    while(i<n){
        scanf("%d",&zhan);
        if(zhan%2==1){
            s[k]=zhan;
            k=k+1;
        }
        i=i+1;
    }
    i=0;
    while(i<k){
        while(j<k-1){
            if(s[j]<s[j+1]){
                zhan=s[j];
                s[j]=s[j+1];
                s[j+1]=zhan;
            }
            j=j+1;
        }
        j=0;
        i=i+1;
    }
    i=k-2;
    printf("%d",s[k-1]);
    while(i>=0){
        printf(",%d",s[i]);
        i=i-1;
    }
    return 0;
}