int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    for (a = 1;a <= 5;a++)
        for (b =1;b <= 5;b++)
            for (c = 1;c <= 5;c++)
               for (d = 1;d<=5;d++)
                   for (e = 1;e<=5;e++)
                   {
                       if (a * b * c * d * e==120 && a + b + c + d + e == 15)
                       {
                             f = (e==1);
                             g = (b==2);
                             h = (a==5);
                             i = (c!=1);
                             j = (d==1);
                             if (f + g + h + i + j==2)
                             {
                                   if ((a == f || b == g || c == h || d == i || e == j) && (a == f + 1 || b == g + 1 || c == h + 1 || d == i + 1 || e == j + 1) && e != 2 && e != 3)
                                   cout << a << " " << b << " " << c << " " << d << " " << e;
                             }
                       }
                   }
    
    return 0;
}
       