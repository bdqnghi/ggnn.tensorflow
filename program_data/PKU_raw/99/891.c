int main(){
    int n,i=1,k,a=0,b=0,c=0,d=0;
    double e,f,g,h;
    scanf("%d",&n);
    while(i<=n){
         scanf("%d",&k);
         if(k<=18&&k>0){
         a+=1;
         i++;
         }else if(k>18&&k<=35){
         b+=1;
         i++;
         }else if(k>35&&k<=60){
         c+=1;
         i++;
         }else{
         d+=1;
         i++;
         }
        }
         e=100.0*a/n;
         f=100.0*b/n;
         g=100.0*c/n;
         h=100.0*d/n;
         printf("1-18: %.2lf%%\n",e);
         printf("19-35: %.2lf%%\n",f);
         printf("36-60: %.2lf%%\n",g);
         printf("60??: %.2lf%%\n",h);
         return 0;
 }