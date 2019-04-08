void Exchange(int A[],int n);

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    Exchange(A,n);
    return 0;
}


void Exchange(int A[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("%d",A[n-1]);
    for(int j=n-2;j>=0;j--){
        printf(" %d",A[j]);
    }
}


