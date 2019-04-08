//*4.cpp???e??  **
//*????? 1300012896 **
//*???2013.10.9 *
//********************************




int main()
{
    int n, k;
    double a, b, c, x1, x2, D, d, e;
    cin >> n ;
    for (k = 1; k <= n; k++)
        {cin >> a >> b >> c;
        D = b * b - 4 * a * c;
        if (b != 0)
            b = -b;
        if (D > 0)
           {x1 = (double)(b + sqrt(D))/(2 * a);
            x2 = (double)(b - sqrt(D))/(2 * a);
            cout << fixed;
            cout << "x1=" << setprecision(5) << x1 << ";" << "x2=" << x2 << endl;}
        else if (D < 0)
           {d = (double)(b) / (2 * a);
            e = (double)sqrt (-D) / (2 * a);
            cout << "x1=" << setprecision(5) << d << "+" << e << "i"<< ";" <<"x2=" << d << "-" << e << "i"<< endl;}
        
        else
             {x1 = (double)(b + sqrt(D))/(2 * a);
            cout << fixed;
            cout << "x1=x2=" << setprecision(5) << x1 << endl;}

        }
    return 0;
}
