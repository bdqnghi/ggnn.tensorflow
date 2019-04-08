//
//  main.cpp
//  11.5homework
//  ??????
//  Created by ??? on 11/5/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//



void ySwap(int a[],int i,int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void yQsort(int a[],int left,int right)
{
    if (left > right) {
        return;
    }
    int key = a[left];
    int i = left;
    int j = right;
    while (i < j) {
        while (i < j && a[j] >= key) {
            j --;
        }
        ySwap(a, i, j);
        while (i < j && a[i] <= key) {
            i ++;
        }
        ySwap(a, i, j);
    }
    yQsort(a, left, i - 1);
    yQsort(a, i + 1, right);
}


int main(int argc, const char * argv[])
{

    int n = 0;
    cin >> n;
    int i = 0,t = 0;
    int a[n]; //???????
    int countOfUnevens = 0;
    for (i = 0; i < n; i  ++) {
        cin >> t;
        if (t % 2 != 0) {
            a[countOfUnevens] = t;
            countOfUnevens ++;
        }
    }
    yQsort(a, 0, countOfUnevens - 1);
    for (i = 0; i < countOfUnevens - 1; i ++) {
        cout << a[i] << ",";
    }
    cout << a[i];
}
