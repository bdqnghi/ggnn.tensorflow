main()
{
      int a,b,c,d,e,count;
      for(e=1;e<=5;e++)
      {
         if(e==2||e==3)
         {
           continue;
         }
         for (a=1;a<=5;a++)
         {
             for(b=1;b<=5;b++)
             {
                for(c=1;c<=5;c++)
                {
                     for(d=1;d<=5;d++)
                     {
                          if (a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
                          {
                                      count=0;
                                      if((a==1||a==2)&&e==1)
                                      {     
                                          count++;
                                      }
                                      if (a!=1&&a!=2&&e!=1)
                                      {
                                          count++;
                                      }
                                      if (b!=1)
                                      {           
                                          count++;
                                      }
                                      if ((c==1||c==2)&&a==5)
                                      {
                                           count++;
                                      }
                                      if (c!=1&&c!=2&&a!=5)
                                      {
                                            count++;
                                      }
                                      if((d==1||d==2)&&c!=1)
                                      {
                                             count++;
                                      }
                                      if (d!=1&&d!=2&&c==1)
                                      {
                                           count++;
                                      }
                                      if ((e==1||e==2)&&d==1)
                                      {
                                           count++;
                                      }
                                      if (e!=1&&e!=2&&d!=1)
                                      {
                                            count++;
                                      }
                                      if (count==5)
                                      {
                                                   printf("%d %d %d %d %d\n",a,b,c,d,e);
                                      }
                          }
                     }
                }
             }
         }  
      }
getchar();getchar();getchar();getchar();
}
        