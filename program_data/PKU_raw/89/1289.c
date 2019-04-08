int main()
{
    int n,i,a,b,c,d,e;
    int m[100000][2];
    scanf ("%d",&n);
    d=0;
    for (i=0;;i++)
    {
       scanf ("%d %d" ,&m[i][0],&m[i][1]);
       if ((m[i][0]==0)&&(m[i][1]==0))
        break;
      }
    for (c=0;c<n;c++)
    {
      b=0;
      for (a=0;a<i;a++)
       {
          if (m[a][1]==c)
            b++;
        }
      if (b==n-1)
        {
           for (e=0;e<i;e++)
           {
             if (m[e][0]==c)
              {
               d=2;
               break;
               }
            }
           if (d==0)
           {
            printf ("%d",c); 
            d=1;
            }
            break;
         }
      }
     if (d!=1)
        printf ("NOT FOUND");
     return 0;
}