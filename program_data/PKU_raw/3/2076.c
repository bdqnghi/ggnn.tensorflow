int main()
{
  int n,k,a[1001];
  int i,j,sum,e=0;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
                   scanf("%d",&a[i]);
                   }
  
  for(i=0;i<n-1;i++){
                     for(j=i+1;j<n;j++){
                                        sum=a[i]+a[j];
                                       if(sum==k){
                                                  e=1;
                                                  break;
                                                  }                                                                   
                                        }
                     if(e==1)
                    
                     break;
                      
                    
                    
                     }
                     if(e==1)
                      printf("yes");
                     if(e!=1)
                     printf("no");
  
    scanf("%d ",&n);
    return 0;
}

   
                   
