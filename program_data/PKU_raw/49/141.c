/*
  *@ title:?????
  *@ date:2010-11-28
  *@ author:1000012899 ???
  *@ description: ???????
 */
char c[501];
void huiwen(int, int);
int main()
{
    int l, i, j;
    cin.getline(c,501);
    l = strlen(c);
    for (i = 2; i <= l ; i++)
        for (j = 0; j <= l-i ; j ++)
            huiwen(j, i);
    return 0;
} 
void huiwen(int a, int b)
{
    int i, j, n;
    for (i = 1; i <= (b + 1) / 2; i ++)
        if (c[a-1+i] != c[a+b-i]) break;
    if (i == (b + 1) / 2 + 1)
    {
        for (i = 1 ; i <= b; i ++) cout << c[a-1+i];
        cout << endl;
    }
}   

