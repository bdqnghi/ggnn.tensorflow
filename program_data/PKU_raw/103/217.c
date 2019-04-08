main()
{
      char a[1001],c;
      gets(a);
      int i;
      int k=1;
      for(i=0;a[i]!='\0';i++)
      {
           if ((a[i+1]==a[i])||(a[i+1]==a[i]+'A'-'a')||a[i+1]==(a[i]-'A'+'a'))
               k++;
           else
           {
               if(a[i]<'a')
                  printf("(%c,%d)",a[i],k);
               else
               {   
                  c=a[i]+'A'-'a'; 
                  printf("(%c,%d)",c,k);
               }
               k=1;
           }
      }
}