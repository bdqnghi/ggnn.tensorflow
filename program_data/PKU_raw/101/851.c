int main()
{
    int a,b,c,ap,bp,cp;//??????abc??????????ap?bp?cp 
    for(a=1;a<=3;a++)
    {
            for(b=1;b<=3;b++)
            {
                    for(c=1;c<=3;c++)
                    {
                            ap=(b>a)+(c==a);
                            bp=(a>b)+(a>c);
                            cp=(c>b)+(b>a);//??ABC?????? 
                            if(a+ap==b+bp&&b+bp==c+cp) break;//????????????????? 
                    }
                    if(c<=3) break;//???? 
            }
            if(b<=3) break;
    }
    if(a<b&&b<=c)
    cout<<"ABC";
    else if(a<c&&c<=b)
    cout<<"ACB";
    else if(b<a&&a<=c)
    cout<<"BAC";
    else if(b<c&&c<=a)
    cout<<"BCA";
    else if(c<a&&a<=b)
    cout<<"CAB";
    else if(c<b&&b<=a)
    cout<<"CBA";//??abc????? 
    return 0;
}
    