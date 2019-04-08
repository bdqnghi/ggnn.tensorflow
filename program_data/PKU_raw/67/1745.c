int main(){
    int n,i,A[100],B[100];
    double C[100],D[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d%d",&A[i],&B[i]);
                    if(i==0) C[0]=1.0*B[0]/A[0];
                     if(i>=1){C[i]=1.0*B[i]/A[i];}
                     D[i]=C[i]-C[0];
                     if(i>=1&&D[i]>0.05)
                     {printf("better\n");}
                     
                         if(i>=1&&D[i]<-0.05){printf("worse\n");}
                         if(i>=1&&D[i]>=-0.05&&D[i]<=0.05) printf("same\n");
                                            }
  
    return 0;
}
