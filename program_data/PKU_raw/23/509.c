int main()
{
    int a[100][100],m[100],n,p;
    for (int i=1;i<=100;i++)
    {
        for (int j=1;j<=100;j++)
        {
            a[i][j]=getchar();
            if (a[i][j]=='\n'||a[i][j]==' ')
            {
               p=a[i][j];
               m[i]=j-1;
               break;
            }
        }
        if (p=='\n')
        {
           n=i;
           break;
        } 
    }
    for (int i=n;i>=1;i--)
    {
        for (int j=1;j<=m[i];j++)
			putchar(a[i][j]);
        if (i==1)
        break;
        putchar(' ');
    }
    return 0;
} 
