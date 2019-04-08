int a[7][7], x, y;
int main()
{
    int i = 0, j, k, l;
    for (j = 1; j <= 5; ++ j)
        for (k = 1; k <= 5; ++ k)
            cin >> a[j][k];
    for (j = 1; j <= 5; ++ j)//?????????
        for (k = 1; k <= 5; ++ k)
        {
            for (l = 1; l <= 5; ++ l)//????????
                if (a[j][l] > a[j][k])
                    break;
            if (l <= 5)
                continue;
            for (l = 1; l <= 5; ++ l)//????????
                if (a[l][k] < a[j][k])
                    break;
            if (l > 5)//????????
            {
                i = 1;
                cout << j << " " << k << " " << a[j][k] << endl;
            }
        }
    if (!i)
        cout << "not found" << endl;
    return 0;
}
