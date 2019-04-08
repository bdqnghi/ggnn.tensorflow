int main()
{
    int m,i,j,k;
    int a[100],b[100],c[100];
    double s;
    scanf("%d",&m);
    for(i=0;i<m;i++){
                     scanf("%d",&a[i]);
                     }
    for(i=0;i<m;i++){
                     k=a[i];
                     for(j=1;j<=k;j++){
                                       b[1]=2;
                                       b[2]=3;
                                       if(j!=1 && j!=2){
                                               b[j]=b[j-1]+b[j-2];
                                               }
                                       }
                     }
    for(i=0;i<m;i++){
                     k=a[i];
                     for(j=1;j<=k;j++){
                                       c[1]=1;
                                       c[2]=2;
                                       if(j!=1 && j!=2){
                                               c[j]=c[j-1]+c[j-2];
                                               }
                                       }
                     } 
    for(i=0;i<m;i++){
                     k=a[i];
                     s=0;
                     for(j=1;j<=k;j++){
                                       s=s+b[j]*1.0/c[j];
                                       }
                     if(i!=m-1)
                          printf("%.3lf\n",s);
                     else
                          printf("%.3lf",s); 
                     }   
return 0;
}    