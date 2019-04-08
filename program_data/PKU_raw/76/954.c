
int main()
{
    int n,x=1;
    int a[5000],b[5000];
    int i,j,p;
    double t;
    scanf("%d",&n);
    
                 
for(i=0;i<n;i++)
          {
                      scanf("%d %d",&a[i],&b[i]);
                          }
           
           
           
          int min=a[0];
           for(i=0;i<n;i++)
           {
                 if(a[i]<min)
                 {
                                  min=a[i];
                                  }          
                           }
                         
                 int max=b[0];
                 for(i=0;i<n;i++)
                 {
                                 if(b[i]>max)
                                 {
                                                  max=b[i];
                                                  }
                                 }
                int sz[5000]={0};
for(t=min+0.5,p=0;t<=max-0.5;t++,p++){
                             
                              for(i=0;i<n;i++){
                                               if(t>a[i]&&t<b[i]){
                                                              sz[p]=1;
                                                                  }
                                              
                                               }
                              if(sz[p]==0)
                              {
                                          x=0;
                                          printf("no");
                                          }
                              
                              }
if(x==1){
         printf("%d %d",min,max);
         }
  
         return 0;
         }
