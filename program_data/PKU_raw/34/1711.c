//
//  main.cpp
//  Homework
//
//  Created by ??? on 13-11-20.
//  Copyright (c) 2013? ???. All rights reserved.
//


int jiaogu(int n)
{
    if(n==1)
    {
        cout<<"End"<<endl;
        return 0;
    }
    else
        if(n%2==1)
        {
            cout<<n<<"*3+1=";
            n=n*3+1;
            cout<<n<<endl;
            jiaogu(n);
        }
        else
        {
            cout<<n<<"/2=";
            n/=2;
            cout<<n<<endl;
            jiaogu(n);
        }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    jiaogu(n);
    return 0;
}
