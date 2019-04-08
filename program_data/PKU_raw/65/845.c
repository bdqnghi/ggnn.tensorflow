int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    int j=0;
    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            j=j;
        }else if(b[i]-a[i]==1||a[i]-b[i]==2){
            j++;
        }else if(a[i]-b[i]==1||b[i]-a[i]==2){
            j--;
        }
    }
    if(j>0){
        printf("A");
    }else if(j==0){
        printf("Tie");
    }else if(j<0){
        printf("B");
    }
    return 0;
}
