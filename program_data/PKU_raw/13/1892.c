//
//  main.cpp
//  redundant_num
//
//  Created by ? ?? on 13-11-9.
//  Copyright (c) 2013? LEE. All rights reserved.
//

int main(int argc, const char * argv[])
{
    int n=0,i=0;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    
    int j=0,k=0,l=0;
    for(j=0;j<n-1;j++)
        for(k=j+1;k<n;k++)
        {if(a[j]==a[k])
        {   for(l=k;l<n-1;l++)
                {    a[l]=a[l+1];//???????????????
                    }     n--;//???????????????????
              k--;        //????????????

        }
        }
    
    
    

    for (i=0;i<n-1;i++)
        cout<<a[i]<<" ";
    cout<<a[n-1];
    
    
    
    
    return 0;
}



