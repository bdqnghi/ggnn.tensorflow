//*?????**
//*????? 1300012893 **
//*???2013.10.31**
   int main()
{
      int x,j;
      int a[16];
      cin >> x;
      int i = 1;
      int k = 0;
      while( x != -1)
    { 
        a[i] = x;
        i ++;
       if ( x != 0)
         {
           k = i  ;      
                 }
         else 
       { 
            int sum = 0;
         for( i = 1;i <= k;i ++)
         {    
              for ( j = 1;j <= k ;j++)
           {
               if(a[i] == 2*a[j])
               {
                  sum ++;     
               }
            }
          } 
                cout << (sum -1) << endl;
                i = 1;       
        } 
        cin>>x;     
     }   
        return 0;            
} 