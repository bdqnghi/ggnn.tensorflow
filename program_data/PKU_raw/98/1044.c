//
//  main.cpp
//  ????
//
//  Created by mac on 12-12-12.
//  Copyright (c) 2012? mac. All rights reserved.
//

int main(){
    int n,num;
    char str[1000][1000];
    cin>>n;
    char (*p)[1000];
    for(int i=0;i<n;i++)
    cin>>str[i];
    cout<<*str;
    num=strlen(*str);
    for(p=str+1;p<n+str;p++){
        num=num+strlen(*p);
        if(num>=80){
            cout<<endl;
            num=strlen(*p);
            cout<<*p;
        }
        else{
            cout<<" "<<*p;
            num=num+1;}
    }
    return 0;
}
