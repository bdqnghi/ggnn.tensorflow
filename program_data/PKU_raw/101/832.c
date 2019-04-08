int main()
{
    int a,b,c,a1,a2,b1,b2,c1,c2,i,A,B,C;
    for(a=0;a<3;a++)
    for(b=0;b<3;b++)
    for(c=0;c<3;c++)
    {    
         a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;
        if(b<=a)a1=a1+1;
        if(c!=a)a2=a2+1;
        if(a<=b)b1=b1+1;
        if(a<=c)b2=b2=1;
        if(c<=b)c1=c1+1;
        if(b<=a)c2=c2+1;
        if(a1+a2==a&&b1+b2==b&&c1+c2==c)
        {A=a;B=b;C=c;}
        }
        for(i=0;i<3;i++)
        {
           if(A==i)cout<<"A";
           if(B==i)cout<<"B";
           if(C==i)cout<<"C";
           }
    return 0;
}