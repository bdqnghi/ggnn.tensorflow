

int main()
{
    int photo[300][300] = {1};
    int n;
    int i, j;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            int t;
            cin >> t;
            if (t == 255)
                t = 1;
            photo[i][j] = t;
        }
    }
    int found = 0;
    int Lx, Ly, Bx, By;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(photo[i][j] == 0)
            {
                Lx = i;
                Ly = j;
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    found = 0;
    for(i = n; i >= 1; i--)
    {
        for(j = n; j >= 1; j--)
        {
            if(photo[i][j] == 0)
            {
                Bx = i;
                By = j;
                found = 1;
                break;
            }
            if(found) break;
        }
    }
    int w = Bx - Lx - 1;
    int h = By - Ly - 1;
    cout << w * h << endl;
    return 0;
}
