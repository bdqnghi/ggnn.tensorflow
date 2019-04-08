int main()
{
   int A,B,C;
   int a,b,c;
   a=(B>A)+(C==A);
   b=(A>B)+(A>C);
   c=(C>B)+(B>A);
   for(A=1;A<4;A++)
     for(B=1;B<4;B++)
       for(C=1;C<4;C++)
          if(((A>B&&a<b)||(A==B&&a==b)||(A<B&&a>b))
              +((A>C&&a<c)||(A==C&&a==c)||(A<C&&a>c))
               +((B<C&&b>c)||(B>C&&b<c)||(B==C&&b==c))==3)
         {
          cout<<"BCA";
          }
 return 0;
}