int main()
{
    int i;
    char temp;
    char letter1[53],letter2[53];
    for(i=0;i<52;i++)
       {
        letter1[i]=1;
        letter2[i]=1;
        } 
    letter1[52]='\0';
    letter2[52]='\0';
    while((temp=getchar())!=' ')
         {
          if(temp>='a'&&temp<='z')
             temp-='a';
          else 
              temp-='A';
          letter1[temp]++;
          } 
    while((temp=getchar())!='\n')
         {
          if(temp>='a'&&temp<='z')
             temp-='a';
          else 
              temp-='A';
          letter2[temp]++;
          }
   if(strcmp(letter1,letter2)==0)
     printf("YES");
   else 
       printf("NO");
   return 1;
}                          
