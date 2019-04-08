//
//  main.cpp
//  HomeWork_11.14.Functions
//  ????
//  Created by ??? on 11/19/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//

//#include <string>



//??n???????????from
int num;
void divide(int n,int from)
{

    int i;
    for (i = from; i < n; i ++) {
        if (n % i == 0) {
            if (n / i < i) {
                return;
            }
            num ++;
            divide(n / i, i);
        }
       
    }
}


// 20    2 10   2 2 5     4 5    5 4
int main(int argc, const char * argv[])
{
    
    int n;
    cin >> n;
    int i;
    int numberToDivide;
    for (i = 0; i < n; i++)
    {
        cin >> numberToDivide;
        num = 0;
        divide(numberToDivide, 2);
        cout << num + 1 << endl;
    }
     
//    num =0;
//    divide(20, 2);
//    cout << num + 1;
}
