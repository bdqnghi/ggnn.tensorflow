int main()
{
int k,m,n,i,j;
scanf("%d",&k);
for(m=3;m<=k;m++)
{
   n=k-m;
          for(i=2;i<m;i++)
            {
                 if (m%i==0)
                   break;
             }
          for(j=2;j<n;j++)
             {
                  if(n%j==0)
                  break;
              }
          if (i==m&&j==n)
          if (k==m+n)
        	  if(m<=n)
           printf("%d %d\n",m,n);
          }

    return 0;
}
