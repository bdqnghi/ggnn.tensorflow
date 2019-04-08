//
//  File.cpp
//  shuzu
//
//  Created by blues cookie on 12-10-28.
//  Copyright (c) 2012? blues cookie. All rights reserved.
//

int main(){
    int n,i,ex,num;
    int k;
    cin>>n;
    num=n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cin>>ex;
    for(i=1;i<=n;i++)//??????n???
    {
        if(a[i]==ex)
        {
            for(k=i;k<n;k++)//?????????????????????
            {
                a[k]=a[k+1];
            }
            n=n-1;
            i=i-1;
        }
    }
   cout<<a[1];
    for(i=2;i<=n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}