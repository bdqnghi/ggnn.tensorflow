//
//  main.cpp
//  ????
//
//  Created by ???? on 13-12-26.
//  Copyright (c) 2013? ????. All rights reserved.
//



int main()
{
    char a[100];
    cin.getline(a,100);
    int num[100];
    int len=(int)strlen(a);
    //cout<<len;
    num[0]=0;
    int k=0;
    char b=a[0];
    for(int i=1;i<len;i++)
    {
        if(a[i]==b){  num[++k]=i;  }
        else {   cout<<num[k]<<' '<<i<<endl;  k--;}
    }
    
    return 0;
}
