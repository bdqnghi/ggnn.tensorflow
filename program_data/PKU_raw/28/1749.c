int main()
{
  char zfc[30000];
  int i,len,length[301]={0},t=0,k;
  gets(zfc);
  len=strlen(zfc);
  for(i=0;i<len;i++)
  {   
      if(zfc[i]==' ')
      {
          for(k=i+1;;k++)
          {
              if(zfc[k]==' ')
              {
                  continue;
              }
              else
              {
                  t++;
                  i=k;
                  break;
              }
          }
      }
      length[t]++;
  }
  for(i=0;i<=t;i++)
  {
      if(i==0)
      {
           printf("%d",length[0]);
      }
      else
      {
          printf(",%d",length[i]);
      }
  }
  return 0;
}                
      
                                     
      
                 
              
              
                            
                    
