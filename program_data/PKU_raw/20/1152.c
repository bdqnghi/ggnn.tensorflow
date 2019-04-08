int main()
{
    int i,j,k;
    char s1[100],s2[100];
    while (scanf("%s%s",&s1,&s2)!=EOF)
    {
          j=0; k=0;
          for (i=0;i<strlen(s1);i++)
          {
              if ((int)s1[i]>j)
              {
                 j=(int)s1[i]; k=i;
              }
          }
          for (i=0;i<strlen(s1);i++)
          {
              putchar(s1[i]);
              if (i==k)
              {
                 for (j=0;j<strlen(s2);j++)
                     putchar(s2[j]);
              }
          }
          printf("\n");
    }
}
