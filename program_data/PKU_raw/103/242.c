
int main()
{
    int i,j,k,m,n;
    int l,r;
    char s[1100];
    cin >>s;
    m=strlen(s);
    i=0;
    while (i<m)
    {
        j=i;
        l=(int)s[i];
        r=(int)s[j];
        while (l==r || (l-32)==r || (l+32)==r)
        {
            j++;
            r=(int)s[j];
        }
        cout <<"(";
        if (l<97) cout <<s[i];
        else cout <<(char)(l-32);
        cout <<","<<j-i<<")";
        i=j;
    }
    cout <<endl;

    return 0;
}

