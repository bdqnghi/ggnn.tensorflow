int main()
{
    int  a[50000],b[50000],sz[50000]={0};
  
    int i,min, max,e,n,j,sum=0,p,k,s;
    double r;
    scanf("%d\n", &n);
     for (i = 0; i< n; i++) {
        scanf("%d %d", &a[i],&b[i]);
       }
     min=0;
     for(i=0;i<n;i++){
         if(a[i]<a[min]){
             min=i;
         }
     }
        max=0;
     for(i=0;i<n;i++){
         if(b[i]>b[max]){
             max=i;
         }
     }
       
                  s=0;
      for(r=a[min]+0.1;r<=b[max]+0.1;r++ ){ 
          
            for(i=0;i<n;i++  ){
                if(r>=a[i]&&r<=b[i]){
                    sum++;
                }
                
            }
            if(sum>0){s++;
            sum=0;
            }
      }
          
      p=b[max]-a[min];
        
        if(s!=p){
            printf("no");
        }else{
    printf("%d %d",a[min],b[max]);}
   return 0;
}