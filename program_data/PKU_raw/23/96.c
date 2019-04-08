int main()
{
    char a[100],b[100][100];
    int n,i,j;
    n=0;
    while (scanf ("%s",&a)!=EOF)
    {
          j=strlen(a);
          for (i=0;i<j;i++)
          b[n][i]=a[i];
          n++;
    }
    for (i=0;i<n-1;i++)
    printf("%s ",b[n-i-1]);
    printf("%s",b[0]);
    return 0;
}