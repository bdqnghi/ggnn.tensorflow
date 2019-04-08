int main()
{
     int  k,n,i;
     double a[101],sum=0,fangcha = 0,*p;
     scanf("%d",&k);
     while( k -- )
     {
        scanf("%d",&n);
        for( i = 0; i < n;i ++ )
        {
         scanf("%lf",&a[i] ); 
         sum += a[i];
        }
         sum /= n;
         p = &a[0];
         for( i = 0; i < n; i++ )
         fangcha += (sum-*(p+i))*(sum-*(p+i));
         fangcha /= n;
         fangcha = sqrt(fangcha);
         printf("%.5f\n",fangcha);
         fangcha = 0;
         sum = 0;    
     }
} 
