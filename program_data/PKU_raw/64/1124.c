int main(){
    int i,j,k,m,n,x;
    double e;
    scanf("%d",&n);
    int sz[10][3];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    double s[50];
    m=0;
    double zong;
    int a[50][3];
     int b[50][3];
    for(j=0;j<(n-1);j++){
        for(i=j+1;i<=n-1;i++){
            zong=0;
            for(k=0;k<3;k++){
                a[m][k]=sz[j][k];
                b[m][k]=sz[i][k];
                zong=zong+pow((a[m][k]-b[m][k]),2);
            }
            s[m]=sqrt(zong);
            m=m+1;
        }       
    }
    for(j=0;j<m-1;j++){
        for(i=0;i<m-1-j;i++){
            if(s[i]<s[i+1]){
               e=s[i];
               s[i]=s[i+1];
               s[i+1]=e;
               for(k=0;k<3;k++){
                   x=a[i][k];
                   a[i][k]=a[i+1][k];
                   a[i+1][k]=x;
                   x=b[i][k];
                   b[i][k]=b[i+1][k];
                   b[i+1][k]=x;
               }
            }
        }
    }
    for(i=0;i<m;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i][0],a[i][1],a[i][2],b[i][0],b[i][1],b[i][2],s[i]);
    }
    return 0;
}

