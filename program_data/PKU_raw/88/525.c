//
//  main.cpp
//  Homework
//
//  Created by ??? on 13-12-4.
//  Copyright (c) 2013? ???. All rights reserved.
//


int main()
{
    char a[31];
    cin.getline(a,31);
    char *p=a;
    for(int i=0;i<31;i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
            cout<<*(p+i);
        else
            if(*(p+i+1)>='0'&&*(p+i+1)<='9')
               cout<<endl;
    }
    return 0;
}