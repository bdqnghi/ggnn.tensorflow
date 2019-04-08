
//
//  main.cpp
//  match
//
//  Created by blues cookie on 12-11-28.
//  Copyright (c) 2012? blues cookie. All rights reserved.
//

int length;
char a[1000];
char c[100];
int b[100];//???????????
int zkh=0;//????????
int match(int i)
{
    if(i==length) return 0;
    if(a[i]=='(')
    {
        zkh=zkh+1;
        c[i]='$';
        b[zkh]=i;
    }
    if(a[i]==')')
    {
        if(zkh==0)
        {
            c[i]='?';
        }
        if(zkh!=0)//????????
        {
            c[b[zkh]]=' ';
            zkh=zkh-1;
            c[i]=' ';
        }
    }
    if(a[i]!='(' && a[i]!=')')
    {
        c[i]=' ';
    }
    match(i+1);
}

int main(int argc, const char * argv[])
{
    int j,k,l;
    while(cin.getline(a,200))
    {
        zkh=0;
        length=strlen(a);
        for(j=0;j<length;j++)
        {
            cout<<a[j];
        }
        cout<<endl;//??????
        
        match(0);//??????
        
        for(l=0;l<length;l++)
        {
            cout<<c[l];
        }
        cout<<endl;
        
        
    }
}
