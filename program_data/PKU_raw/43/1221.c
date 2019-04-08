//***************************** 
//* &sup3;&Igrave;&ETH;ò&Atilde;&ucirc;&pound;&ordm; &cedil;&ccedil;&micro;&Acirc;°&Iacute;&ordm;&Otilde;&sup2;&Acirc;&Iuml;&euml;    ** 
//* ×÷&Otilde;&szlig;&pound;&ordm; &Agrave;&icirc;&Otilde;&aelig;&Ograve;&raquo; 1300012948 ** 
//* &Ecirc;±&frac14;&auml;&pound;&ordm; 2013.10.24        ** 
//*****************************
int main()
{
    int m, a, b, k, n;
    cin >> m;
    for(int i = 3; i <= (m / 2); i += 2)
    {
            a = (int)sqrt(i * 1.0);
            for(k = 2; k <= a + 1; k++)
            {
                    if(i % k == 0)
                    break;
                    else
                    continue;
            }
            if(k > (a + 1))
            {
                 b = (int)sqrt((m - i) * 1.0);
                 for(n = 2; n <= b + 1; n++)
                 {
                         if((m - i) % n == 0)
                         break;
                         else
                         continue;
                 }
                 if(n > (b + 1))
                 cout << i << " " << (m - i) << endl;
            }
    }
    return 0;
}