int main()
{
 char a[1001];
cin.getline( a, 1001 );
for( int i = 0; i < strlen( a ); i++ )
{
if( a[i] >= 97 )
	a[i] -= 32;
}
int i = 0 ;
while( i < strlen( a ) )
{
	int count = 1;
while( a[i] == a[ i + 1 ] )
{ i++;count++;}
cout << "(" << a[i] << "," << count << ")";
i++;
}
return 0;


}