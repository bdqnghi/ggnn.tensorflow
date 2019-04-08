
int main()
{
    int i,j,k,mark,flag,len;
    int Len[300];
    char sen[999];
    
    i=0;
    j=0;
    k=0;
    flag=1;
    mark=0;
    gets(sen);
 
    
  

    for(i=0;i<999;i++)
    {
     if(sen[i]==' '&&flag==1)
      {
      flag=0;
      Len[j]=i-mark;
      mark=i+1;
      j++;
      }
      
     else if(sen[i]==' '&&flag==0)          
       mark++;
   
     else if(sen[i]!=' '&&sen[i]!='\0')
      flag=1;
      
     else if(sen[i]=='\0')
      {
      Len[j]=i-mark;
      break;
      }
     }
     
     for(k=0;k<j;k++)
      printf("%d,",Len[k]);
     printf("%d",Len[j]);
}
      
