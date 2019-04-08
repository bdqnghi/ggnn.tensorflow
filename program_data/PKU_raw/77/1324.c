
char s[1000];
int a[1000],l;
char x,y;

void f(int i,int k)
{
    if (k==l-1) return;
    if (s[k+1]==x)
    {
        a[i+1]=k+1;
        f(i+1,k+1);
    }
    else
    {
        cout << a[i] << " " << k+1 << endl;
        i--;
        f(i,k+1);
    }
}

int main()
{
    cin.getline(s,1000);
    l=strlen(s);
    x=s[0];
    f(0,0);
    return 0;
}
