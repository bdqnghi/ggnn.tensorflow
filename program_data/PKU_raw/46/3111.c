int main()
{    int i ,j ,k,row,col;
     int t = 0 ;
    cin >> row >> col;
    int array[row][col];
    for(i = 0; i <= row - 1;i ++)
    {
      for(j = 0; j <= col - 1; j ++)   
       {      
           cin >> array[i][j];
       }
     }
     for( k = 0;;k ++  )
     {
       for(j = 0 + k; j <= col - 1 - k; j ++)
       {
          cout << array[k][j] << endl;
          t ++; 
          if( t == row *col)
            {  break ;
                }
       }
          if ( t == row*col )
          {
               break;
               }
       for(i = 1 + k; i <= row - 1 - k; i ++)
       {
          cout << array[i][col - 1 - k] << endl;
          t ++;  
          if( t == row *col)
            {  break ;
                }
          }
          if( t == row *col)
            {  break ;
                }
       for(j = col - 2 - k; j >= 0 + k; j --)
       {
          cout << array[row - 1 -k][j] << endl;
          t ++;  
           if( t == row *col)
            {  break ;
                }
       }   
                if( t == row *col)
            {  break ;
                }      
       for(i = row - 2 - k; i >= 1 + k; i --) 
       {   cout << array[i][0+k] << endl;
          t ++ ; 
                   if( t == row *col)
            {  break ;
                }           
       }     
        if( t == row *col)
            {  break ;
                }
}
       return 0 ;
}