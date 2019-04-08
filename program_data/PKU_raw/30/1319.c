
//
//  main.cpp
//  ?7???????
//
//  Created by ? ?? on 12-10-8.
//  Copyright (c) 2012? ? ??. All rights reserved.
//


int main()
{
    int n;
    cin >> n;
    
    int a , b , c , sum = 0 , k;
    
    for (int i=1; i<=n; i++)
    {
        //sum=0;
        
        a=i/10;
        b=i%10;
        //c=i-100*a-10*b;
        
        if (i%7!=0&&a!=7&&b!=7)
        {
            sum += i * i;
        }
        
        //k=k+sum;
    }
    cout << sum <<endl;
    
    return 0;
    
    
}
