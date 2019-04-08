char l(char c)
{
if (c>='a'&&c<='z')
     return c+'A'-'a';
else
     return c;
}

int main()
{
    char s[1001];cin>>s;
    char c=l(s[0]);
    int t=1;
    for (int i=1;i<=strlen(s);i++)
    {if (c==l(s[i]))
    t++;
    else
    {
    cout<<'('<<c<<','<<t<<')';
            c=l(s[i]);
    t=1;
        }
    }
    cout<<endl;
    return 0;
}