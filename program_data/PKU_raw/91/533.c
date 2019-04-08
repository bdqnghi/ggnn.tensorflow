int main()
{
    char s[101], s1[101];
    cin.getline( s, 101 );
    char *p;
    int i;
    for ( i = 0, p = s1; *( s + i + 1 ) != '\0'; i++ )
    {
        *p = *( s + i ) + *( s + i + 1 );
        p++;
    }
    *p = *( s + i ) + *s;
    *++p = '\0'; 
    cout << s1;
    return 0;
}
