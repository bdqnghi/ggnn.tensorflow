int main()
{
    int x[10000] , y[10000];
    char ch1[10000] , ch2[10000];   
    int i = 0 , j = 0 , n = 0;
    int Min_h = 1000 , Max_h = 0 , Max = 0;
    cin >> ch1;
    cin >> ch2;
    int comma = -1;
    int counter = 0 , number = 0;
    for( i = 0 ; i <= 9999 ; i ++ )
    {
         if( ch1[i] == '\0' || ch1[i] == ',' )
         {
              if( i - comma == 2 )
                  x[counter] = ch1[i - 1] - '0';     
              else if( i - comma == 3 )
                   x[counter] = ( ch1[i - 2] - '0' ) * 10 + ch1[i - 1] - '0';
              else if( i - comma == 4 )
                   x[counter] = ( ch1[i - 3] - '0' ) * 100 + ( ch1[i - 2] - '0' ) * 10 + ch1[i - 1] - '0';
              counter ++;
              comma = i;
              if( ch1[i] == '\0' )
                  break;
         }   
    }
    comma = -1;
    counter = 0;
    for( i = 0 ; i <= 9999 ; i ++ )
    {
         if( ch2[i] == ',' || ch2[i] == '\0' )
         {
              if( i - comma == 2 )
                  y[counter] = ch2[i - 1] - '0';     
              else if( i - comma == 3 )
                   y[counter] = ( ch2[i - 2] - '0' ) * 10 + ch2[i - 1] - '0';
              else if( i - comma == 4 )
                   y[counter] = ( ch2[i - 3] - '0' ) * 100 + ( ch2[i - 2] - '0' ) * 10 + ch2[i - 1] - '0';
              counter ++;
              comma = i;
              if( ch2[i] == '\0' )
                  break;
         }   
    }
    for( i = 0 ; i <= counter - 1 ; i ++ )
    {
         if( x[i] < Min_h ) Min_h = x[i] ;
         if( y[i] > Max_h ) Max_h = y[i] ;     
    }
    for( i = Min_h ; i <= Max_h ; i ++ )
    {
         number = 0;
         for( j = 0 ; j <= counter - 1 ; j ++ )     
         {
              if( x[j] <= i && y[j] > i )
              number ++;
         }
         if( number > Max )
             Max = number;
    }
    cout << counter << " " << Max << endl;
    return 0;
}