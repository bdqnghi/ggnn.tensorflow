main()
{
      int i,j,n,t;
      char c[100],d[100];
      int b[100],a[100];
     gets (c);
     
      //n=strlen("c");
      for(i=0;c[i]!='\0';i++)
     {
         a[i]=c[i]-'0';           
      } 
      //printf("%d",i);
     if(i==1){printf("0");printf("\n%d",a[0]);  }
      else
      {
     for(j=0;j<i-1;j++)
     {
        b[j]=(10*a[j]+a[j+1])/13; 
        a[j+1]=(10*a[j]+a[j+1])%13;
          // printf("\n%d",b[j]);             
     } 
  for(n=0;n<j;n++)
     {
       d[n]=b[n]+'0';
                   
     }
    // printf("%d\n",n);
     d[n]='\0';
     if(d[0]=='0')
     {
           if(d[1]=='\0')
           {printf("%c",d[0]);}
            else
            {
             for(t=1;d[t]!='\0';t++)
              {
      
                    printf("%c",d[t]);           
                   }          
            }
            }   
     else
     {
     for(t=0;d[t]!='\0';t++)
     {
      
        printf("%c",d[t]);           
     }                    
     }
     printf("\n%d",a[j]); 
}   
     
getchar();  
 getchar();     
 getchar();    
  getchar();  
 getchar();     
 getchar();
  }