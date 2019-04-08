main()
{
      int n,i;
      float b,c,p,q,j,k;
      scanf("%d",&n);
      scanf("%d %d",&p,&q);
      b=q/p;
      for(i=0;i<n-1;i++)
      {
                        scanf("%d %d",&j,&k);
                        c=k/j;
                        if(fabs(b-c)>0.05)
                        {
                                          if(b-c>0.05)
                                          printf("worse\n");
                                          else
                                          printf("better\n");
                        }
                        else
                        printf("same\n");
      }
      getchar();
      getchar();
}
