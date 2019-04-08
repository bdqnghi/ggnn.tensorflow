main()
{     char temp_0[10],id[100][10];
      int i,j,n,max,age[100],num[100],yes[100],ncount=1,temp,num_1;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {num[i]=i;
      scanf("%s %d",id[i],&age[i]);
      }
      for(j=0;j<n;j++)//???????????? 
                      {
                      for(i=0;i<n-j-1;i++)//?? 
                     { if(age[i]<age[i+1])
                                         {  strcpy(temp_0,id[i]);//?????????????? 
                                            temp=age[i];
                                            num_1=num[i];
                                            strcpy(id[i],id[i+1]);
                                            age[i]=age[i+1];
                                            num[i]=num[i+1];
                                            age[i+1]=temp; 
                                            strcpy(id[i+1],temp_0);
                                            num[i+1]=num_1;                             }
                      }}
   for(i=0;i<n;i++)//???60????? 
   {if(age[i]>=60)
   printf("%s\n",id[i]);
   }
   for(j=0;j<n;j++)// ??????? 
                   {for(i=0;i<n-j-1;i++)
                                      {if(num[i]>num[i+1])
                                       {  strcpy(temp_0,id[i]);
                                            temp=age[i];
                                            num_1=num[i];
                                            strcpy(id[i],id[i+1]);
                                            age[i]=age[i+1];
                                            num[i]=num[i+1];
                                            age[i+1]=temp; 
                                            strcpy(id[i+1],temp_0);
                                            num[i+1]=num_1;
                                            }}
                       }
    for(i=0;i<n;i++)
    {if(age[i]<60)//????60????? 
    printf("%s\n",id[i]);}
     }


