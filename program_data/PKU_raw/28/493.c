int main()
{
 char str[3000];
 int i=0,flag=0,letter=0;
 gets(str);
 while(1)
      {
       if(str[i]==' '||str[i]=='\0')
         {
          if(letter)
            {
                if(flag)
                   printf(",");
                else 
                     flag=1;
                printf("%d",letter);
                letter=0;
           }
         }  
       else 
           letter++;
       if(!str[i])
         break;
       i++;
       }
 return 1;
}           
           
          
