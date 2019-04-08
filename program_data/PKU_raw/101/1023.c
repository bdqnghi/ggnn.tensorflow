int main()
{
    int a,b,c;//a b c ????????????
    int A,B,C;//A B C ????????
    for(a=0;a<=2;a++)
        for(b=0;b<=2;b++)
            for(c=0;c<=2;c++)
            {
                if(a==b||b==c||a==c)//?????????????????????????
                    continue;
                A=2-a;//?????
                B=2-b;
                C=2-c;
                if(a == ((B > A)+(C == A)))//a????????
                if(b == ((A > B)+(A > C)))
                if(c == ((C > B)+(B > A)))
                {
                    for(int i=0;i<=2;i++)
                    {
                        if(i==A)//????????????????????
                            cout <<"A";
                        else if(i==B)
                            cout <<"B";
                        else if(i==C)
                            cout <<"C";
                    }
                        cout <<endl;
                }
            }
    return 0;
}