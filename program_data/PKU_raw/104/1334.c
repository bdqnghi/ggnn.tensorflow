//
//  main.cpp
//  Homework
//
//  Created by ??? on 13-11-17.
//  Copyright (c) 2013? ???. All rights reserved.
//


int main()
{
    int x,y,sx,sy,nx[11],ny[11];
    cin>>x>>y;
    nx[10]=x;
    ny[10]=y;
    
    for(int i=10;i>0;i--)
        nx[i-1]=nx[i]/2;
    for(int i=10;i>0;i--)
        ny[i-1]=ny[i]/2;

    for(sx=0;sx<11;sx++)
        if(nx[sx]!=0)
        {
            sx--;
            break;
        }
    for(sy=0;sy<11;sy++)
        if(ny[sy]!=0)
        {
            sy--;
            break;
        }

    for(int i=0;i<11;i++)
    {
        if(nx[sx]!=ny[sy])
            break;
        sx++;
        sy++;
    }
    
    cout<<nx[sx-1]<<endl;
    
    return 0;
}
