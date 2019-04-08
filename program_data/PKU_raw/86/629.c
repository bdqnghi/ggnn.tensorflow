
main()
{
      int n, total[100] = {0}, broke, time, i, j, broke_time[61] = {0}, timer;
      
      scanf("%d", &n);
      for(i = 0; i <= n - 1; i++)
      {
            scanf("%d", &broke);
            
            for(j = 1;j <= broke;j ++)
            {
                  scanf("%d", &timer);
                  broke_time[timer] = 1;
            }
            
            for(time = 1;time <= 60; time ++)
            {
                     total[i] ++;
                     if(broke_time[total[i]] == 1)
                     {
                                         //printf("(%d)", time);
                                         time += 3;
                                         
                                         //printf("|%d|[%d]\n", total[i], time);
                     }
                     if (time > 60) break;
                     
            }


            for(j = 0;j <=60;j++)
            {
                  broke_time[j] = 0;
                  }

            
      }
      
      for(i = 0;i <= n-1; i ++)
      {
            printf("%d\n", total[i]);
            }
}
                  
