int main()
{
   int a[1001];
   memset(a,0,sizeof(a));
   int i,j,k,n;
   int p = 0;
   cin >> n ;
   a[1] = 2 ;
   if(n == 0)
   {
     cout << "1";
   }
   else
   {
   for(i = 1; i< n; i++)
   {   
       p = 0;
     for(j = 1; j <=1000; j ++)   
     {
         a[j] = a[j] * 2 + p ;
         p = a[j] / 10;
         a[j] = a[j] % 10;
     }     
   }
   for( i = 1000; a[i] == 0 ; i-- );
       k = i ;
   for(i = k ;i >= 1 ; i -- )
   {
       cout<<a[i];
   }
   }   
     return 0 ;
}  