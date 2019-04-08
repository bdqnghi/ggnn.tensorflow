//********************************
//*???3.cpp   **
//*???????    **
//*?????? 1300012838 **
//*???2013.11.1  **
//********************************

int main()
{ 
    int x1, y1, x2, y2, a[101][101], b[101][101], c[101][101];
    cin >> x1 >> y1;
    for (int i = 1; i <= x1; i++)
        for (int j = 1; j <= y1; j++)
            cin >> a[i][j];
    cin >> x2 >> y2;
    for (int i = 1; i <= x2; i++)
        for (int j = 1; j <= y2; j++)
            cin >> b[i][j];
    for (int i = 1; i <= x1; i++)
    {
        for (int j = 1; j <= y2; j++)
        {
            c[i][j] = 0;
            for (int k = 1; k <= x2; k++)
                c[i][j] += a[i][k] * b[k][j];
            if (j == 1)
                cout << c[i][j];
            else
                cout << " " << c[i][j];
        } 
        cout << endl;
    }


    return 0;                    
}  