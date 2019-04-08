int main(void)
{
    double a , b , c , n , i , panbieshi , x1 , x2 , d , e;
    cin >> n;
    for( i = 0 ; i < n ; i++ )
    {
        cin >> a >> b >> c;
        panbieshi = b * b - 4 * a * c;
        if( panbieshi > 0 )
        {
            x1 = ( - b + sqrt( b * b - 4.0 * a * c ) ) / ( 2.0 * a );
            x2 = ( - b - sqrt( b * b - 4.0 * a * c ) ) / ( 2.0 * a );
            cout << "x1=" << fixed << setprecision(5) << x1 << ";";
            cout << "x2=" << fixed << setprecision(5) << x2 << endl;
        }
        if( panbieshi == 0 )
        {
            x1 = ( - b + sqrt( b * b - 4.0 * a * c ) ) / ( 2.0 * a );
            cout << "x1=x2=" << fixed << setprecision(5) << x1 << endl;
        }
        if( panbieshi < 0 )
        {
            d = ( - b ) / ( 2.0 * a );
            e = sqrt( - b * b + 4.0 * a * c ) / ( 2.0 * a );
            if( d == -0 )
                d = 0;
            cout << "x1=" << fixed << setprecision(5) << d << "+" << e << "i" << ";";
            cout << "x2=" << fixed << setprecision(5) << d << "-" << e << "i" << endl;
        }
    }
    return 0;
}
