main()
{
      int n,i,j,x;
      float t;
      struct person
      {
             char sex[6];
            float h;       
      };
      scanf("%d",&n);
      struct person per[40];
      for(i=0;i<n;i++)
      {
                      scanf("%s",per[i].sex);
                      scanf("%f",&per[i].h);                
      }
      for(i=0;i<n;i++)
      {if(strcmp(per[i].sex,"female")==0)
      continue;
                      for (j=i+1;j<n;j++)
                      {
                         if(strcmp(per[j].sex,"female")==0)
                         continue; 
                         if(per[i].h>per[j].h)
                         {
                                     t=per[i].h;
                                     per[i].h=per[j].h;
                                     per[j].h=t;                     
                         }                   
                      }
                      printf("%.2f ",per[i].h);                             
      }
      x=0;
      for(i=0;i<n;i++)
      {if(strcmp(per[i].sex,"male")==0)
      continue;
                      for (j=i+1;j<n;j++)
                      {
                         if(strcmp(per[j].sex,"male")==0)
                         continue; 
                         if(per[i].h<per[j].h)
                         {
                                     t=per[i].h;
                                     per[i].h=per[j].h;
                                     per[j].h=t;                     
                         }                   
                      }
                      if(x==0)
                      {printf("%.2f",per[i].h);
                      x=1;}
                      else
                      {printf(" %.2f",per[i].h);}                               
      }     
}