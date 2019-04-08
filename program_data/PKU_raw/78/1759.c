//****************************************
//*?????? **
//*??????  1100012927       **
//*???2011.10.14                          **
//****************************************

int main ()
{
    int z, q, s, l, a[4], temp, i, j;
    char b[5] = {'z', 'q', 's', 'l', '\0'}, temp1;
    for (z = 1; z < 6; z++)
        for (q = 1; q < 6; q++)
            for (s = 1; s < 6; s++)
                for (l = 1; l < 6; l++)
                    if (z + q == s + l && z + l > s + q && z + s < q)
                    {
                        a[0] = z; a[1] = q; a[2] = s; a[3] = l;
                        for (j = 0; j < 3; j++)
                            for (i = 0; i < 3 - j; i++)
                            {
                                if (a[i] < a[i + 1])
                                {
                                    temp = a[i]; a[i] = a[i + 1]; a[i + 1] = temp;
                                    temp1 = b[i]; b[i] = b[i + 1]; b[i + 1] = temp1;
                                }
                            }
                        for (i = 0;i < 4; i++)
                        {
                            a[i] = 10 * a[i];
                            cout << b[i] <<" "<< a[i] << endl;
                        }
                    }
    return 0;
}