int main()
{
    int A, B, C, D, E;
    int a, b, c, d, e;
    for (E = 1; E <= 5; E++)
    {
        if (E == 2 || E == 3)
        continue;
         for (B = 1; B <= 5; B++)
         {
              for (C = 1; C <= 5; C++)
              {
                   for (D = 1; D <= 5; D++)
                   {
                        for (A = 1; A <= 5; A++)
                        {
                            if (A * B * C * D * E!=120)
                              continue;
                            a = (E == 1);
                            b = (B == 2);
                            c = (A == 5);
                            d = (C != 1);
                            e = (D == 1);
                            if (a)
                            {
                                  if (A != 1 && A != 2)
                                  continue;
                            }
                            if(!a)
                            {
                                 if (A == 1 || A == 2)
                                 continue;
                            }
                            if (b)
                            {
                                  if (B != 1 && B != 2)
                                   continue;
                            }
                            if (!b)
                            {
                                 if ( B == 1 || B == 2)
                                 continue;
                            }
                             if (c)
                            {
                                  if (C != 1 && C != 2)
                                   continue;
                            }
                         if(!c)
                            {
                                 if (C == 1 || C == 2)
                                 continue;
                            }
                            if (d)
                            {
                                  if (D != 1 && D != 2)
                                   continue;
                            }
                           if(!d)
                            {
                                 if (D == 1 || D == 2)
                                 continue;
                            }
                            if (e)
                            {
                                  if (E != 1 && E != 2)
                                   continue;
                            }
                            if(!e)
                            {
                                 if (E == 1 || E == 2)
                                 continue;
                            }
                            cout << A << ' ' << B << ' ' << C << ' ' << D << ' ' << E;
                        }
                   }
              }
         }
    }

    return 0;    
}
