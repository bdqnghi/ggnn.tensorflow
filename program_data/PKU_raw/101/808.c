int main()
{
    int A=0,B=0,C=0,a2,b2,c2,a1,b1,c1;
    for(A=0;A<3;A++)
    {
        for(B=0;B<3;B++)
        {
            for(C=0;C<3;C++)    //??????ABC?????
            {
                a1=B>A;
                a2=C==A;
                b1=A>B;
                b2=A>C;
                c1=C>B;
                c2=B>A;     //??????
                if(A>B&&a1+a2<b1+b2)
                {
                    if(B>C&&b1+b2<c1+c2)
                        cout<<"CBA";
                    else if(B<C&&b1+b2>c1+c2)
                    {
                        if(A>C&&a1+a2<c1+c2)
                            cout<<"BCA";
                        else if(A<C&&a1+a2>c1+c2)
                            cout<<"BAC";
                    }
                }
                else if(A<B&&a1+a2>b1+b2)
                {
                    if(A>C&&a1+a2<c1+c2)
                        cout<<"CAB";
                    else if(A<C&&a1+a2>c1+c2)
                    {
                        if(C>B&&c1+c2<b1+b2)
                            cout<<"ABC";
                        else if(C<B&&c1+c2>b1+b2)
                            cout<<"ACB";            //??????????
                    }
                }
            }
                
        }
    }
    return 0;
}