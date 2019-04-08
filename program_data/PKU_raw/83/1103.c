int main()
{
   int n,i,j,k,sum1=0;
   scanf("%d",&n);
   int a[n],b[n];
   float c[n],d[n],sum2=0;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       sum1 += a[i];
   }
   for(j=0;j<n;j++){
       scanf("%d",&b[j]);
   }
   for(k=0;k<n;k++){
      if(b[k]>=90 && b[k]<=100)
          c[k]=4.0;
      else if(b[k]>=85&& b[k]<=89)
          c[k]=3.7;
      else if(b[k]>=82 && b[k]<=84)
          c[k]=3.3;
      else if(b[k]>=78 && b[k]<=81)
          c[k]=3.0;
      else if(b[k]>=75 && b[k]<=77)
          c[k]=2.7;
      else if(b[k]>=72 && b[k]<=74)
          c[k]=2.3;      
      else if(b[k]>=68 && b[k]<=71)
          c[k]=2.0; 
      else if(b[k]>=64 && b[k]<=67)
          c[k]=1.5; 
      else if(b[k]>=60 && b[k]<=63)
          c[k]=1.0; 
      else
          c[k]=0;              
       d[k]=a[k]*c[k];
      sum2 += d[k];
   }
   printf("%.2f",sum2/sum1);
   return 0;
}
