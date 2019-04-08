//  ????
//  main.cpp
//  Homework
//
//  Created by ??? on 13-10-31.
//  Copyright (c) 2013? ???. All rights reserved.
//


int main()
{
    int n,m,total=0;
    
    cin>>n;
    char student[n];
    double dorm[n+2][n+2],tempdorm[n+2][n+2];//?????????????
    for(int i=1;i<n+1;i++)
    {
        cin>>student;
        for(int s=1;s<n+1;s++)
        {
            if(student[s-1]=='.')
                dorm[i][s]=1;
            if(student[s-1]=='#')
                dorm[i][s]=0;//0???????0 ????????
            if(student[s-1]=='@')
                dorm[i][s]=2;
        }
    }
    
    for(int i=1;i<n+1;i++)
        for(int j=1;j<n+1;j++)
            tempdorm[i][j]=dorm[i][j];
    
    cin>>m;//????
    for(int d=1;d<m;d++)
    {
        for(int i=1;i<n+1;i++)
            for(int j=1;j<n+1;j++)
            if(dorm[i][j]>1)
                {
                    tempdorm[i-1][j]=dorm[i-1][j]*dorm[i][j];//?tempdorm????????dorm??????????????????“??”?????????“??”???
                    tempdorm[i+1][j]=dorm[i+1][j]*dorm[i][j];
                    tempdorm[i][j-1]=dorm[i][j-1]*dorm[i][j];
                    tempdorm[i][j+1]=dorm[i][j+1]*dorm[i][j];
                }
        for(int i=1;i<n+1;i++)
            for(int j=1;j<n+1;j++)
                if(tempdorm[i][j]>1)
                    dorm[i][j]=2;
    }
    
    for(int i=1;i<n+1;i++)//????
        for(int j=1;j<n+1;j++)
            if(dorm[i][j]>1)
                total++;
    
    cout<<total<<endl;
    return 0;
}