//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int x;
    cin>>x;
    for(int q=0;q<x;q++){
    int n,a=2,b=1;
    cin>>n;
    double Sum=0;
    for (int i=1; i<=n; i++) {
        Sum+=(float)a/b;
        int t=a;
        a+=b;
        b=t;
    }
    printf("%.3f\n",Sum);
    }
    return 0;
}
