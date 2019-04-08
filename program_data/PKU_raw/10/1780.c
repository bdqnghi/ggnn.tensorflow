main()
{
      int a[26],b[26],i,j,k;
      scanf("%d",&k);
      for(i=0;i<k;i++)
      {
                      scanf("%d",&a[i]);
                      b[i]=0;
                      for(j=0;j<i;j++)
                      {
                                      if((a[j]>=a[i])&&(b[j]>b[i]))
                                      {
                                                                   b[i]=b[j];
                                      }
                      }
                      b[i]++;
                      
      }
      for(i=0;i<k;i++)
      {
                      if(b[i]>b[0])
                      {
                                   b[0]=b[i];
                      }
      }
      printf("%d",b[0]);
      getchar();getchar();getchar();getchar();
}
 
