int main()
{
    int rest,m100,m50,m20,m10,m5,m1;//rest???????m100,m50,m20,m10,m5,m1??? 
    cin>>rest;
    m100=m50=m20=m10=m5=m1=0;//??? 
    while(rest>=100)//100??? 
    {
                    rest=rest-100;
                    m100++;
    }
    while(rest>=50)//50??? 
    {
                   rest=rest-50;
                   m50++;
    }
    while(rest>=20)//20??? 
    {
                   rest=rest-20;
                   m20++;
    }
    while(rest>=10)//10??? 
    {
                   rest=rest-10;
                   m10++;
    }
    while(rest>=5)//5??? 
    {
                  rest=rest-5;
                  m5++;
    }
    while(rest>=1)//1??? 
    {
                  rest=rest-1;
                  m1++;
    }
    cout<<m100<<endl<<m50<<endl<<m20<<endl<<m10<<endl<<m5<<endl<<m1;
    return 0;
} 
