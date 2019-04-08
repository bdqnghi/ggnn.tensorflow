int main ()
{
    int a,b,k=0;
    char c1[100];
    int d1[100],d2[100],c2[100];
    cin >>a;
    scanf("%s",c1);
    cin >>b;
    k=strlen(c1);
    int i;
    for(i=0;i<=k-1;i++)
    {
        if (48<=c1[i]&&c1[i]<=57)
           d1[i]=c1[i]-48;
        else if (65<=c1[i]&&c1[i]<=90)
           d1[i]=c1[i]-55;
        else d1[i]=c1[i]-87;
    }
    int s=0;
    int fc=1;
    for (i=k-1;i>=0;i--)
    {
        s=s+fc*d1[i];
        fc=fc*a;
    }
    i=0;
if (s==0)
      cout <<0 <<endl;
    while (s>0)
    {
        d2[i]=s%b;
        s=s/b;
        i++;
    }
    

    int g;
    for (g=0;g<=i-1;g++)
       if (d2[g]<=9)
          c2[g]=d2[g]+48;
        else c2[g]=d2[g]+55;
    for (g=i-1;g>=0;g--)
    cout <<(char)c2[g];
    return 0;


}
