int main()
{
  char a[101] ;
  cin.getline( a ,101 );
  char *p;
  p = a ;
  int i ;
  int len = strlen(a) ;
  for( i = 0 ; i <= len - 1 ;i ++ )
  {
    if( p[i] != ' ')
    cout << p[i] ;     
    else if ( (p[i -1] !=' ')&&( p[i] == ' '))
    cout <<" ";  
  }
  cout << endl ;
  return 0 ;
    
    
    
    
    
    
    
    
    
    
    
}
    
    
    
    
    
    
    