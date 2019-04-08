
void main()
{
int len1, len2 , i , count = 0 , error = 0 ;
double line ;
char str1[ 600 ] , str2[ 600 ] ;
scanf( "%lf" , &line );
scanf( "%s" , str1 );
scanf( "%s" , str2 );

len1 = strlen( str1 );
len2 = strlen( str2 );

if( len1 != len2 )
{
printf( "error\n" );
return ;
}

for( i = 0 ; i < len1 ; i ++ )
{
if( str1[ i ] != 'A' && str1[ i ] != 'C' && str1[ i ] != 'G' && str1[ i ] != 'T' )
error ++ ;
if( str2[ i ] != 'A' && str2[ i ] != 'C' && str2[ i ] != 'G' && str2[ i ] != 'T' )
error ++ ;

if( str1[ i ] != str2[ i ] )
count ++ ;
}

if( error )
printf( "error\n" );
else
{
if( (double)(len1 - count)/len1 > line )
printf( "yes\n" );
else
printf( "no\n" );
}

}