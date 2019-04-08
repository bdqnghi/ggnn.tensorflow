int main(){
    int a[100][100],n,m,i,j,m1,m2,n1,n2,k;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    k=0;
    m1=0;
    m2=m-1;
    n1=0;
    n2=n-1;
    loop:
    for(j=m1;j<=m2;j++){
        printf("%d\n",a[n1][j]);
        k=k+1;
        if(k==n*m){
            goto end;
        }
    }
    m2=m2-1;
    for(i=n1+1;i<=n2;i++){
        printf("%d\n",a[i][m2+1]);
        k=k+1;
        if(k==n*m){
            goto end;
        }
    }
    n2=n2-1;
    for(j=m2;j>=m1;j--){
        printf("%d\n",a[n2+1][j]);
        k=k+1;
        if(k==n*m){
            goto end;
        }
    }
    m1=m1+1;
    for(i=n2;i>n1;i--){
        printf("%d\n",a[i][m1-1]);
        k=k+1;
        if(k==n*m){
            goto end;
        }
    }
    n1=n1+1;
    goto loop;
    end:
    return 0;
}