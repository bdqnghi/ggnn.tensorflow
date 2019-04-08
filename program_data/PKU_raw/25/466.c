int main()
{
int N;
cin >> N;
if( N == 0 )
{ cout << "1" ;return 0; }
char a[1000] = "2";
for( int i = 0; i< N - 1; i++ )
{
char b[1000];
int yushu = 0, j;
for( j = 0; j < strlen( a ); j++ )
{
b[j] = ( a[j] - '0' ) * 2 + yushu;
yushu = b[j] / 10;
b[j] = b[j] % 10 + '0';
}
if( yushu != 0 )
{ b[j] = yushu + '0';b[j + 1] = '\0';}
else
{ b[j] = '\0'; }
strcpy( a, b );
}
for( int i = strlen( a ) - 1 ; i >= 0; i-- )
cout << a[i];
}