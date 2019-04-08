/**
 * @file ???
 * @author ???
 * @date 11-17
 * @description ??????
 */
int main()
{
    int a, b, c, sa, sb, sc, i;
    for (a = 1; a <= 3; a ++)
        for (b = 1; b <= 3; b ++)
            for (c = 1; c <= 3; c ++)
            {
                sa = 0; sb = 0; sc = 0;
                if (b > a) { sa ++; sc ++;}
                if (c == a) sa ++;
                if (a > b) sb ++;
                if (a > c) sb ++;
                if (c > b) sc ++;
                if (((a + sa) == 3) && ((b + sb) == 3) && ((c + sc) == 3))
                    for (i = 1; i <= 3; i++)
                    {
                        if (a == i) cout << 'A';
                        if (b == i) cout << 'B';
                        if (c == i) cout << 'C';
                    }
            }  
    return 0;
}
           