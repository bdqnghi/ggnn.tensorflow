//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-16.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int x,a[3]={3,5,7};
    cin>>x;
    int k;
    for (k=0; k<3; k++) {
        if (x%a[k]==0) {
            cout<<a[k];
            break;
        }
    }
    if (k==3) {
        cout<<"n";
        return 0;
    }
    for (int i=k+1; i<3; i++) {
        if (x%a[i]==0) {
            cout<<" "<<a[i];
        }
    }
    
    return 0;
}
