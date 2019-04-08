//
//  main.cpp
//  Homework_11_18
//  ?????
//  Created by airjcy on 11/28/12.
//  Copyright (c) 2012 airjcy. All rights reserved.
//






int compare(const void *a,const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    if (x < y) {
        return -1;
    }
    if (x == y) {
        return 0;
    }
    return 1;
}

void initArrays(int *a,int *b,int m,int n)
{
    int i;
    for (i = 0; i < m; i ++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i ++) {
        cin >> b[i];
    }
}

void sort(int *a,int *b,int m,int n)
{
    qsort(a,  m, sizeof(int), compare);
    qsort(b,  n, sizeof(int), compare);
}

void append(int *a,int *b,int *c,int m,int n)
{
    int i;
    for (i = 0; i < m; i ++) {
        c[i] = a[i];
    }
    for (i = m; i < m + n; i ++) {
        c[i] = b[i - m];
    }
}

void print(int *a,int n)
{
    int i;
    for (i = 0; i < n - 1; i ++) {
        cout << a[i] << " ";
    }
    cout << a[i];
}


int main(int argc, const char * argv[])
{
    //????????
    int m,n;
    cin >> m >> n;
    int a[m];
    int b[n];
    initArrays(a, b, m, n);
    sort(a, b, m, n);
    int c[m + n];
    append(a, b, c, m, n);
    print(c, m + n);
    return 0;
}
