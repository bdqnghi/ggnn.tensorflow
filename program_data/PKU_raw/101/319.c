int main()
{
    int A, B, C;
    int suma, sumb, sumc;
    for (A = 0; A <= 2; A++)
    {
        for (B = 0; B <= 2; B++)
        {
            for (C = 0; C <= 2; C++)
            {
                suma = (B > A) + (C == A);
                sumb = (A > B) + (A > C);
                sumc = (C > B) + (B > A);
                if (!(A <= B && suma <= sumb || A <= C && suma <= sumc || B <= C && sumb <= sumc || 
                A >= B && suma >= sumb || A >= C && suma >= sumc || B >= C && sumb >= sumc))
                {
                     if (suma == sumb)
                     {
                              if (sumc >= suma)
                              cout << "BAC" << endl;
                              else
                              cout << "CBA" << endl;
                     }
                     if (suma > sumb)
                     {
                                  if (sumc >= suma)
                                  cout << "CAB" << endl;
                                  if (sumc <= sumb)
                                  cout << "ABC" << endl;
                                  else
                                  cout << "ACB" << endl;
                     }
                     if (suma < sumb)
                     {
                                  if (sumc >= sumb)
                                  cout << "CBA" << endl;
                                  if (sumc <= suma)
                                  cout << "BAC" << endl;
                                  else
                                  cout << "BCA" << endl;
                     } 
                }
            }
        }
    }
    return 0;
}

    
      