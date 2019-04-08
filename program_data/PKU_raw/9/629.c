main()
{
      int n,age[100],a[100],k=0,count=0,c[100],i,j;
      char ID[100][100],id[100][100],string[100];
      scanf("%d",&n);
      for(int i=0;i<n;i++)
          scanf("%s %d",ID[i],&age[i]);
      for(i=0;i<n;i++)
      {
          if(age[i]>=60)
            {
               a[k]=age[i];
               strcpy(id[k],ID[i]);
               count++;
               c[k]=k;
               k++;
            }  
      }
      for(k=0;k<count;k++)
      {
          for(int j=k+1;j<count;j++)
          {
          if(a[k]<a[j])
            {
               int t=a[j];
               a[j]=a[k];
               a[k]=t;
               strcpy(string,id[k]);
               strcpy(id[k],id[j]);
               strcpy(id[j],string);
               int p=c[k];
               c[k]=c[j];
               c[j]=p;
            }
           }  
      }
      for(k=0;k<count;k++)
      {
         for(int j=k+1;j<count;j++)
         {
            if(a[k]==a[j])
            {
              if(c[k]>c[j])
              { 
               int t=a[j];
               a[j]=a[k];
               a[k]=t;
               strcpy(string,id[k]);
               strcpy(id[k],id[j]);
               strcpy(id[j],string);
               int p=c[k];
               c[k]=c[j];
               c[j]=p;
              }
            }
          }
      }                                        
      for(k=0;k<count;k++)
        printf("%s\n",id[k]);
      for(i=0;i<n;i++)
      {
           if(age[i]<60)
             printf("%s\n",ID[i]);
      }
      getchar();
      getchar();
}                 
                