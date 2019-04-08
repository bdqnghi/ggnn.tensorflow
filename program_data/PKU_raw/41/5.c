int main()
{
    int a,b,c,d,e,s=0;
    for(a=1;a<6;a++)
    {
        for(b=1;b<6;b++)
        {
            if(a==b)continue;
            for(c=1;c<6;c++)
            {
                if(a==c||b==c)continue;
                for(d=1;d<6;d++)
                {
                    if(a==d||b==d||c==d)continue;
                    e=15-a-b-c-d;
                    if(e==2||e==3)continue;
                    if(a<3&&e==1)s++;
                    if(a>2&&e!=1)s++;
                    if(b<3&&b==2)s++;
                    if(b>2)s++;
                    if(c<3&&a==5)s++;
                    if(c>2&&a!=5)s++;
                    if(d<3&&c!=1)s++;
                    if(d>2&&c==1)s++;
                    if(e<3&&d==1)s++;
                    if(e>2&&d!=1)s++;
                    if(s==5)
                    {
                        cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
                        return 0;
                    }
                    s=0;

                }
            }
        }
    }
}
