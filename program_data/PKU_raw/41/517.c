main()
{
    int i=0,i1,i2,i3,i4,i5;
    int correct=1;
    int a[72][5];
    for(i1=1;i1<=5;i1++)
    {
        for(i2=1;i2<=5;i2++)
        {
            if(i2!=i1)
            {
              for(i3=1;i3<=5;i3++)
              {
                  if(i3!=i2&&i3!=i1)
                  {
                      for(i4=1;i4<=5;i4++)
                      {
                          if(i4!=i1&&i4!=i2&&i4!=i3)
                          {
                              for(i5=1;i5<=5;i5++)
                              {
                                  if(i5!=2&&i5!=3&&i5!=i1&&i5!=i2&&i5!=i3&&i5!=i4)
                                  {
                                            a [i][0]=i1;
                                            a[i][1]=i2;
                                            a[i][2]=i3;
                                            a[i][3]=i4;
                                            a[i][4]=i5;
                                            i++;
                                  }
                              }
                          }
                      }
                  }
              }
            }

        }
    }
    for(i=0;i<72;i++)
    {
        if(a[i][0]==1) correct=0;
        else if(a[i][0]==2&&a[i][4]!=1) correct=0;
        else if(a[i][0]!=1&&a[i][0]!=2&&a[i][4]==1) correct=0;
        else
        {
            if(a[i][1]==1) correct=0;
            else
            {
                if((a[i][2]==1||a[i][2]==2)&&a[i][0]!=5) correct=0;
                else if(a[i][2]!=1&&a[i][2]!=2&&a[i][0]==5) correct=0;
                else
                {
                    if(a[i][3]==2&&a[i][2]==1) correct=0;
                    else if(a[i][3]!=1&&a[i][3]!=2&&a[i][2]!=1) correct=0;
                    else
                    {
                        if(a[i][4]==1) correct=0;
                        if(a[i][4]==2&&a[i][3]!=1) correct=0;
                        if(a[i][4]!=1&&a[i][4]!=2&&a[i][3]==1) correct=0;
                        else
                        {
                            printf("%d %d %d %d %d",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
                        }
                    }
                }
            }
        }
    }


}