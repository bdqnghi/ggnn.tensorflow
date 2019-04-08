
int main()
{
  int y , m , d;

  int x = 0 , i ;

  scanf( "%d %d %d", &y, &m, &d );

  for( i = 400000 ; i < y ; i += 400000 )
    x = ( x + 146097000 ) % 7;

  i = ( y - 1 ) / 400000 * 400000 ;

  for( ; i < y ; i += 400 )
    x = ( x + 146097 ) % 7;

  i = ( y - 1 ) / 400 * 400 ;

  for( ; i < y ; i += 100 )
    x = ( x + 36524 ) % 7 ;

  i = ( y - 1 ) / 100 * 100 ;
  
  for( ; i < y ; i ++ )
    if( i % 4 != 0 )
      x = ( x + 365 ) % 7 ;
    else x = ( x + 366 ) % 7 ;

  for( i = 1 ; i < m ; i ++ )
    if( 1 == i || 3 == i || 5 == i || 7 == i || 8 == i || 10 == i || 12 == i )
      x = ( x + 31 ) % 7;
    else if( 4 == i || 6 == i || 9 == i || 11 == i )
      x = ( x + 30 ) % 7;
    else if( y % 4 != 0 || ( y % 400 != 0 && y % 100 == 0) )
      x = ( x + 28 ) % 7;
    else x = ( x + 29 ) % 7 ;

  x = ( x + d ) % 7 ;

  switch( x )
  {
  case 0: printf("Sun.\n");break;
  case 1: printf("Mon.\n");break;
  case 2: printf("Tue.\n");break;
  case 3: printf("Wed.\n");break;
  case 4: printf("Thu.\n");break;
  case 5: printf("Fri.\n");break;
  case 6: printf("Sat.\n");break;
  }
  return 0 ;
}