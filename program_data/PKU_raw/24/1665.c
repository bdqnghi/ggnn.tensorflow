int main()
{  char str[10000];
   gets(str);
   char word[50],longword[50],shortword[50];
   int longnum=0,shortnum=50,k=0,i,j,num=0;
   for(i=0;i<strlen(str);i++)
   {  
          if(str[i]!=' '&&str[i]!=',')
          {     num++;
                word[k]=str[i];
                k++;
               
                
          }
           if(((str[i]==' '||str[i]==',')&&str[i-1]!=' '&&str[i-1]!=',')||str[i+1]==0)
           {    if(longnum<num)
                {longnum=num;
                 strcpy(longword,word);
                }
                if(shortnum>num)
                {shortnum=num;
                 strcpy(shortword,word);
                } 
                num=0;
                k=0;
               for(j=0;word[j]!=0;j++)
               {word[j]=0;}
           }    
   }
   longword[longnum]='\0';
  
   printf("%s\n%s",longword,shortword);
return 0;
}

