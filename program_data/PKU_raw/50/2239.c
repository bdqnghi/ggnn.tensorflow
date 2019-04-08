
main()
{
      int w;
      int i ,j ,k;
      scanf("%d",&w);
      int p[13];
      p[1]=31;
      p[3]=31;
      p[5]=31;
      p[7]=31;
      p[8]=31;
      p[10]=31;
      p[12]=31;
      p[2]=28;
      p[4]=30;
      p[6]=30;
      p[9]=30;
      p[11]=30;
      for(j=1;j<=12;j++)
      {
                        int sumday=12;
                        for(i=1;i<j;i++)
                        {
                                        sumday+=p[i];
                        }
                        k=sumday%7;
                       if((w+k)%7==5)
                       printf("%d\n",j);
      }
      return 0;
}
