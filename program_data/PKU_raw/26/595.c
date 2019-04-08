
int main()
{
    int i,j,k,l,m,n;
    char s1[200];
    gets(s1);
    k=strlen(s1)-1;
    i=0;
    m=0;
    while (s1[i]==' ') i++;
    while (s1[k]==' ') k--;
    while (i<=k-1)
    {

        if (s1[i]!=' ')
        {
                cout <<s1[i];
                i++;
        }

        else
        {
            cout <<s1[i];
            while (s1[i]==' ') i++;
        }
    }
    cout <<s1[k];
    cout <<endl;

    return 0;
}
