//
//  main.cpp
//  ????
//
//  Created by ? ?? on 12-12-11.
//  Copyright (c) 2012? ? ??. All rights reserved.
//



int main()
{
    double b[99999][6];
    double c[99999];
    double a[1000][3];

    int n;
    cin >> n;
    int i, j, k = 0, m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            b[k][0] = a[i][0];b[k][1] = a[i][1];b[k][2] = a[i][2];b[k][3] = a[j][0];b[k][4] = a[j][1];b[k][5] = a[j][2];
            c[k] = sqrt(pow(a[j][0] - a[i][0], 2) + pow(a[j][1] - a[i][1], 2) + pow(a[j][2] - a[i][2], 2));
            k++;
        }
    }
    for (i = 0; i < k - 1; i++)
    {
        for (j = 0; j < k - 1 - i; j++)
        {
            if (c[j] < c[j + 1])
            {
                double p = c[j];
                c[j] = c[j + 1];
                c[j + 1] = p;
                for (m = 0; m < 6; m++)
                {
                    p = b[j][m];
                    b[j][m] = b[j+1][m];
                    b[j+1][m] = p;
                }
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        cout << fixed << setprecision(0) << "(" << b[i][0] << "," << b[i][1] << "," << b[i][2] << ")" << "-" << "(" << b[i][3] << "," << b[i][4] << "," << b[i][5] << ")" << "=" << fixed << setprecision(2) << c[i] << endl;
    }
    return 0;
}
