int main()
{
    int a,b,c,a1,b1,c1,p=0;   //a,b,c???,a1,b1,c1?????p???,?????1 
    for (a=1;a<4;a++)
    {
        for (b=1;b<4;b++)
        {
            for (c=1;c<4;c++)
            {
                a1=(b>a)+(c==a);
                b1=(a>b)+(a>c);
                c1=(c>b)+(b>a);     //??a,b,c???? 
                if ((a1-b1)*(a-b)<0&&(a1-c1)*(a-c)<0&&(b1-c1)*(b-c)<0)
                {
                   p=1;
                   break;
                }   //????p?1????? 
            }
            if (p==1) break;
        }    //????p?1????? 
        if (p==1) break;
    }        //????p?1????? 
    if(a>b&&b>c) cout<<"CBA";
    if(a>c&&c>b) cout<<"BCA";
    if(b>a&&a>c) cout<<"CAB";
    if(b>c&&c>a) cout<<"ACB";
    if(c>a&&a>b) cout<<"BAC";
    if(c>b&&b>a) cout<<"ABC";   //??????? 
    return 0;
}