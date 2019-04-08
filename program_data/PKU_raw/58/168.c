
int main()
{
    int n,i=0,sum;
    char c[1000];
    scanf("%d",&n);
    gets(c);
    char a[n][81];
    for (i=0;i<n;i++)
    {
        gets(a[i]);
        sum=0;
        for (int j=0;j<strlen(a[i]);j++)
          {
          if (!(a[i][j]>='0'&&a[i][j]<='9'||a[i][j]>='a'&&a[i][j]<='z'||a[i][j]>='A'&&a[i][j]<='Z'||a[i][j]=='_'))
              {
              sum=sum;
              sum=0;
              break;
              }
          else if (a[i][0]>='0'&&a[i][0]<='9')
            {
            sum=sum;
            sum=0;
            break;
            }
          else 
              sum=sum+1;
          }
          if (sum!=0)
          printf("1\n");
          else 
          printf("0\n");
    }

}
              
