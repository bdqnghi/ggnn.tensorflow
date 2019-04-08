
int main(int argc, char *argv[])
{
    int n,i,a[300],m,e;
    scanf("%d",&n);
    for(i=0;i<n;i++){  //?? 
                     scanf("%d",&a[i]);
                     }
    
    for(i=0;i<n;i++){
                     for(m=0;m<i;m++){
                                      if(a[i]==a[m])
                                      a[i]=-100;
                                      }
                                      }
    
    for(i=n-1;i>0;i--){
                       if(a[i]!=-100){
                                      e=a[i];
                                      break;
                                      }
                                      }
                                      
    for(i=0;i<n;i++){
                     if(a[i]==e)  break;
                     if(a[i]!=-100){
                                    printf("%d,",a[i]);
                                    } 
                                    }
    
    printf("%d\n",e);
                                    

    
     

  return 0;
}