int main(){
    int n,i,m,j,a,e;
    scanf ("%d",&n);
    int sz[n],b[n];
    j=0;
    for (i=0;i<n;i++){
        scanf ("%d",&sz[i]);
        a=sz[i]%2;
        if(a==1){
        b[j]=sz[i] ;
        j++;
        }
    }
    for (m=1;m<=j;m++){
        for (i=0;i<j-m;i++){
            if (b[i]>b[i+1]){
                e=b[i+1];
                b[i+1]=b[i];
                b[i]=e;
            }
        }
    }
for (i=0;i<j-1;i++){
    printf("%d,",b[i]);
}
printf("%d",b[j-1]);
return 0;
}
