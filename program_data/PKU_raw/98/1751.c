//
//  main.cpp
//  Homework
//
//  Created by ??? on 13-12-4.
//  Copyright (c) 2013? ???. All rights reserved.
//


int main()
{
    int n,s=0,e=80;
    char a[3200]={0};
    
    cin>>n;//n??????
    cin.get();
    cin.getline(a,3200);
    a[strlen(a)]=' ';
    
    while(1)
    {
        while(a[e]!=' ')
            e--;
        for(int i=s;i<e;i++)
            cout<<a[i];
        cout<<endl;
        if(a[e+1]==0)
            return 0;
        s=e+1;
        e=s+80;
    }
}