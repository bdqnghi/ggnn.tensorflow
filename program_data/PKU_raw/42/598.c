
int main(){
    int a[100000],*p,i,j,n,k,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    sum=n;
    p=a;
    for(i=0;i<sum;i++){
        if(a[i]==k){
            
            for(j=i;j<sum;j++){
                *(p+j)=*(p+j+1);

            }
i=i-1;
            sum=sum-1;
        }
    }
    p=a;
    for(i=0;i<sum;i++){
        printf("%d",*(p+i));
        if(i!=sum-1) printf(" ");
    }
    printf("\n");
}
