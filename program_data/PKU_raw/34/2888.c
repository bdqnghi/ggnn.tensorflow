int main()
{
    int i,j,m,n,s;
    int x[100],y[100];
    scanf("%d",&n);
    if(n==1)
    {  printf("End");return 0;}
    while(n>1)
    {
        if(n%2==0)
        { printf ("%d/2=%d\n",n,n/2);n=n/2;}
        else
        {  printf("%d*3+1=%d\n",n,n*3+1);n=n*3+1;}
    }
        if(n==1)
        {  printf("End");return 0;}
      
    return 0;
    }