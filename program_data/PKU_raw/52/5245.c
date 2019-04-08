

/*
 * xunhuanyidong.cpp
 *
 *  Created on: 2012-12-14
 *      Author: asus
 */

int main()
{
    int n = 0, m = 0;
    int a[205] = {0};
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> *(a + i);
    for(int i = m + n; i >= m + 1; i--)//??
        *(a + i) = *(a + i - m);
    for(int i = 1; i <= m ; i++)
        *(a + i) = *(a + i + n);
    for(int i = 1; i < n; i++)
        cout << *(a + i) << " ";
    cout << *(a + n) << endl;
    return 0;
}