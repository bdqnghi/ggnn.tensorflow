//
//  main.cpp
//  ????
//
//  Created by ? ? on 12-11-21.
//  Copyright (c) 2012? ? ?. All rights reserved.
//

int n;
int prime (int j)
{int i,k;
    k=sqrt(j);
    for (i=2;i<=k;i++)
    {if (j%i==0) {break;}}
    if (i>k) {return 1;
    }
    else return 0;
}

int main(int argc, const char * argv[])
{int i,j;
    cin>>n;
    for(i=6;i<=n;i+=2)
    {
        for (j=3; j<=i/2; j++) {
            if(prime(j)&&prime(i-j))
            {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;break;
            }
                
        }
    }
    return 0;
}
