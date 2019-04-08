/*
 * first.cpp
 *
 *  Created on: 2012-9-17
 *      Author: 120017625 ashley
 */

int main(){
    int n;
    cin>>n;
    int a[n];
    int i,j,num_odd,input;
    num_odd=0;
    for(i=1;i<=n;i++)//??????????? ????????
    {
        cin>>input;
        if(input%2==1)
        {
            num_odd=num_odd+1;//num_odd????????
            a[num_odd]=input;
        }
    }
    for(i=1;i<=num_odd;i++)//??????
    {
        for(j=1;j<num_odd;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    for(i=1;i<=num_odd;i++)
    {
        if(i!=num_odd) cout<<a[i]<<',';//????
        else cout<<a[i];
    }
    return 0;
}