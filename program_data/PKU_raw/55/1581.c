int turntonum (char c)
{
    if (c>='0'&&c<='9')
        return (c-'0');
    if (c>='a'&&c<='z')
        return (c-'a'+10);
    if (c>='A'&&c<='Z')
        return (c-'A'+10);
} 
int main ()
{
    int a,b,l;
    char c[100];
    long long num;
    cin >>a;getchar();
    cin.getline(c,80,' ');
    cin >>b;
    l=strlen(c);
    num=turntonum(c[0]);
    for (int i=1;i<l;i++)
    {
        int f;
        num=num*a+turntonum(c[i]);
    }
    if (num==0)
    {
        cout <<"0";
        return 0;
    }
    int d[100],l_;
    l_=log(num)/log(b)+1;
    for (int i=l_-1;i>=0;i--)
    {
        d[i]=num%b;
        num=num/b;
    }
    for (int i=0;i<l_;i++)
    {
        if (d[i]<10)
            cout <<d[i];
        else
            putchar('A'+d[i]-10);
    }
    return 0;
}
