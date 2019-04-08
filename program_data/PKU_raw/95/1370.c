//
//  main.cpp
//  ??
//
//  Created by ???? on 13-11-13.
//  Copyright (c) 2013? ????. All rights reserved.
//

int main()

{
    char a1[80],a2[80];
    cin.getline(a1, 80);
    cin.getline(a2, 80);
    for(int i=0;i<=80;i++)
    {
        if(65<=a1[i]&&a1[i]<=90)
            a1[i]=a1[i]+32;
    }
    for(int i=0;i<=80;i++)
    {
        if(65<=a2[i]&&a2[i]<=90)
            a2[i]=a2[i]+32;
    }
    
    switch(strcmp(a1,a2))
    {
        case -1:cout<<'<';break;
        case 0:cout<<'=';break;
        case 1:cout<<'>';break;
    }
    return 0;
}
