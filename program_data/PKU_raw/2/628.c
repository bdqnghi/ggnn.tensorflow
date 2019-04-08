//
//  main.cpp
//  ????
//
//  Created by ???? on 13-12-25.
//  Copyright (c) 2013? ????. All rights reserved.
//

int main()
{
    
    struct author_book
    {
        int count;
        int book[999];
    } au[26];
    
    for(int k=0;k<26;k++)
    {
        au[k].count=0;
    }
    
    
    int m;
    cin>>m;
    
    
    for(int i=1;i<=m;i++)
    {
        int num;
        char a[26];
        cin>>num;
       cin.get();
        cin.getline(a,26);
        for(int k=0;k<strlen(a);k++)
        {
            int author_r=(int)(a[k]-'A');//?????
            au[author_r].book[  au[author_r].count  ]=num;
            au[author_r].count++;
        }
    }
    
    //find the max
    int max=0;
    int the_one=0;
    for(int i=0;i<26;i++)
    {
        //cout<<au[i].count<<endl;
        if(au[i].count>max)
        {
            max=au[i].count;
            the_one=i;
        }
    }
    
    //cout author
    char maxau='A'+the_one;
    cout<<maxau<<endl;
    cout<<au[the_one].count<<endl;
    //cout his books
    for(int i=0;i<au[the_one].count;i++)
    {
        cout<<au[the_one].book[i]<<endl;
    }
    
    return 0;
}