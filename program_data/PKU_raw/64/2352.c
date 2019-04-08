int main(){
    int x[100],y[100],z[100],n,i,j,k=0,xx[100],yy[100],zz[100],xxx[100],yyy[100],zzz[100];
    double juli[1000];
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }
    for (i=1;i<n;i++){
        for (j=i+1;j<=n;j++){
            k++;
            juli[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));        
            xx[k]=x[i];
            yy[k]=y[i];
            zz[k]=z[i];
            xxx[k]=x[j];
            yyy[k]=y[j];
            zzz[k]=z[j];
        }
    }
    int a;
    double b;
    for(i=1;i<=k;i++){
        for(j=1;j<=k-i;j++)
            if (juli[j+1]>juli[j]){
               b=juli[j];
               juli[j]=juli[j+1];
               juli[j+1]=b;
               a=xx[j];
               xx[j]=xx[j+1];
               xx[j+1]=a;
               a=yy[j];
               yy[j]=yy[j+1];
               yy[j+1]=a;
               a=zz[j];
               zz[j]=zz[j+1];
               zz[j+1]=a;
               a=xxx[j];
               xxx[j]=xxx[j+1];
               xxx[j+1]=a;
               a=yyy[j];
               yyy[j]=yyy[j+1];
               yyy[j+1]=a;
               a=zzz[j];
               zzz[j]=zzz[j+1];
               zzz[j+1]=a;
            }    
        
    }
    for(i=1;i<=k;i++){
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",xx[i],yy[i],zz[i],xxx[i],yyy[i],zzz[i],juli[i]);
    } 
    return 0;
}




  





