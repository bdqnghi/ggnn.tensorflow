void main()
{
    char a[101],c;
    gets(a);
    c=a[0];
    int i,n,j,k;
    n=strlen(a);
    for(j=1;j<n/2+1;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=c&&a[i]!=0)
            {
                for(k=i-1;k>=0;k--)
                {
                    if(a[k]!=0)
                    {
                        printf("%d %d\n",k,i);
                        a[i]=0;a[k]=0;
                        break;
                    }
                }
                break;
            }
        }
    }
}
