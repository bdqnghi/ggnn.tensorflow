int main(){
    int n;
    scanf("%d",&n);
    int i,a,b,j=0,m=0,k=1;
    for(i=1;i<=n;i++){
                      while(i<=n){                      
                                 scanf("%d %d",&a,&b);
                                 
                                 
                      if(a>=90&&a<=140&&b>=60&&b<=90){
                                                      j++;
                                                      }
                      else{
                           break;
                           }
                      i++;
                                 }
                      if(j>m){
                              m=j;
                              
                              }
                      j=0;                    
                      }
    printf("%d",m);
    return 0;
    }