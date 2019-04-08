
char* strrpl( char* src, char* sub, char* rpl )
{
char* p = strstr( src, sub );
int a, b;
if ( p == NULL )
return src;
a = strlen( sub );
b = strlen( rpl );
memmove( p + b, p + a, strlen( p + a ) + 1 );
memcpy( p, rpl, b );
return src;
}
int main()
{
char str[256],sub[256],rpl[256];
gets( str );
gets( sub );
gets( rpl );
puts( strrpl( str, sub, rpl ) );
} 