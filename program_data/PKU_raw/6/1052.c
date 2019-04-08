int main(){
    int m,n,t,i,j,l,k,sum=0,a[100][100];
    scanf("%d",&t);
    for(l=0;l<t;l++){
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                }
            }
        if(m==n&&n==1){
            printf("%d",a[0][0]);            
            }
        else{
             for(j=0;j<n;j++){
               sum+=a[0][j];
               sum+=a[m-1][j];
               }  
             for(i=0;i<m;i++){
               sum+=a[i][0];
               sum+=a[i][n-1];
               }   
             sum=sum-a[0][0]-a[0][n-1]-a[m-1][0]-a[m-1][n-1]; 
             printf("%d\n",sum);
            }       
        sum=0;        
        }
       
    
    scanf("%d",&i);
    return 0;
    }
