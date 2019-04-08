//
//  main.cpp
//  ??3?5?7????
//
//  Created by ? ?? on 12-9-26.
//  Copyright (c) 2012? ? ??. All rights reserved.
//

int main()
{
    int m;
    cin>>m;
    
    if(m % 3 == 0)
        cout << 3;
    if (m % 5 == 0 && m % 3 == 0)
    {
        cout << " ";
        cout << 5;
    }
    else if (m % 5 == 0 && m % 3 != 0)
        cout << 5;
    if (m % 7 == 0)
    {
        if (m % 5 != 0 && m % 3 != 0)
        {
            cout << 7 ;
        
        }
        else
            cout << " " << 7 ;
    }
    
    if(m % 3 != 0 && m % 5 != 0 && m % 7 != 0)
        cout << "n" ;
    return 0;
}
