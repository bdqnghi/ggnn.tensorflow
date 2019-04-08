//
//  main.cpp
//  ???
//
//  Created by Neptune on 12-10-9.
//  Copyright (c) 2012? ??? 1200012777. All rights reserved.
//

int main()
{
    int a, b , c, d;
    for (a = 10; a <= 50; a += 10)
    {
        for (b = 10; b <= 50; b += 10)
        {
            if (a == b)
            {
                continue;
            }
            for (c = 10; c <= 50; c += 10)
            {
                if (a == c || b == c)
                {
                    continue;
                }
                for (d = 10; d <= 50; d += 10)
                {
                    if (a == d || b == d || c == d)
                    {
                        continue;
                    }
                    else if ((a + b == c + d) + (a + d > b + c) + (a + c < b ) == 3)
                    {
                        break;
                    }
                }
                if ((a + b == c + d) + (a + d > b + c) + (a + c < b ) == 3)
                    break;
            }
            if ((a + b == c + d) + (a + d > b + c) + (a + c < b ) == 3)  break;
        }
        if ((a + b == c + d) + (a + d > b + c) + (a + c < b ) == 3)
            break;
    }
    int weight[4];
    char name[4];
    weight[0] = a;
    weight[1] = b;
    weight[2] = c;
    weight[3] = d;
    name[0] = 'z';
    name[1] = 'q';
    name[2] = 's';
    name[3] = 'l';
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (weight[j] > weight[i])
            {
                int weight_t = weight[j];
                weight[j] = weight[i];
                weight[i] = weight_t;
                int name_t = name[j];
                name[j] = name[i];
                name[i] = name_t;
            }
                
        }
    }
        
    for(int i = 0; i <= 3; i++)
    {
        cout << name[i] << " " << weight[i] << endl;
    }
    return 0;
}
