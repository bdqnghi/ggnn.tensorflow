
//
//  main.cpp
//  xunhuan
//
//  Created by blues cookie on 12-12-9.
//  Copyright (c) 2012? blues cookie. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int m,n,i,j,k;
    int a[100];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=n-m+1;i<=n;i++) *(a+i+m)=*(a+i);//??m????m
    for(i=n-m;i>=1;i--) *(a+i+m)=*(a+i);//?n-m?????
    for(i=1;i<=m;i++) *(a+i)=*(a+i+n);//?M?????
    for(i=1;i<=n-1;i++) cout<<a[i]<<' ';//?? ???
    cout<<a[n];
    return 0;

}
