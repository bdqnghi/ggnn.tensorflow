

int main()
{
    int a,b,c,d,e;
    int rank[6];

    for (a=1;a<=5;a++)
       for (b=1;b<=5;b++)
       if  (b!=a)
       for (c=1;c<=5;c++)
       if (c!=a&&c!=b)
       for (d=1;d<=5;d++)
       if (d!=a&&d!=b&&d!=c)
       for (e=1;e<=5;e++)
       if (e!=2&&e!=3&&e!=a&&e!=b&&e!=c&&e!=d)
       {
           rank[a]=(e==1);
           rank[b]=(b==2);
           rank[c]=(a==5);
           rank[d]=(c!=1);
           rank[e]=(d==1);
           if (rank[1]&&rank[2]&&!rank[3]&&!rank[4]&&!rank[5])//????????
           {
               cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
               return 0;
           }
       }
    return 0;
}
