main()
{
      int a,b,c,d;
      scanf("%d",&a);
      for(b=1,c=13;b<=12;b++)
      {
                        d=(c-1)%7;
                        if((d+a)%7==5)
                        {
                                      printf("%d\n",b);
                                      }
                                      if(b==1||b==3||b==5||b==7||b==8||b==10)
                                      c=c+31;
                                      else if(b==4||b==6||b==9||b==11)
                                      c=c+30;
                                      else
                                      c=c+28;
                                      }
                                      }