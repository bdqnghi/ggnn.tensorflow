int main()
{
    int n;
    scanf ("%d", &n);
    int i,j,k;
    int a,b;
    int s[100][100];
    int sum;
    for (i=0;i<=n-1;i++)
    {
        scanf ("%d %d", &a,&b);
        for(j=0;j<=a-1;j++)
        {
                           for (k=0;k<=b-1;k++)
                           {
                               scanf ("%d", &s[j][k]);
                           }
        }
        sum=0;
        for (k=0;k<=b-1;k++)
        {
            sum=sum+s[0][k];
        }
        for (j=1;j<=a-1;j++)
        {
            sum=sum+s[j][b-1];
        }
        for (k=0;k<=b-2;k++)
        {
            sum=sum+s[a-1][k];
        }
        for (j=1;j<=a-2;j++)
        {
            sum=sum+s[j][0];
        }
        printf ("%d\n", sum);
    }   
    
    return 0;
}
