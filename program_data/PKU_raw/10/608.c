main()
{
      int k;
      int i,j;
      int s[30],t[30];
      scanf("%d",&k);
      for(i=0;i<k;i++)
      {
                      scanf("%d",&s[i]);
                      t[i]=0;
      }
      for(i=k-1;i>=0;i--)
      {
                       for(j=i+1;j<k;j++)
                       {
                                         if(s[i]>=s[j]&&t[i]<t[j])
                                                     t[i]=t[j];
                       }
                       t[i]++;
      }
      for(i=0;i<k;i++)
      {
                      if(t[0]<t[i])
                         t[0]=t[i];
      }
      printf("%d",t[0]);
}
                                         
