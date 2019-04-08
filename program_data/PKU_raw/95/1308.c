
int main()
{
    char a[80],b[80];
    gets(a);
    gets(b);
    int lena=strlen(a);
    int lenb=strlen(b);
    int f=1;
    for(int i=0;i<lena;i++)
    {
        if(a[i]>='a') a[i]-=32;
        if(b[i]>='a') b[i]-=32;
        if(a[i]>b[i])
        {
            cout << '>';
            f=0;
            break;
        }
        else if(a[i]<b[i])
        {
            cout << '<';
            f=0;
            break;
        }
    }
    if(f&&lena==lenb)cout << '=';
    else if(f&&lena>lenb) cout <<'>';
    else if(f&&lena<lenb) cout <<'<';
}
