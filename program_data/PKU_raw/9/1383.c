main()
{
      int n;
      int amount_lao=0,amount_yiban=0;
      char c[11];
      int shuru;
      int i,j,k,s,p;
      struct xinxi
      {
             char id[11];
             int age;
      };
      struct xinxi laoren[100];
      struct xinxi common[100];
      struct xinxi temp;
      scanf("%d",&n);
      for(p=0;p<n;p++)
      {
          scanf("%s %d",c,&shuru);
          if(shuru<60)
          {
              strcpy(common[amount_yiban].id,c);
              common[amount_yiban].age=shuru;
              amount_yiban++;
          }
          else if(shuru>=60)
          {
              strcpy(laoren[amount_lao].id,c);
              laoren[amount_lao].age=shuru;
              amount_lao++;   
          }
      }
      for(i=0;i<amount_lao-1;i++)
      {
           for(j=0;j<amount_lao-i-1;j++)
           {
               if(laoren[j].age<laoren[j+1].age)
               {
                    strcpy(temp.id,laoren[j].id);
                    temp.age=laoren[j].age;
                    strcpy(laoren[j].id,laoren[j+1].id);
                    laoren[j].age=laoren[j+1].age;
                    strcpy(laoren[j+1].id,temp.id);
                    laoren[j+1].age=temp.age;
               }  
           }
      }
      for(k=0;k<amount_lao;k++)
      {
          puts(laoren[k].id);
          printf("\n");
      }
      for(s=0;s<amount_yiban;s++)
      {
          puts(common[s].id);
          printf("\n");
      }
      getchar();
      getchar();
}
