
//
//  main.cpp
//  ??13 ?2?
//
//  Created by ?? on 12-11-12.
//  Copyright (c) 2012? ??. All rights reserved.
//

int main()
{
    char n[100];
    int num[100], q[99], i, l, l2 = 0, r = 0;
    cin.getline(n, 100);
    l = strlen(n);
    for (i = 0; i < l; i++)
        num[i] = n[i] - '0';
    if (l == 2)
    {
        r = (num[0] * 10 + num[1]) % 13;
        q[0] = (num[0] * 10 + num[1]) / 13;
        l2++;
    }
    else if(l == 1)
    {
        q[0] = 0;
        r = num[0];
        l2++;
    }
    else if ((num[0] * 10 + num[1]) < 13)
    {
        q[0] = (num[0] * 100 + num[1] * 10 + num[2]) / 13;
        r = (num[0] * 100 + num[1] * 10 + num[2]) % 13;
        l2++;
        for (i = 2; i < l - 1; i++)
        {
            q[i - 1] = (r * 10 + num[i + 1]) / 13;
            r = r * 10 + num[i + 1] - q[i - 1] * 13;
            l2++;
        }
    }
    else
    {
        q[0] = (num[0] * 10 + num[1]) / 13;
        r = num[0] * 10 + num[1] - q[0] * 13;
        l2++;
        for (i = 1; i < l - 1; i++)
        {
            q[i] = (r * 10 + num[i + 1]) / 13;
            r = r * 10 + num[i + 1] - q[i] * 13;
            l2++;
        }
    }
    for (i = 0; i < l2; i++)
        cout << q[i];
    cout << endl;
    cout << r << endl;
    return 0;
}
