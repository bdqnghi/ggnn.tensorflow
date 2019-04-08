int main()
{
     int n,a[50000],b[50000],m[10000],max,min,sum=0;
     int i,j,k;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
             scanf("%d%d",&a[i],&b[i]);
             }
     for(i=1;i<=10000;i++){
             m[i]=0;}
     for(j=1;j<=n;j++){
             for(k=a[j]+1;k<=b[j];k++){
                     m[k]=1;}
                     }
     max=1,min=10000;                
     for(i=1;i<=10000;i++){
             if(m[i]==1){
                         if(i<min){
                                   min=i;}
                         if(i>max){
                                   max=i;}
                                   }
                                   }
     for(j=min;j<=max;j++){
             if(m[j]==0){
                         sum++;}
                         }
     if(sum==0){
                printf("%d %d",min-1,max);}
        else printf("no");

     return 0;
}                                                                                  
                                     
