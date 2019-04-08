int main(){
    int i,z=10000,qj[50000][2],y=0,n,k=0,m=0;
    double s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d%d",&(qj[i][0]),&(qj[i][1]));
                     if(qj[i][0]<z)
                     z=qj[i][0];
                     if(qj[i][1]>y)
                     y=qj[i][1];
                     }
    for(s=z;s<=y;s+=0.5){
                         for(i=0;i<n;i++){
                                          if((s>=qj[i][0])&&(s<=qj[i][1]))
                                          k++;
                                          }
                         if(k==0){
                         m++;
                         }
                         k=0;
                         }
    if(m!=0){
             printf("no");
             }else{
                   printf("%d %d",z,y);
                   }

                   return 0;
                   }
                         
                         
                     
