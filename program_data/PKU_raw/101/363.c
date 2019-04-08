int main()
{
    int a,b,c,A,B,C;
    for(A=0;A<=2;A++)
      for(B=0;B<=2;B++)
        for(C=0;C<=2;C++)
        {
             a=b=c=0;
             if(B>A) a++;
             if(C==A) a++;
             if(A>B) b++;
             if(A>C) b++;
             if(C>B) c++;
             if(B>A) c++;
             if(A+a==2&&B+b==2&&C+c==2)
             {
                 if(A>B&&A>C)
                 {
                     if(B>C) printf("CBA");
                     if(C>B) printf("BCA");
                 }
                 if(B>A&&B>C)
                 {
                     if(A>C) printf("CAB");
                     if(C>A) printf("ACB");
                 }
                 if(C>B&&C>A)
                 {
                     if(B>A) printf("ABC");
                     if(A>B) printf("BAC");
                 }
             }
        }
}