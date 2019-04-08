int main(){
    int n,i,a[101];
    int s1=0,s2=0,s3=0,s4=0;
    double m1,m2,m3,m4;
    scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         if(1<=a[i]&&a[i]<=18){
                s1++;
         }
         else if(19<=a[i]&&a[i]<=35){
                s2++;
         }
         else if(36<=a[i]&&a[i]<=60){
                s3++;
         }
         else if(a[i]>60){
                s4++;
         }
     }
     m1=(double)s1/n*100;
     m2=(double)s2/n*100;
     m3=(double)s3/n*100;
     m4=(double)s4/n*100;
     printf("1-18: %.2lf",m1);
     printf("%%\n") ;     
     printf("19-35: %.2lf",m2);
     printf("%%\n") ;    
     printf("36-60: %.2lf",m3);
     printf("%%\n") ;    
     printf("60??: %.2lf",m4);
     printf("%%\n") ; 
     return 0;
}   



