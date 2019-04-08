//
//  main.cpp
//  ????
//
//  Created by mac on 12-10-28.
//  Copyright (c) 2012? mac. All rights reserved.
//

int main(){
    int n,i,a[1000],b[1000],c[1000]={0};//???????????
    cin>>n;//????????
    for(i=1;i<=n;i++)
        cin>>a[i]>>b[i]; //????????
    for(i=1;i<=n;i++){
        if(90<=a[i]&&a[i]<=140&&60<=b[i]&&b[i]<=90)//????
            c[i]=c[i-1]+1;
            else
                c[i]=0;
    }
    int max=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]>max)
            max=c[i];
        else
            max=max;
    }
    cout<<max<<endl;//?????
    return 0;//????
}