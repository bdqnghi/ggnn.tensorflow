int main ()
{
    int n,a,b,i,j,k;
    scanf("%d",&n);
    if (n<5)
    printf ("empty");
    for (i=3;i<=(n-2);i++)
    {
        for (j=2;j<=(sqrt(i));j++)
        if (i%j==0)break;
        if (j>sqrt(i)) 
        {
        a=i;
        b=a+2;
        for (k=2;k<=(sqrt(b));k++)
        if (b%k==0)break;
        if (k>sqrt(b)) 
        printf ("%d %d\n",a,b);
        }
        }
    
    return 0;
    }
