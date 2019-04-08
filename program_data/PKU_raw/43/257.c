main()
{
      int m,n,i,j,k;
      scanf("%d",&m);
      for(i=3;i<m/2+1;i++)
      {
                        for(j=2;j<i;j++)
                        {
                                        if(i%j==0)
                                        break;
                        }
                        if(j==i)
                        {
                                n=m-i;
                                for(k=2;k<n;k++)
                                {
                                                if(n%k==0)
                                                break;
                                }
                                if(k==n)
                                printf("%d %d\n",i,n);
                                
                        }
      }
      getchar();
      getchar();
}