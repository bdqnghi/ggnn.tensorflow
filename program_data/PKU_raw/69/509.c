//
//  main.cpp
//  HomeWork_11.14.Functions
//  ?????
//  Created by ??? on 11/25/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//

//#include <string>


void delZero(char a[])
{
    int i = 0;
    int count = 0;
    for (i = 0; i < MAXNUM; i ++) {
        if (a[i] == '0') {
            count ++;
        }
        if (a[i] != '0') {
            break;
        }
    }
    for (i = 0; a[i + count] != '\0'; i ++) {
        a[i] = a[i + count];
    }
    int j;
    for (j = 0; j < count; j ++) {
        a[i + j] = '\0';
    }
}



int addWorker(int a[],int na,int b[],int nb,int c[]);

//???????c????????
int add(char a[],char b[],int c[])
{
    int na = 0;
    int nb = 0;
    int _a[MAXNUM];
    int _b[MAXNUM];
    memset(_a, 0, sizeof(_a));
    memset(_b, 0, sizeof(_b));
    //????
    while (a[na] == '0') {
        na ++;
    }
    while (a[na] != '\0') {
        _a[na] = (int)(a[na] - '0');
        na ++;
    }
    while (b[nb] != '\0') {
        _b[nb] = (int)(b[nb] - '0');
        nb ++;
    }

    //????????????
    if (na > nb) {
        
        return (addWorker(_a, na, _b, nb, c));
    }
    else
    {
        return addWorker(_b, nb, _a, na, c);
    }
     
}

//??????
int addWorker(int a[],int na,int b[],int nb,int c[])
{
    

    
    //???????????
    int nc = na + 1;
    int l = nc;
    
    //????
    na --;
    nb --;
    nc --;
    
    //????
    while (nb >= 0)
    {
        //????
        int carry = 0;
        if (a[na] + b[nb] > 9) {
            carry = 1;
        }
        c[nc] += (a[na] + b[nb]) % 10;
        if (c[nc] == 10) {
            int i = nc;
            while (c[i] == 10) {
                c[i] = 0;
                c[i - 1] += 1;
                i --;
            }
        }
        c[nc - 1] += carry;
        // ????? 999999 + 1????
        if (c[nc - 1] == 10) {
            int i = nc;
            while (c[i - 1] == 10) {
                c[i - 1] = 0;
                c[i - 2] += 1;
                i --;
            }
        }
        //cout << c[nc]<<endl;
        nb --;
        na --;
        nc --;
    }
    //???????????????????
    while (na >= 0) {
        c[nc] += a[na];
        //?????? 9999 + 1
        if (c[nc] == 10) {
            int i = nc;
            while (c[i] == 10) {
                c[i] = 0;
                c[i - 1] += 1;
                i --;
            }
        }
      //  cout << c[nc]<<endl;
        na --;
        nc --;
        
    }
    //c[nc]?????????????????-1
    if (c[nc] == 0) {
        return l - 1;
    }
    return l;
}

int main(int argc, const char * argv[])
{
    char a[MAXNUM];
    char b[MAXNUM];
    int  c[MAXNUM];
    memset(c, 0, sizeof(c));
    cin >> a;
    cin >> b;
    
    delZero(a);
    delZero(b);

    //?n??????
    int n = add(a, b, c);

    int i = 0;
    //???0??
    while (c[i] == 0) {
        i ++;
    }
    while (i >= MAXNUM) {
        cout << 0;
        return 0;
    }
    int j;
    for (j = 0; j < n; j ++) {
        cout << c[i + j];
    }
 //   cout << endl << n;
    
    
}
