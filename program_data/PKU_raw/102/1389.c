main()
{
      int n,m,f;
      m=0;
      f=0;
      scanf("%d\n",&n);
      struct student
      {
             char sex[6];
             float tall; 
      };
      struct student std1[40];
      struct student std2[40];
      struct student std3[40];
      for(int i=0;i<n;i++)
      {
              scanf("%s %f",std1[i].sex,&std1[i].tall);
              if(strcmp(std1[i].sex,"male")==0)
              {
                       std2[m]=std1[i];
                       m=m+1;
              }
              else
              {
                       std3[f]=std1[i];
                       f=f+1;
              }  
      }
      for(int p=m-1;p>0;p--)
      {
              for(int q=0;q<p;q++)
              {
                      if(std2[q].tall>std2[q+1].tall)
                      {
                                 float t;
                                 t=std2[q].tall;
                                 std2[q].tall=std2[q+1].tall;
                                 std2[q+1].tall=t;
                      }
              }
                      
      }
      for(int p=f-1;p>0;p--)
      {
              for(int q=0;q<p;q++)
              {
                      if(std3[q].tall<std3[q+1].tall)
                      {
                                 float t;
                                 t=std3[q].tall;
                                 std3[q].tall=std3[q+1].tall;
                                 std3[q+1].tall=t;
                      }
              }
      }
      for(int z=0;z<m;z++)
      {
              if(z==0)
              printf("%.2f",std2[z].tall);
              else printf(" %.2f",std2[z].tall);
      }
      for(int z=0;z<f;z++)
      {
              printf(" %.2f",std3[z].tall);
      }
      
}
