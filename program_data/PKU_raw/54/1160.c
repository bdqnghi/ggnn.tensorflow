int main()
{
    int n,k,p=1,j,q,l=0;
scanf("%d %d",&n,&k);
     do
      {
        j=1;q=p;
        while(((q*n+k)%(n-1)==0)&&j<n)
        {
            j++;
            q=(q*n+k)/(n-1);
        }
        if(j==n)
        {
        printf("%d",n*q+k);
        l=1;
        }
        p=p+1;
       } while(l!=1);
return 0;
}
