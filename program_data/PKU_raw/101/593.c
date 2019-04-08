int main()
{
        int A, B, C;
        char a[4];
        for(A=1;A<=3;A++)
           for(B=1;B<=3;B++)
           {
                   if(A==B) continue;
                   C=6-A-B;
                   if((A+(B>A)+(C==A)==3)&&(B+(A>B)+(A>C)==3)&&(C+(C>B)+(B>A)==3)==1)
                   {
                           a[A]='A';
                           a[B]='B';
                           a[C]='C';
                           cout<<a[1]<<a[2]<<a[3]<<endl;
                           goto T;
                   }
           }
        T:
        return 0;
}
