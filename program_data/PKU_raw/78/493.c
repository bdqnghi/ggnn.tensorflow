int main()
{
    int f[5];
    char m[5]={'0','z','q','s','l'};
    int a,b,c,d,i,j,k;
    char n;
    for (a=1;a<=5;a++)
        for (b=1;b<=5;b++)
            for (c=1;c<=5;c++)
                for (d=1;d<=5;d++)
    if ((a+b)==(c+d))
    if ((a+d)>(b+c))
    if ((a+c)<b)
    {
        f[1]=a;f[2]=b;f[3]=c;f[4]=d;
        break;
    }
    for (i=2;i<=4;i++)
      for (j=1;j<i;j++)
      if (f[i]>f[j])
      {
        k=f[i];f[i]=f[j];f[j]=k;
        n=m[i];m[i]=m[j];m[j]=n;
      }
    for (i=1;i<=4;i++)
    cout <<m[i] <<" "<<f[i]*10 <<endl;
    return 0;
}
