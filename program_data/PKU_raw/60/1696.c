//
//  main.cpp
//  test
//
//  Created by ? ? on 12-11-28.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

int pri(int x)
{
    int k=sqrt(x),i;
    for (i=2; i<=k; i++) {
        if (x%i==0) {
            break;
        }
    }
    if (i==k+1) {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{int i,j=0,n,prime[10000];
    cin>>n;
    if (n<5) {
        cout<<"empty";
        return 0;
    }
    for (i=3; i<=n-2; i+=2) {
        if (pri(i)&&pri(i+2)) {
            cout<<i<<" "<<i+2<<endl;
        }
    }
    
    
    return 0;
}
