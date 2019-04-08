void main()
{
    int c[20000]={0},a,i=0,n,p=0,j,k;
    scanf("%d",&n);
    while (i<n)
    {
        scanf("%d",&a);
        for ( j=0,k=0; j<i; j++)
        {
            if (c[j]==a)
            {
                k=1;
                break;
            }
           
        }
  
        if (k==0)
        {
            c[p]=a;
            p++;
        }
        i++;
        
    }
    for (j=0; j<p; j++)
    {
        printf("%d",c[j]);
        if(j<p-1) printf(" ");
    }
}