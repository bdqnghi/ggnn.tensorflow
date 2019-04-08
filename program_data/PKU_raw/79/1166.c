
int main()
{
int n, m, s;
while( cin >> n >> m && n )
{
s = 0;
for( int i = 2; i <= n; i ++ )
s = ( s + m ) % i;
cout << s + 1 << endl;
}
return 0;
}