//
//  main.cpp
//  ????
//
//  Created by ?? on 12-12-26.
//  Copyright (c) 2012? ??. All rights reserved.
//

int main()
{
    char string[250], substring[250], replacestring[200];
    cin >> string >> substring >> replacestring;
    int place = 0, i, j, flag = 1;
    for (i = 0; string[i] != '\0' && flag == 1; i++)
    {
        if (string[i] != substring[0])
            continue;
        else
        {
            place = i;
            for (j = 0; substring[j] != '\0'; j++)
            {
                if (string[i++] != substring[j])
                    break;
            }
            if (substring[j] != '\0')
                place = 0;
            else
                flag = 0;
        }
    }
    if (place)
    {
        int l1 = strlen(substring), l2 = strlen(replacestring);
        for (i = 0; string[i + place + l1] != '\0'; i++)
            replacestring[l2 + i] = string[place + l1 + i];
        replacestring[l2 + i] = '\0';
        string[place] = '\0';
        cout << string << replacestring << endl;
    }
    else
        cout << string << endl;
    return 0;
}