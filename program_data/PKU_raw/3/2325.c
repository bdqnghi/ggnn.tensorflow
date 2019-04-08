//
//  main.cpp
//  hw
//
//  Created by ? ? on 12-12-13.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

int cmp(const void *a, const void *b)
{
    return(*(int *)a-*(int *)b);
}

int main()
{
    int n,k,num[1000]={0};
    cin>>n>>k;
    for (int i=0; i<n; i++) {
        cin>>num[i];
    }
    qsort(num, n, sizeof(int), cmp);
    if (k>num[0]+num[n-1]) {
        cout<<"no";
        return 0;
    }
    int p=0;
    for (int i=0; i<n; i++,p++) {
        int sum;
        for (int j=i+1; j<n; j++) {
            sum=num[i]+num[j];
            if (sum==k) {
                cout<<"yes";
                return 0;
            }
        }
    }
    if (p==n) {
        cout<<"no";
    }
    return 0;
}
