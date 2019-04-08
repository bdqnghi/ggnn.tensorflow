int main()
{int A,B,C,a,b,c;
 char se[3]={0,0,0};   //????????????????????2\1\0??
 for(A=0;A<3;A++)
     {if(B!=A) for(B=0;B<3;B++)
      {if(C!=B&&C!=A) for(C=0;C<3;C++)   //?????? 
        {a=(B>A)+(C==A);   //???????? 
         b=(A>B)+(A>C);
         c=(C>B)+(B>A);
         if(a==2-A && b==2-B && c==2-C)
         {se[A]='A';   //?? 
         se[B]='B';
         se[C]='C';}
                  }}}

 cout<<se[0]<<se[1]<<se[2];

 return 0;
    } 
