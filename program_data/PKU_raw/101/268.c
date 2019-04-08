int f(int a,int b)
{   int c;
    if(a>=b)
    c=1;
    else
    c=0;
    return c;
}
int main()
{
    int a,b,c,A,B,C,sum,g=0,s=0;
    for(A=1;A<4;A++)
    {
       for(B=1;B<4;B++)
       {
          for(C=1;C<4;C++)
          { 
             a = (B > A) + (C == A);
             b = (A > B) + (A > C);
             c = (C > B) + (B > A);
             sum = (f(A,B)+f(a,b)==1)+(f(B,C)+f(b,c)==1)+(f(C,A)+f(c,a)==1);
             if(sum == 3)
             {
             if(A>=B)
             {
               if(B>=C)
               cout << "ABC";
               else if(A>=C)
               cout << "ACB";
               else
               cout << "CAB";
             }
             else
             {
               if(A>=C)
               cout << "BCA";
               else if(B>=C)
               cout << "BAC";
               else
               cout << "CBA";
               }
             g=1;
             break;
             }
          }
       if(g==1)
       {
         s=1;
         break;
       }
       }
       if(s==1)
       break;
    }
    return 0;
}
             
