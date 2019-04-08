int main ()
{
    int A, B, C, D, E, a, b, c, d, e;
    for(A=1;A<=5;A++)
        for(B=1;B<=5;B++)
            for(C=1;C<=5;C++)
                for(D=1;D<=5;D++)
                      for(E=1;E<=5;E++)
                        {
                          a = (E == 1);
                          b = (B == 2);
                          c = (A == 5);
                          d = (C != 1);
                          e = (D == 1);
if(b == 1 && B != 2 && B != 1)
continue;
if(a == 1 && E != 1 && A != 1 && A != 2)
continue;
if(c == 1 && A != 5 && C != 1 && C != 2)
continue;
if(d == 1 && C == 1 && D != 1 && D != 2)
continue;
if(e == 1 && D != 1 && E != 1 && E != 2)
continue;

if((a + b + c + d + e == 2)&& (C != D) && (E != 2) && (E !=3) && (A != B)&& (B != 1)&& (A != C)&& (A != D)&& (A != E)&& (B != C)&& D !=4 && (B != D)&& (B != E)&& (C != E)&& (D != E) && A != 1 && B !=3  && D != 1 && E != 1 )

                          
                          cout << A << " " << B << " " << C << " " << D << " " << E << endl;
                        }
                  
                        return 0;
                        

}

