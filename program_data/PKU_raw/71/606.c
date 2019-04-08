
int main()
{
    int n, m1, m2, d, y, m, sum;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum = 0;
        d = 0;
        cin >> y >> m1 >> m2;
        if(m1 > m2)
        {
            m = m1;
            m1 = m2;
            m2 = m;
        }
        m = m1;
        while(m < m2)
        {
            switch(m)              //???????? 
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    d = 31; break;
                case 4:
                case 6:
                case 9:
                case 11:
                    d = 30; break;
                case 2:
                {
                    if((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)))
                        d = 29;       //?????2??29? 
                    else
                        d = 28;
                } break;
            }
            sum += d;                  //????? 
            m++;
        }
        if(sum % 7 == 0)                  //???????? 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
