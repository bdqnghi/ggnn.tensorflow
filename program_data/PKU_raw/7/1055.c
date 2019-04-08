int main()
{
     int a,b,i,j,count=0,k;
     char string[256],substring[256],replacement[256],czy[256],cai[256];
     gets(string);
     gets(substring);
     gets(replacement);
     a=strlen(string);
     b=strlen(substring);
     for(i=0;i<a;i++)
     {
          if(string[i]==substring[0])
          {
                                      for(j=0;j<b;j++)
                                      czy[j]=string[i+j];
                                      if(strcmp(czy,substring)==0)
                                      {
                                                                  count=1;
                                                                  for(k=0;k<i;k++)
                                                                  cai[k]=string[k];
                                                                  for(k=i;k<i+b;k++)
                                                                  cai[k]=replacement[k-i];
                                                                  for(k=i+b;k<a;k++)
                                                                  cai[k]=string[k]; 
                                      }
                                      if(count==1)
                                      break;
          }
     }
     if(count==1)
     puts(cai);
     else
     puts(string);
}                                                                                                                                                                    
                                                                  
                                      
          
          
     
