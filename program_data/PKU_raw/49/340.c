

int main()
{
    char a[100];
    int i=1,j,m,k,x = 0;
    while ((a[i] = cin.get() ) !=  '\n')
    {
        i++;
    }
    m = i - 1;
    for (j = 2; j <= m; j++)       //????????
    {
        for (i = 1; i <= m-j+1; i++)        //??????
        {
            for ( k = 0; k <= j/2-1; k++)      //??
            {
                x = 0;
                if ( a[i+k] != a[i+j-1-k] )
                {
                    x = 1;
                    break;
                }
            }
            if (x == 0)
            {
                for (k = 0; k <= j-1; k++)
                {
                    cout << a[i+k];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
