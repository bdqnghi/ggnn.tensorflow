int main()
{
    int l,m,n,i,j,s,k;
    char string[256],substring[256],replacement[256];
    char t;
    scanf ("%s",string);
    scanf ("%s",substring);
    scanf ("%s",replacement);
    l=strlen(string);
    m=strlen(substring);
    t=substring[0];
    for (i=0;i<=l-m;i++)
    {
       s=0;
       if (string[i]==t)
       {
          for (j=i;j<=i+m-1;j++)
          {
          if (string[j]==substring[j-i])    {s++;}
          }
       if (s==m)
       {
           for (k=0;k<=m-1;k++)
           {string[i+k]=replacement[k];}
           i=l-m;
       }
       else
           {i++;}
       }
     }
    printf("%s\n",string);
return 0;
}