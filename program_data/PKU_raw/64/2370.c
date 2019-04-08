int main(){
    int n,i,j,k,f;
    k=0;
    int x[10];
    int y[10];
    int z[10];
    int m[50][6];
    double r[50];
    double e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            r[k]=sqrt(1.0*((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));
            m[k][0]=x[i];
            m[k][1]=y[i];
            m[k][2]=z[i];
            m[k][3]=x[j];
            m[k][4]=y[j];
            m[k][5]=z[j];
            k++;
        }
    }
    for(i=1;i<=n*(n-1)/2;i++){
        for(j=0;j<n*(n-1)/2-i;j++){
            if(r[j]>=r[j+1]){
               e=r[j+1];
               r[j+1]=r[j];
               r[j]=e;
               f=m[j+1][0];
               m[j+1][0]=m[j][0];
               m[j][0]=f;
               f=m[j+1][1];
               m[j+1][1]=m[j][1];
               m[j][1]=f;
               f=m[j+1][2];
               m[j+1][2]=m[j][2];
               m[j][2]=f;
               f=m[j+1][3];
               m[j+1][3]=m[j][3];
               m[j][3]=f;
               f=m[j+1][4];
               m[j+1][4]=m[j][4];
               m[j][4]=f;
               f=m[j+1][5];
               m[j+1][5]=m[j][5];
               m[j][5]=f;
            }
        }
    }
    for(i=n*(n-1)/2-1;i>=0;i--){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",m[i][0],m[i][1],m[i][2],m[i][3],m[i][4],m[i][5],r[i]);
    }
	return 0;
}