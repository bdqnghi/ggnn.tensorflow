

int main()
{
    int a,b,c,A,B,C;              //??a,b,c???
    int i,j,t,m;                  //??????i,j,????t,m
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            for(c=0;c<3;c++)
            {
                if((a+(b>a)+(c==a))==(b+(a>b)+(a>c))&&(a+(b>a)+(c==a))==(c+(c>b)+(b>a))&&a!=b&&b!=c&&c!=a)            //?????a,b,c?????
                {A=a;
                B=b;
                C=c;}
            }
        }
    }
    int s[2][3]={{1,2,3},{A,B,C}};                  //?????a,b,c??????
    for(i=0;i<2;i++)
    {
        if(s[1][i]>s[1][i+1])
        {
            t=s[1][i];
            s[1][i]=s[1][i+1];
            s[1][i+1]=t;
            m=s[0][i];
            s[0][i]=s[0][i+1];
            s[0][i+1]=m;                            //?a,b,c?????
        }
    }
    for(j=0;j<3;j++)
    {
        if(s[0][j]==1)
        cout<<"A";
        if(s[0][j]==2)
        cout<<"B";
        if(s[0][j]==3)
        cout<<"C";                           //?????a,b,c?????
    }
    return 0;
}
