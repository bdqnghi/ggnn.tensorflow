//
//  main.cpp
//  square
//
//  Created by blues cookie on 13-1-12.
//  Copyright (c) 2013? blues cookie. All rights reserved.
//

int a[100][100];
int findmin(int c,int low,int n)
{
    int min;
    if(c==1)//?hang??
    {
        int i;min=a[low][0];
        for(i=0;i<n;i++)
        {
            if(a[low][i]<min) min=a[low][i];
        }
    }
    if(c==0)//min lie
    {
        int i;min=a[0][low];
        for(i=0;i<n;i++)
        {
            if(a[i][low]<min) min=a[i][low];
        }
    }
    return min;
}
int dec(int n,int sum)
{
    if(n==1) return sum;
    int i,j,k,min;
    for(i=0;i<n;i++)
    {
        min=findmin(1,i,n);
        for(j=0;j<n;j++) a[i][j]=a[i][j]-min;
    }
    for(i=0;i<n;i++)
    {
        min=findmin(0,i,n);
        for(j=0;j<n;j++) a[j][i]=a[j][i]-min;
    }//??????
    sum=sum+a[1][1];
    for(i=0;i<n;i++)
        for(j=1;j<n-1;j++)
        {
            a[j][i]=a[j+1][i];
        }
    for(i=0;i<n;i++)
        for(j=1;j<n-1;j++)
        {
            a[i][j]=a[i][j+1];
        }
    return dec(n-1,sum);
}
int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    int i,j,s,t;
    for(int k=1;k<=n;k++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++) cin>>a[i][j];//input suqare
        cout<<dec(n,0)<<endl;
    }
    return 0;

}
