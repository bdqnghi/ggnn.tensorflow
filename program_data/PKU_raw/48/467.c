/**
* @file homework.cpp
* @author ???
* @date 2010-11-24
* @description
* ??????: ????????
*/
int a[11][11] = {0}, k;
void f(int a[][11]);
int main()
{
    int m, n;
    cin >> m >> n;
    k = n;
    a[5][5] = m;
    f(a);
    return 0;
}

void f(int c[][11])
{
    int s, t, b[11][11];
    for(t = 0;t < 121;t++)
    {
        b[t / 11][t % 11] = *(*a + t);
    }
    for(s = 1;s < 10;s++)
    {
        for(t = 1;t < 10;t++)
        {
            a[s][t] = 2 * b[s][t] + b[s][t - 1] + b[s][t + 1] + 
                      b[s - 1][t] + b[s - 1][t - 1] + b[s - 1][t + 1] +
                      b[s + 1][t] + b[s + 1][t - 1] + b[s + 1][t + 1];
        }
    }
    cout << endl;
    if(k > 1)
    {
        k--;
        f(a);
    }
    if(k == 1)
    {
        for(s = 1;s < 10;s++)
        {
            for(t = 1;t < 9;t++)
            {
                cout << a[s][t] << " ";
            }
            cout << a[s][9] << endl;
        }
        k--;
    }
}
