/*
 *???: 1.cpp
 *??????
 *????: 2012-10-30
 *??: ???????????
 */


int main ()
{
    int n = 0;
    double a = 0, b = 0, c = 0, Delta = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        Delta = b * b - 4 * a * c;
        cout << fixed << setprecision(5);
        if (Delta > 0)
            cout << "x1=" << ((0 - b) + sqrt(Delta)) / (2 * a) << ";"
            << "x2=" << ((0 - b) - sqrt(Delta)) / (2 * a) << endl;//delta??0
        if (Delta == 0)
            cout << "x1=x2=" << (0 - b) / (2 * a) << endl;//delta??0
        if (Delta < 0)
            cout << "x1=" << (0 - b) / (2 * a) << "+" << sqrt((-1) * Delta) / (2 * a) << "i;"
            << "x2=" << (0 - b) / (2 * a) << "-" << sqrt((-1) * Delta) / (2 * a) << "i" << endl;//delta??0
    }
    return 0;
}