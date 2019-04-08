int main ()
{
    for (int i=1;i<=6;i++)
    {
        char a[100]={0},l;
        for (int i=1;i<=50;i++)
        {
            a[i]=getchar();
            if (a[i]=='-')
            {
                a[0]='-';
                i--;
            }
            if (a[i]=='\n')
            {
                l=i-1;
                break;
            }
        }
        if (a[0]=='-')
            cout <<a[0];
        for (int i=l;i>=1;i--)
        {
            if (a[i]!='0')
            {
                l=i;
                break;
            }
        }
        for (int i=l;i>=1;i--)
        {
            cout<<a[i];
        }
        if (l==0)
            cout <<"0";
        cout <<endl;
    }
    return 0;
}