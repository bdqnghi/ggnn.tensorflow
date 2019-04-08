main()
{
      char p[260],q[260];
      int a[251],b[251],c[251];
      int j=250;
      for(int i=0;i<251;i++)
      {
              a[i]=0;
              b[i]=0;
              c[i]=0;
      }
      scanf("%s %s",&p,&q);
      for(int i=0;i<strlen(p);i++)
          a[i]=p[strlen(p)-1-i]-48;
      for(int i=0;i<strlen(q);i++)
          b[i]=q[strlen(q)-1-i]-48;
      for(int i=0;i<250;i++)
      {
              c[i]=a[i]+b[i]+c[i];
              if(c[i]>=10)
              {
                         c[i]=c[i]-10;
                         c[i+1]=c[i+1]+1;
              }
      }
      while(c[j]==0&&j!=0)
      j--;
      if(j==0&&c[j]==0)printf("0\n");
      else
      {
          for(int i=j;i>=0;i--)
              printf("%d",c[i]);
          printf("\n");
      }

}