int main()
{
    long int i,j,k,l,m,n,mm,nn,ll,jj;
    scanf("%ld%ld",&n,&k);
    l=n-1;
    while (1)
    { 
      l=l+1;
      m=0;
      mm=l; nn=n; ll=0; jj=0; 
      while (1)
      {
            if (nn==0)
            {
               m=1;
               break;
            } 
            ll=mm%n;
            if (ll!=k) break;
            jj=mm/n*(n-1);
            if (jj<=0) break;
            mm=jj;
            nn=nn-1; 
      }
      if (m==1) break;
    }
    printf("%ld",l);
    scanf("%d",&i); 
}

