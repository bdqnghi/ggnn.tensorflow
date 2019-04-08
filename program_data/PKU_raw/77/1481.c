int len,k,m,t;
    char str[101];
int work( int i,int j)
{
if( i == 0 && j == len-1   )
{printf("%d %d",i,j);
return 0;}
else if( str[i] != str[j] && str[i]!= ' ' && str[i] != ' ')
{
  printf( "%d %d\n",i,j );
  str[i]= ' ';str[j] = ' ';
  for( k = i-1;;k-- )
  {if( str[k]!=' ' )break;}
  for( m = j+1;;m++ )
  {if( str[m]!=' ' )break;}
  work( k,m );

}
else if( str[i] == str[j] && str[i]!= ' ' && str[i] != ' ') 
 {   for( t = j+1;t<len;t++ )
     {if( str[t]!=' ' )break;}
     work(j,t);
 } 
}
int main()
{

    int i , j ;
    gets(str);
    len = strlen( str );
    work( 0 ,1);
}
