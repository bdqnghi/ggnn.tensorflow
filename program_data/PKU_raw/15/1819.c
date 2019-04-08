
int main()
{
    int n,i,j;
    int sz[10][10];
    int a,b,c,d;
    int s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      scanf("%d",&sz[i][j]);
                                      }
                     }
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      if(sz[i][j]==0){
                                                      a=i;
                                                      b=j;
                                                      break;
                                                      }
                                      }
                     }
    for(i=n-1;i>=0;i--){
                     for(j=n-1;j>=0;j--){
                                      if(sz[i][j]==0){
                                                      c=i;
                                                      d=j;
                                                      break;
                                                      }
                                      }
                     }
                   
    s=(d-b-1)*(a-c-1);
    if(s<=0)
    printf("0");
    else 
    printf("%d",s);
  
    return 0;
}
                                      
                      
                     
    
