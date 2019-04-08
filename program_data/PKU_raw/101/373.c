int main()
{
    int A = 0 , B = 0 , C = 0 ;
    int a1 , a2 , b1 , b2 , c1 , c2 ;
    for(A = 1 ; A <=3 ; A++)
    {
        for(B = 1 ; B <=3 ; B++)
        {
            for(C = 1 ; C<=3 ; C++)
            {
                a1=(B>A);
                a2=(C==A);
                b1=(A>B);
                b2=(A>C);
                c1=(C>B);
                c2=(B>A);
                if(((A+a1+a2)==(B+b1+b2))&&((B+b1+b2)==(C+c1+c2)))
                {
                    if((A<B)&&(B<C))
                        cout<<"A"<<"B"<<"C"<<endl;
                    if((A<C)&&(C<B))
                        cout<<"A"<<"C"<<"B"<<endl;
                    if((B<A)&&(A<C))
                        cout<<"B"<<"A"<<"C"<<endl;
                    if((B<C)&&(C<A))
                        cout<<"B"<<"C"<<"A"<<endl;
                    if((C<A)&&(A<B))
                        cout<<"C"<<"A"<<"B"<<endl;
                    if((C<B)&&(B<A))
                        cout<<"C"<<"B"<<"A"<<endl;    
                }
            }
        }
    }
    return 0 ;
}
    