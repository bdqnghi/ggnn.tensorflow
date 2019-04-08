int main(){
    int n,i;
    int a[100],b[4];
    double f,c,d,e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     }
                     b[0]=0;
                     b[1]=0;
                     b[2]=0;
                     b[3]=0;
    for(i=0;i<n;i++){
                     if(a[i]<19){
                                 b[0]+=1;
                                 }
                     if(a[i]>18&&a[i]<36){
                                          b[1]+=1;
                                          }
                     if(a[i]>35&&a[i]<61){
                                          b[2]+=1;
                                          }
                     if(a[i]>60){
                                 b[3]+=1;
                                 }
                     }
    f=b[0]*1.0/n*100;
    c=b[1]*1.0/n*100;
    d=b[2]*1.0/n*100;
    e=b[3]*1.0/n*100;
    printf("1-18: %.2lf%%\n",f);
    printf("19-35: %.2lf%%\n",c);
    printf("36-60: %.2lf%%\n",d);
    printf("60??: %.2lf%%",e);
    return 0;
}
                     
