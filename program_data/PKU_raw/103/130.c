main()
{
      char str[1001]={'\0'};
      int i=0,count=0;
      scanf("%s",str);
      char b;
      
      for(;str[i]!='\0';i++)
      {  
         if(str[i]<='z'&&str[i]>='a')
           {
                 str[i]+='A'-'a';
           }
      }    
      i=0;
      b=str[0];
      for(;str[i]!='\0';i++)
      {
            if(b==str[i])
             count++;
            else
             {
                     printf("(%c,%d)",b,count);
                     b=str[i];
                     count=0;
                     i--;
             }
      } 
      printf("(%c,%d)",b,count);

    
}

