//
//  main.cpp
//  ???????
//
//  Created by ? ?? on 12-11-30.
//  Copyright (c) 2012? ? ??. All rights reserved.
//

int main()
{
    char a[1000], b[1000];
    cin.getline(a, 1000);
    int la = strlen(a);
    int i = 0;
    char *p = NULL;
    a[la] = a[0];
    p = a;
    while(i < la)
    {
        char m = *p++, n = *p;
        b[i] = m + n;
        i++;
        cout << b[i - 1];
    }
    
    return 0;
}
