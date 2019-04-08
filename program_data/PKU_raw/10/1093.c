main()
{
      int k,i,j;
      scanf("%d",&k);
      int h[k],n[k];
      for(i=0;i<k;i++)
          scanf("%d",&h[i]);
      for(i=k-1;i>=0;i--)
      {
          int max=0;
          for(j=i+1;j<k;j++)
              if(h[j]<=h[i]&&n[j]>max) max=n[j];
          n[i]=max+1;
      }
      int Max=0;
      for(i=0;i<k;i++)
          if(n[i]>Max) Max=n[i];
      printf("%d\n",Max);
} 