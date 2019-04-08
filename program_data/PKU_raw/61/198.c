int main(){
    int n,i,j,max,tran;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int F[max+3];
    F[0]=1;
    F[1]=1;
    for(i=0;i<max;i++){
        F[i+2]=F[i]+F[i+1];
    }
    for(i=0;i<n;i++){
        printf("%d\n",F[a[i]-1]);
    }
    return 0;
}
