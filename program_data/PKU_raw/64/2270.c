int main(){
        int n,i,j,k,b,c;
        int x[10],y[10],z[10];
        double m[10][10],max=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d %d",&x[i],&y[i],&z[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n;j++){
                m[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
                }
        }
        for(k=0;k<n*(n-1)/2;k++){
            for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(max<m[i][j]){
                   max=m[i][j];
                   b=i;
                   c=j;
                   }
                }
             }
        if(max==0){break;}
        else{
            printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[b],y[b],z[b],x[c],y[c],z[c],max);
            m[b][c]=0;
            max=0;  
            }
        }
     return 0;
}
