
main()
{
      int a,i;
      char str[1001];
      a=1;
      scanf("%s",str);
      for(i=0;;i++)
      {
                   if(str[i]=='\0')
                   break;
                   if(str[i]>96)
                   str[i]=str[i]-32;
      }
      for(i=0;;i++)
      {           
                   
                   if(str[i]==str[i+1])
                   a++;
                   else
                   {
                   printf("(%c,%d)",str[i],a);
                   a=1;
                   }
                   if(str[i+1]=='\0')
                   break;
                   
      }

} 
