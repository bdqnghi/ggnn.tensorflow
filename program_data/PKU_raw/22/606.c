int main()
{
        int a[301],i,k,j,l,t,s;
    char b[300];
    i=0;
    scanf("%d%c",&a[i],&b[i]);
    while(b[i]==',')
    {
      i++;
      scanf("%d%c",&a[i],&b[i]);
    }//?????i+1
    k=0;
    while((a[k]==a[k+1])&&(k<i))
    k++; //k=i??????
    if(i==0) printf("No");
    else 
    {
         if(k==i) printf("No");
         else
         {
            for(j=0;j<i;j++)
             for(l=0;l<i-j;l++)
               if(a[l]>a[l+1])
                 {t=a[l];a[l]=a[l+1];a[l+1]=t;} //have been sorted
            s=i;
            while(a[s]==a[s-1])
            s--;
            printf("%d",a[s-1]); 
              
          
         } 
     }
     return 0;
} 
                
              