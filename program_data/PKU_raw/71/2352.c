//?????? 
//???2012.10.23 
//?????? 

int main()
{
    int i, n;
    int y, m1, m2;
    int d1, d2;
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        cin >> y >> m1 >> m2;
        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))//????? 
        {
            switch(m1)
            {
                case 1:
                    d1 = 1;
                    break;
                case 2:
                    d1 = 32;
                    break;
                case 3:
                    d1 = 61;
                    break;
                case 4:
                    d1 = 92;
                    break;
                case 5:
                    d1 = 122;
                    break;
                case 6:
                    d1 = 153;
                    break;
                case 7:
                    d1 = 183;
                    break;
                case 8:
                    d1 = 214;
                    break;
                case 9:
                    d1 = 245;
                    break;
                case 10:
                    d1 = 275;
                    break;
                case 11:
                    d1 = 306;
                    break;
                case 12:
                    d1 = 336;
                    break;
            }
            switch(m2)
            {
                case 1:
                    d2 = 1;
                    break;
                case 2:
                    d2 = 32;
                    break;
                case 3:
                    d2 = 61;
                    break;
                case 4:
                    d2 = 92;
                    break;
                case 5:
                    d2 = 122;
                    break;
                case 6:
                    d2 = 153;
                    break;
                case 7:
                    d2 = 183;
                    break;
                case 8:
                    d2 = 214;
                    break;
                case 9:
                    d2 = 245;
                    break;
                case 10:
                    d2 = 275;
                    break;
                case 11:
                    d2 = 306;
                    break;
                case 12:
                    d2 = 336;
                    break;
            }
            if ((d1 - d2) % 7 == 0) 
            cout << "YES" << endl;//??d1?d2??7?????"YES" 
            else
            cout << "NO" << endl;//??d1?d2???7??,??"NO" 
        }
        else//?????? 
        {
            switch(m1)
            {
                case 1:
                    d1 = 1;
                    break;
                case 2:
                    d1 = 32;
                    break;
                case 3:
                    d1 = 60;
                    break;
                case 4:
                    d1 = 91;
                    break;
                case 5:
                    d1 = 121;
                    break;
                case 6:
                    d1 = 152;
                    break;
                case 7:
                    d1 = 182;
                    break;
                case 8:
                    d1 = 213;
                    break;
                case 9:
                    d1 = 244;
                    break;
                case 10:
                    d1 = 274;
                    break;
                case 11:
                    d1 = 305;
                    break;
                case 12:
                    d1 = 335;
                    break;
            }
            switch(m2)
            {
                case 1:
                    d2 = 1;
                    break;
                case 2:
                    d2 = 32;
                    break;
                case 3:
                    d2 = 60;
                    break;
                case 4:
                    d2 = 91;
                    break;
                case 5:
                    d2 = 121;
                    break;
                case 6:
                    d2 = 152;
                    break;
                case 7:
                    d2 = 182;
                    break;
                case 8:
                    d2 = 213;
                    break;
                case 9:
                    d2 = 244;
                    break;
                case 10:
                    d2 = 274;
                    break;
                case 11:
                    d2 = 305;
                    break;
                case 12:
                    d2 = 335;
                    break;
            }
            if (( d1 - d2) % 7 == 0)
            cout << "YES" << endl;//??d1?d2??7?????"YES"
            else
            cout << "NO" << endl;//??d1?d2???7??,??"NO"
        }
    }
    return 0;
    
}
