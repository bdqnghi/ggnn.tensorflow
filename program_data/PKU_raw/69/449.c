main()
{
      char str1[252],str2[252],str[252];
      int i,j,k,n,n1,n2;
      scanf("%s",str1);
      scanf("%s",str2);
      n1=strlen(str1);
      n2=strlen(str2);
      for(i=n1-1;i>=0;i--)
      str1[i+251-n1]=str1[i];
      for(i=0;i<251-n1;i++)
      str1[i]='0';
      for(i=n2-1;i>=0;i--)
      str2[i+251-n2]=str2[i];
      for(i=0;i<251-n2;i++)
      str2[i]='0';
      k=0;
      for(i=250;i>=0;i--)
      {
                         
                         str[i]=str1[i]+str2[i]-'0'-'0'+k;
                         if(str[i]>9)
                        { k=1;
                        str[i]=str[i]+'0'-10;
                        }
                         if(str[i]<=9)
                         {k=0;
                         str[i]=str[i]+'0';
                         }
                         }
                         for(i=0;i<=250;i++)
                         {
                                            if(str[i]!='0')
                                            {
                                                           n=i;
                                                           break;
                                            
                                            }
                                            }
                                            if(i==251)
                                            printf("0");
                                            for(i=n;i<=250;i++)
                                            printf("%c",str[i]);
                        
                        
                        
                        
                        
                                            
                        
                                            
                        
      }
      