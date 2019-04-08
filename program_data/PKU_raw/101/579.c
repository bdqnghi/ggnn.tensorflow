int main()
{
    int A,B,C,i; int D,E,F,H,I,J;
    for(A=1;A<=3;A++)
     for(B=1;B<=3;B++)
      for(C=1;C<=3;C++)
      {

         D=(B>A);H=(C==A);
         E=(A>B);I=(A>C);
         F=(C>B);J=(B>A);

         if (D+H+A==3 && E+I+B==3 && F+J+C==3)
              {
                  char a[4];
                  a[A]='A';a[B]='B';a[C]='C';
                  for(i=1;i<=3;i++) cout<<a[i];
              }
      }
  return 0;
}
