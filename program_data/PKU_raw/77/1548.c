


char a[110];
int l;
void vv(char a[], char b, char g)
{
    int i, flag = 0;
    l = strlen(a);
    for(i = 0; i < l; i++)
        if(a[i] != '*')
        flag = 1;
    if(flag == 0)
        return ;
    else
    {
    for(i = 0; i < l; i++)
    {
        if(a[i] == g)
        {
            for(int j = i - 1; j >= 0; j--)
            if(a[j] == b)
            {
                cout << j << " " << i << endl;
                a[j] = '*';
                a[i] = '*';
                break;
            }

        }
    }
    vv(a, b, g);
    }
}
int main()
{
    char b, g;
    cin >> a;
    l = strlen(a);
    b = a[0];
    g = a[l - 1];
    vv(a, b, g);

    return 0;
}
