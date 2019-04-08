int main()
{
    int x[11],y[11],z[11],g=0,e1,e2;
    double d[11][11],m;
    int max[45][2];
    int i,j,k,n,e,a,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
        scanf("%d",&z[i]);
        }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            d[i][j]=0;
            }
        }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            g=g+1;
            }
        } 
    for(k=0;k<g;k++){
        max[k][0]=0;
        max[k][1]=0;
        }
    for(k=0;k<g;k++){
        s=k+1;
        for(a=0;a<n;a++){
            s=s-n+a+1;
            if(s<=0){
               s=s+n-a-1;
               break;}
            }
        max[k][0]=a;
        max[k][1]=s+a;
        }
    for(k=0;k<g;k++){
        for(e=g-1;e>=k;e--){
            if(e<g-1){
                 if(d[max[e][0]][max[e][1]]<d[max[e+1][0]][max[e+1][1]]){
                    e1=max[e][0];
                    max[e][0]=max[e+1][0];
                    max[e+1][0]=e1;
                    e2=max[e][1];
                    max[e][1]=max[e+1][1];
                    max[e+1][1]=e2;
                 }
               }
            }
        } 
    for(k=0;k<g;k++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[max[k][0]],y[max[k][0]],z[max[k][0]],x[max[k][1]],y[max[k][1]],z[max[k][1]],d[max[k][0]][max[k][1]]);
        }             
    return 0;
} 


