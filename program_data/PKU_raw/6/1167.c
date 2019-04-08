/*
 * 12-4.cpp
 *
 *  Created on: 2011-12-25
 *      Author: sony
 */

int main()
{
    int k, m, n;
    cin >> k;
    int u;
    for (u = 1; u <= k; u++) {
        int i, j;
        cin >> m >> n;
        int input[m][n];
        int (*p)[n] = input;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++)  cin >> *(*(p + i) + j);        //cin >> input[i][j];
        }
        int sum = 0;
        for (i = 0; i < m; i++) {
            sum += input[i][0] + input[i][n - 1];
        }
        for (j = 0; j < n; j++) {
            sum += input[0][j] + input[m - 1][j];
        }
        sum = sum - input[0][0] - input[0][n - 1] - input[m - 1][0] - input[m - 1][n - 1];
        cout << sum << endl;
    }
	return 0;
}
