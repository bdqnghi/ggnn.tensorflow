main()
{
      int x,y,t,s=0;
      int a[11]={0},b[11]={0};
      int i,j;
      scanf("%d",&x);a[0]=x;
      scanf("%d",&y);b[0]=y;
      i=0;
      do
      {
          i+=1;
          a[i]=a[i-1]/2;
          b[i]=b[i-1]/2;
      }
      while((a[i]>1)||(b[i]>1));
      for(i=0;i<11;i++)
      {
          for(j=0;j<11;j++)
          {
              if(b[j]==a[i]) 
              {
                  t=b[j];
                  s=1;
                  break;
              }
          }
          if(s==1) break;
      }
      printf("%d",t);
}