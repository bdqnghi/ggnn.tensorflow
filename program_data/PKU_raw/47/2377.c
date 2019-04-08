//
//  main.cpp
//  nixu
//
//  Created by blues cookie on 12-12-9.
//  Copyright (c) 2012? blues cookie. All rights reserved.
//

int main(int argc, const char * argv[])
{
    int n,i,j,k;
    cin>>n;
    int a[n+3];
    int *p=a;
    for(i=0;i<n;i++) cin>>a[i];//????
    for(i=0;i<n/2;i++)//??
    {
        j=*(p+i);
        *(p+i)=*(p+n-i-1);
            *(p+n-i-1)=j;
    }
    for(i=0;i<n-1;i++) cout<<*(a+i)<<' ';
    cout<<*(a+n-1);
    return 0;
    
}
