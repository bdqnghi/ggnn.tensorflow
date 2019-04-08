//
//  main.cpp
//  ?????????
//
//  Created by ?? on 12-11-20.
//  Copyright (c) 2012? ??. All rights reserved.
//

int a[100][100];
void guiling(int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = a[i][0];
        for (int j = 1; j < n; j++) if (a[i][j] < min)
            min = a[i][j];
        for (int j = 0; j < n; j++) a[i][j] -= min;
    }
    for ( int i = 0; i < n; i++)
    {
        int min = a[0][i];
        for (int j = 1; j < n; j++)
            if (a[j][i] < min) min = a[j][i];
        for (int j = 0; j < n; j++) a[j][i] -= min;
    }
}
void xiaojian(int n)
{
    for (int i = 1; i < n - 1; i++)     // ?n??????n-1???
    {
        a[0][i] = a[0][i + 1]; a[i][0] = a[i + 1][0];
        for (int j = 1; j < n - 1; j++)
            a[i][j] = a[i + 1][j + 1];
    }
}
int Sum(int n)
{
    if (n == 1)
        return 0;
    int k = 0;
    guiling(n);
    k += a[1][1];
    xiaojian(n);
    n--;
    return k + Sum(n); // ???????
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                cin >> a[j][k];
        
        cout << Sum(n) << endl;
    }
    return 0;
}
