
int main(int argc, char *argv[])
{
  char str1[Len],str2[Len];
  char *p,*q;
  int L1,L2,flag=0;
 
  gets(str1);
  gets(str2);
  L1=strlen(str1);
  L2=strlen(str2);
  
  for(p=str1,q=str2;p<=str1+L1 && q<=str2+L2;p++,q++)
    {
      if(*p>='a' && *p<='z')
        *p=(char)((int)*p-32);
      if(*q>='a' && *q<='z')
        *q=(char)((int)*q-32);
      
      if(*p==*q)
        continue;
      else if(*p<*q)
        {
          flag=1;
          break;
        }  
      else
        {
          flag=-1;
          break;
        }
     }        
   if(flag==0)
     printf("=");
   else if(flag==1)
     printf("<");
   else
     printf(">");         
        

  return 0;
}

