int main()
{
    int sum1=0,sum2=0,sum3=0;
    for(int A=0;A<3;A++)
    {
       for(int B=0;B<3;B++)
       {
               for(int C=0;C<3;C++)
               {
                  if((C!=A)&&(C!=B)&&(A!=B))
                  {
                     sum1=(B>A)+(C==A);
                     sum2=(A>B)+(A>C);
                     sum3=(C>B)+(C>A);
                     if((A>B)&&(B>C)&&(sum1<sum2)&&(sum2<sum3))
                     {
                        cout<<"CBA"<<endl;
                     }
                      if((A>C)&&(C>B)&&(sum1<sum3)&&(sum3<sum2))
                     {
                        cout<<"BCA"<<endl;
                     }
                      if((B>A)&&(A>C)&&(sum2<sum1)&&(sum1<sum3))
                     {
                        cout<<"CAB"<<endl;
                     }
                      if((B>C)&&(C>A)&&(sum2<sum3)&&(sum3<sum1))
                     {
                        cout<<"ACB"<<endl;
                     }
                      if((C>B)&&(B>A)&&(sum3<sum2)&&(sum2<sum1))
                     {
                        cout<<"ABC"<<endl;
                     }
                      if((C>A)&&(A>B)&&(sum3<sum1)&&(sum1<sum2))
                     {
                        cout<<"BAC"<<endl;
                     }
                  } 
               }
       }                                
    }
    return 0;
}
