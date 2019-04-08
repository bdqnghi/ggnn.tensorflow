//
//  main.cpp
//  ?????
//
//  Created by ???? on 13-11-28.
//  Copyright (c) 2013? ????. All rights reserved.
//


int main()
{
    char sen[500];
    char *p;
    cin.getline(sen,500);
    p=sen;
    for(;*p;p++)
    {
        int flag;
        if(*p!=' '){cout<<*p;flag=0;}
        if(*p==' '&&flag==0){cout<<*p;flag++;}
        if(*p==' '&&flag>0)continue;
    }
    
        return 0;
}
