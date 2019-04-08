//
//  main.cpp
//  ??
//
//  Created by ? ? on 12-12-15.
//  Copyright (c) 2012? ? ?. All rights reserved.
//


void output(int *S)
{
    int k=0;
    for (; S[k]==0; k++) {
        ;
    }
    for (int i=k; i<41; i++) {
        cout<<S[i];
    }
}
void muti(int n)
{
    int S[41]={0};
    S[40]=1;
    for(int i=0;i<n;i++){
    for (int i=40; i>0; i--) {
        S[i]=S[i]*2;
    }
    for (int i=40; i>0; i--) {
        while (S[i]>9) {
            int x;
            x=S[i]/10;
            S[i]-=10*x;
            S[i-1]+=x;
        }
    }
    }
    output(S);
}

int main()
{
    int n;
    cin>>n;
    muti(n);
    return 0;
}
