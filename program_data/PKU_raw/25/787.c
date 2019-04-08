//
//  main.cpp
//  ??2?N??
//
//  Created by ? ?? on 12-12-10.
//  Copyright (c) 2012? ? ??. All rights reserved.
//

int n, sum = 5;
char a[999999999];
char b[999999999];
int p = 0;
int l = 2;

void cheng(int m)
{
    p = 0;
    int i;
    for (i = l; i >= 1; i--)
    {
        b[i] = ((a[i - 1] - '0') * 2 % 10 + p) % 10 + '0';
        p = ((a[i - 1] - '0') * 2 + p) / 10;
    }
    b[0] = p + '0';
    if (b[0] != '0') l++;
    if (b[0] == '0')
        for (i = 0; i < l; i++)
            b[i] = b[i + 1];
    strcpy(a, b);
    if (sum < n)
        cheng(sum++);
}
int main()
{
    cin >> n;
    if (n == 0) cout << 1;
    if (n == 1) cout << 2;
    if (n == 2) cout << 4;
    if (n == 3) cout << 8;
    if (n == 4) cout << 16;
    a[0] = '1';a[1] = '6';
    if (n > 4)
    {
        cheng(sum);
        for (int i = 0; i < l; i++) cout << a[i];
    }
    return 0;
}
