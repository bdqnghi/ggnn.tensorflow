int year[2],month[2],day[2],i,days=0,k=0;
int main(void)
{
    scanf("%d%d%d",&year[0],&month[0],&day[0]);
    scanf("%d%d%d",&year[1],&month[1],&day[1]);
    for (i=year[0]+1;i<year[1];i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        days+=366;
        else days+=365;
    }
    if (year[0]!=year[1])
    {
          for (i=month[0]+1;i<=12;i++)
             switch (i)
             {
              case 1:case 3:case 5:case 7:case 8:case 10:case 12:days+=31;break;
              case 2:
                  if ((year[0] % 4 == 0 && year[0] % 100 != 0) || (year[0] % 400 == 0))
                     days+=29;
                     else days+=28;
                  break;
              default:days+=30;
             }
          for (i=1;i<=month[1]-1;i++)
             switch (i)
             {
              case 1:case 3:case 5:case 7:case 8:case 10:case 12:days+=31;break;
              case 2:
                  if ((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
                     days+=29;
                     else days+=28;
                  break;
              default:days+=30;
             }
          for (k=0;k<2;k++)
              switch (month[k])
             {
              case 1:case 3:case 5:case 7:case 8:case 10:case 12:days+=(int)fabs(31*(int)fabs(k-1)-day[k]);break;
              case 2:
                  if ((year[k] % 4 == 0 && year[k] % 100 != 0) || (year[k] % 400 == 0))
                     days+=(int)fabs(29*(int)fabs(k-1)-day[k]);
                     else days+=(int)fabs(28*(int)fabs(k-1)-day[k]);
                  break;
              default:days+=(int)fabs(30*(int)fabs(k-1)-day[k]);
             }
    }
    else if (month[0]!=month[1])
           {
                    for (i=month[0]+1;i<=month[1]-1;i++)
                      switch (i)
                      {
                      case 1:case 3:case 5:case 7:case 8:case 10:case 12:days+=31;break;
                      case 2:
                      if ((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
                      days+=29;
                      else days+=28;
                      break;
                      default:days+=30;
                      }
                    for (k=0;k<2;k++)
                     switch (month[k])
                      {
                       case 1:case 3:case 5:case 7:case 8:case 10:case 12:days+=(int)fabs(31*(int)fabs(k-1)-day[k]);break;
                       case 2:
                        if ((year[k] % 4 == 0 && year[k] % 100 != 0) || (year[k] % 400 == 0))
                        days+=(int)fabs(29*(int)fabs(k-1)-day[k]);
                         else days+=(int)fabs(28*(int)fabs(k-1)-day[k]);
                        break;
                       default:days+=(int)fabs(30*(int)fabs(k-1)-day[k]);
                      }
           }
           else days+=day[1]-day[0];
    printf("%d",days);
    return 0;
}            
