//
//  main.cpp
//  ?????
//
//  Created by ? ?? on 12-11-10.
//  Copyright (c) 2012? ? ??. All rights reserved.
//



int main()
{
    int w;
    int i, j;
    int sum = 0, d;
    cin >> w;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for (i = 0; i < 12; i++)
    {
        sum =0;
        if (i == 0)
        {
            d = 13 - (9 - w);
        }
        else
        {
            
            for (j = 0; j < i; j++)
            {
                sum = sum + a[j];
            }
            d = sum + 4 + w;
        }
        if (d % 7 == 4)
        {
            cout << i + 1 << endl;
        }
    }
    
    
    return 0;
}
