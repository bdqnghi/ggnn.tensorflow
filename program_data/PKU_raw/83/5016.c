int main ()
{
    int x[2][10];
    int n,i,j;
    float jidian=0,s=0;
    scanf("%d",&n);
    for (i=0;i<2;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
   for (i=0;i<n;i++)
   {
       if (x[1][i]<60)
       jidian=jidian+0;
       if (x[1][i]>=60&&x[1][i]<=63)
       jidian=jidian+1.0*x[0][i];
       if (x[1][i]>=64&&x[1][i]<=67)
       jidian=jidian+1.5*x[0][i];
       if (x[1][i]>=68&&x[1][i]<=71)
       jidian=jidian+2.0*x[0][i];
       if (x[1][i]>=72&&x[1][i]<=74)
       jidian=jidian+2.3*x[0][i];
       if (x[1][i]>=75&&x[1][i]<=77)
       jidian=jidian+2.7*x[0][i];
       if (x[1][i]>=78&&x[1][i]<=81)
       jidian=jidian+3.0*x[0][i];
       if (x[1][i]>=82&&x[1][i]<=84)
       jidian=jidian+3.3*x[0][i];
        if (x[1][i]>=85&&x[1][i]<=89)
        jidian=jidian+3.7*x[0][i];
       if (x[1][i]>=90&&x[1][i]<=100)
        jidian=jidian+4.0*x[0][i];
   }
   for (i=0;i<n;i++)
   {
       s=s+x[0][i];
   }
   printf ("%.2f",jidian/s);
      return 0;
}
