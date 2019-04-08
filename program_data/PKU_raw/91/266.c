
int main()
{
    char s[111];
    char first;
    char *p,*q;
    gets(s);
    p=&s[0];
    q=&s[1];
    first=*p;
    
    while(*q != '\0')
    {
        cout<<(char)  ((*p) + (*q)) ;
        *p++;
        *q++;
    }
    cout<<(char) (*p+first);
    
    return 0;
}
