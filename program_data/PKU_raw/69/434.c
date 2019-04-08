main()
{
      int l1,l2,l,m,i,k,g,f;
      char str1[250],str2[250],str3[252],str4[251];
      gets(str1);
      gets(str2);

      l1=strlen(str1);
      
      l2=strlen(str2);
      if(  l1==1&&l2==1&&str1[0]=='0'&&str2[0]=='0')
         printf("%s",str1);
      else
      {   
    //  printf("%d %d",l1,l2);
      if(l1>l2)
        {
               
        l=l1;m=l1-l2;  
               
                 for(i=m;i<=l-1;i++)
                 {
                                  str4[i]=str2[i-m];
                                 }
                 for(i=0;i<m;i++)
                 {
                               str2[i]='0';
                               
                 }
                 // printf("%s %s",str4,str2);
                 for(i=m;i<=l-1;i++)
                 str2[i]=str4[i];
                 str2[l]='\0';
                 
              //   printf("%s",str2);
             
              //  printf("%s",str2);
               
               }
        
      else
        {
               l=l2;m=l2-l1;  
               
                 for(i=m;i<=l-1;i++)
                 {
                                  str4[i]=str1[i-m];
                                 }
                 for(i=0;i<m;i++)
                 {
                               str1[i]='0';
                               
                 } 
                 for(i=m;i<=l-1;i++)
                 str1[i]=str4[i];
                 
                 str1[l]='\0';
             
           //    printf("%s",str1);
        }
        g=0;
        //printf("%d",l);
        for(i=l-1;i!=-1;i=i-1)
       { //printf("%d",l);  
       
                            
      //printf("%d",i);       
                         if(str1[i]+str2[i]+g-48>'9')
                            {
                                    str3[i+1]=g+str1[i]+str2[i]-58;
                                    g=1;      
                                    //printf("%c %c\n",str1[i],str1[i]);     
                             //printf("%c",str3[i+1]) ;                  
                            }
                            else
                            {
                                str3[i+1]=str1[i]+str2[i]+g-48;
                            g=0;
                            }
      }
      str3[l+1]='\0';
      k=0;
      
     if(g==1)
      str3[0]='1';
     if(g==0)
     {
     for(i=0;i<=l;i++)
     str3[i]=str3[i+1];
     }
    for(i=0;;i++)
      {
        if(str3[i]!='0')
        break;
        k=k+1;
      
        }  
          //printf("%d",k); 
        for(i=0;i<=l;i++)
           {
           str3[i]=str3[i+k];   
         //  printf("%c",str3[i]);
          }
           //printf("%c",str3[0]);
           
   printf("%s\n",str3);
      
      
      
      }
      }
      
      
      
      
      
      
      
      
      
