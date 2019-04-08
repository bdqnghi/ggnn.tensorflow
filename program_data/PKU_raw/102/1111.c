int main(){
    int m,i,j,x=0,y=0,k=0,n=0;
    scanf("%d",&m);
    char a[m][10];
    double b[m],g,h;
    for(i=0;i<m;i++){
        scanf("%s%lf",a[i],&b[i]);
        }
    for(i=0;i<m;i++){
       if(a[i][0]=='m')k++;
       if(a[i][0]=='f')n++;
       }
    double c[k],d[n];
    for(j=0;j<k;j++){
       for(i=x;i<m;i++){
          if(a[i][0]=='m'){
            c[j]=b[i];
            x=i+1;
            break;
            }
          }
       }
    for(j=0;j<n;j++){
       for(i=y;i<m;i++){
          if(a[i][0]=='f'){
            d[j]=b[i];
            y=i+1;
            break;
            }
          }
       }
    for(i=1;i<k;i++){
       for(j=0;j<k-i;j++){
          if(c[j]>c[j+1]){
            g=c[j];
            c[j]=c[j+1];
            c[j+1]=g;
            }
          }
       }
    for(i=1;i<n;i++){
       for(j=0;j<n-i;j++){
          if(d[j]<d[j+1]){
            h=d[j];
            d[j]=d[j+1];
            d[j+1]=h;
            }
          }
       }
    printf("%.2lf",c[0]);
    for(i=1;i<k;i++)printf(" %.2lf",c[i]);
    for(i=0;i<n;i++)printf(" %.2lf",d[i]);      
    scanf("%d",&m);
    return 0;
}
