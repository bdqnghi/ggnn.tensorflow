int main()
{
    int n, i, j;
    int location[11][3];
    int (*p)[3];
    cin >> n;
    for ( i = 1; i <= n; i++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            cin >> location[i][j];
        }
    }
    struct team
    {
           int a1;
           int a2;
           double distance;
    } zu[45], t;
    int k = 0;
    p = location;
    for ( i = 1; i < n; i++ )
    {
        for ( j = i + 1; j <= n; j++ )
        {
            zu[k].a1 = i;
            zu[k].a2 = j;
            int x, y, z;
            x = location[i][0] - location[j][0];
            y = location[i][1] - location[j][1];
            z = location[i][2] - location[j][2];
            zu[k].distance = sqrt ( x * x + y * y + z * z );
            k++;
        }
    }
    for ( i = 0; i < k - 1; i++ )
    {
        for ( j = i + 1; j < k; j++ )
        {
            if ( zu[i].distance - zu[j].distance < -0.01 )
            {
                 t = zu[i];
                 zu[i] = zu[j];
                 zu[j] = t;
            }
            else if ( fabs( zu[i].distance - zu[j].distance ) < 0.01 )
                 {
                      if ( zu[i].a1 > zu[j].a1 )
                      {
                           t = zu[i];
                           zu[i] = zu[j];
                           zu[j] = t;
                      }
                      else if ( zu[i].a1 == zu[j].a1 )
                           {
                                if ( zu[i].a2 > zu[j].a2 )
                                {
                                     t = zu[i];
                                     zu[i] = zu[j];
                                     zu[j] = t;
                                }
                           }
                 }
        }
    }
    for ( i = 0; i < k; i++ )
    {
        cout << "(" << location[zu[i].a1][0] << "," << location[zu[i].a1][1] << "," << location[zu[i].a1][2] << ")-("
             << location[zu[i].a2][0] << "," << location[zu[i].a2][1] << "," << location[zu[i].a2][2] << ")="
             << fixed << setprecision(2) << zu[i].distance << endl;
    }
    return 0;
}