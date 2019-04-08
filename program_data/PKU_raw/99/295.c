int main(){
    int n,i,br[101];
    double a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&br[i]);
       if(br[i]<19){
          a+=1;
       }
       else if(br[i]<36){
          b+=1;
       }
       else if(br[i]<61){
          c+=1;
       }
       else {
          d+=1;
	   }
    }
    a=a/n;
    b=b/n;
    c=c/n;
    d=d/n;
    printf("1-18: %.2lf%%\n",a*100);
    printf("19-35: %.2lf%%\n",b*100);
    printf("36-60: %.2lf%%\n",c*100);
    printf("60??: %.2lf%%\n",d*100);
    return 0;
}