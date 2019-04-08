//
//  main.cpp
//  poj
//
//  Created by ChuPan,Wong on 9/27/13.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//


int main(int argc, const char * argv[])
{
    int num[20];
    num[0]=num[1]=1;
    for(int i=2;i<20;i++){
        num[i] = num[i-1]+num[i-2];
    }
    int n;
    cin>>n;
    int x;
    while(n--){
        cin>>x;
        cout<<num[x-1]<<endl;
    }
    return 0;
}
