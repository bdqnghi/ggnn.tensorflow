int main(){
    int n,i,j,g,k,a[50],b[50],x[10],y[10],z[10],w,q;
    double s[50],e;
    k=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                      scanf("%d %d %d",&x[i],&y[i],&z[i]);
                     
                     }
    for(i=0;i<n-1;i++){
          for(j=i+1;j<n;j++){
                            k++;
                            s[k]= sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)
                            +pow((z[i]-z[j]),2));
                            a[k]=i;
                            b[k]=j;
                            }
           
                            }
   
    for(i=1;i<=n*(n-1)/2;i++){
          for(k=0;k<n*(n-1)/2-i;k++){
                  if(s[k]<s[k+1]){
                      e=s[k];
                      s[k]=s[k+1];
                      s[k+1]=e;
                      g=a[k];
                      a[k]=a[k+1];
                      a[k+1]=g;
                      g=b[k];
                      b[k]=b[k+1];
                      b[k+1]=g;
                      }
                      }
                      }
    
    for(k=0;k<n*(n-1)/2;k++){
        q=a[k];
        w=b[k];
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[q],y[q],z[q],x[w],y[w],z[w],s[k]);
                                }                                 
                                                          
                                                          
                                                          
                                                          
                                                          
                                                    
return 0;
}
