main()
{
      char senior[100][10];
      char junior[100][10];
      char temp[10];
      int  list[100]={0};
      int  se[100];
      int  ju[100];
      int  n,i,j,k,nums,numj,year;

      scanf("%d",&n);
      nums=-1; numj=-1;
      for (i=1;i<=n;i++)
      {
          scanf("%s",temp);
          scanf("%d",&year);
          if (year>=60)
          {
              nums++;
              strcpy(senior[nums],temp);
              se[nums]=year;
              list[nums]=nums;
          }
          else
          {
              numj++;
              strcpy(junior[numj],temp);
              ju[numj]=year;
          }
      }
      for (i=0;i<nums;i++)
          for (j=i+1;j<=nums;j++)
              if ((se[i]<se[j]))
              {
                  year=se[i]; se[i]=se[j]; se[j]=year;
                  year=list[i]; list[i]=list[j]; list[j]=year;
                  strcpy(temp,senior[i]);
                  strcpy(senior[i],senior[j]);
                  strcpy(senior[j],temp);                                  
              }
              else if (se[i]==se[j] && list[i]>list[j])
              {
                  year=se[i]; se[i]=se[j]; se[j]=year;
                  year=list[i]; list[i]=list[j]; list[j]=year;
                  strcpy(temp,senior[i]);
                  strcpy(senior[i],senior[j]);
                  strcpy(senior[j],temp);                                  
              }
//      for (i=0;i<numj;i++)
//          for (j=i+1;j<=numj;j++)
//              if (strcmp(junior[i],junior[j])>0)
//              {
//                  year= ju[i]; ju[i]=ju[j]; ju[j]=year;
//                  strcpy(temp,junior[i]);
//                  strcpy(junior[i],junior[j]);
//                  strcpy(junior[j],temp);
//              }
      for (i=0;i<=nums;i++)
      {
          //printf("%d ",list[i]);
          puts(senior[i]);
      }
      for (i=0;i<=numj;i++)
          puts(junior[i]);
      return 0;
}
