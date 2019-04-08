


char l(char c);

int main()
{
    char s[1001];
    cin>>s;
    char c=l(s[0]);
    int m=1;
    for (int i=1;i<=strlen(s);i++)
    {
    if (c==l(s[i]))
    m++;
    else
    {cout<<'('<<c<<','<<m<<')';
    c=l(s[i]);m=1;
    }
    }
    cout<<endl;
    
}


char l(char c)
{
     if (c>='a'&&c<='z')
     return c+'A'-'a';
     else
     return c;
}