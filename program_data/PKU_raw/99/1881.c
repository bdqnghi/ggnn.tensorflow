int main(){
   int n,i,s1=0,s2=0,s3=0,s4,sz[100];
   double p1,p2,p3,p4;
   scanf("%d\n",&n);
    for(i=0;i<n;i++){
      scanf("%d ",&sz[i]);
    }
   for(i=0;i<n;i++){
     if(sz[i]<=18){
       s1++; 
     }
     if(sz[i]>=19&&sz[i]<=35){
       s2++; 
     }
     if(sz[i]>=36&&sz[i]<=60){
       s3++; 
     }
   }
    s4=n-s1-s2-s3;
   p1=(double)100*s1/n;
   p2=(double)100*s2/n;
   p3=(double)100*s3/n;
   p4=(double)(100*s4)/n;
  printf("1-18: %.2lf%%\n",p1);
  printf("19-35: %.2lf%%\n",p2);
  printf("36-60: %.2lf%%\n",p3);
  printf("60??: %.2lf%%",p4);
 return 0;
}