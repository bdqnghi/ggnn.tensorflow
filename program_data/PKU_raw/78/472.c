int main ()
{
    int i,j,k,l,m,n;
    int a[4];
    char b[4]={'z','q','s','l'};
    for (i=1;i<6;i++)
    {
        a[0]=i;
        for (j=1;j<6;j++)
        {
            a[1]=j;
            for (k=1;k<6;k++)
            {
                a[2]=k;
                for (l=1;l<6;l++)
                {
                    a[3]=l;
                    if ((a[0]+a[1]==a[2]+a[3])+(a[0]+a[3]>a[2]+a[3])+(a[0]+a[2]<a[1])==3)
                    {
                      for (m=5;m>0;m--)
                      {
                          for (n=0;n<4;n++)
                          {
                              if (a[n]==m)
                              cout <<b[n] <<' ' <<m*10 <<endl;
                          }
                      }
                    }
                }
            }
        }
    }
    return (0);
}
