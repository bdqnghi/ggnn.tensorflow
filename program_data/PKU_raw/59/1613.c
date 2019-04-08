int main()
{
      int n,i,j,k,l,day;
      char a[300][300];
      cin >> n ;
    for(i = 0; i < n ; i ++)             
    { 
       for ( j = 0; j < n  ; j ++ )
      {
        cin >> a[i][j];
      }
    }
    cin >> day;
     for(l = 1;l < day;l ++ )
       {    
            for(i = 0; i < n ; i ++)             
            { 
             for ( j = 0; j < n ; j ++ )
              {
          
                     if( a[i][j] == '@' )
                     {				
                        if(a[i][j+1] == '.')
                        {  a[i][j+1] ='*' ;}
                        if(a[i][j-1] == '.')
                        {  a[i][j-1] ='*' ;}
                        if(a[i+1][j] == '.')
                        {  a[i+1][j] ='*' ;}
                        if(a[i-1][j] == '.')
                        {  a[i-1][j] ='*' ;}
                      }
                   
              }
              
               
            }
             
           for(i = 0; i < n ; i ++)             
            { 
             for ( j = 0; j < n ; j ++ )
             {   
                 if(a[i][j] == '*')
                 {  
                     a[i][j] = '@';
                 }
             }
            }
       }        
        
            k = 0;
         for(i = 0; i < n ; i ++)             
            { 
             for ( j = 0; j < n ; j ++ )
              {
                     if( a[i][j] == '@')
                   {
                      k ++;
                   }   
              }
            }
        
              cout << k << endl;
       return 0;      
}
    