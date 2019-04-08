int main()
{
    int n,a=0,b=0,shuzu[111];
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
                     scanf("%d",&shuzu[i]);
                     }
    for(i=0;i<n;i++){
                      if(a<shuzu[i]){
                                       a=shuzu[i] ;
                                       }
                                       }
    printf("%d\n",a);
    for(i=0;i<n;i++){
                      if(a==shuzu[i]){    
                                          shuzu[i]=0;  
                                          }
                                          }
    for(i=0;i<n;i++){
                      if(b<shuzu[i]){ 
                                      b=shuzu[i] ; 
                                      }
                                      }
     printf("%d",b);     
     return 0;
     }                                                                                            
