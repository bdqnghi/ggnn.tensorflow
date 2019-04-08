
main()
{
      char ch,c[1001];
      int a,len,i;
      scanf("%s",c);
      len=strlen(c);
      if(c[0]>='a'&&c[0]<='z')
               ch='A'+c[0]-'a';
      else
               ch=c[0];
      a=1;
      for(i=1;i<=len-1;i++)
      {  if(c[i]-ch==0||c[i]-ch=='a'-'A')
            a++;
         else
           {
             printf("(%c,%d)",ch,a);
            if(c[i]>='a'&&c[i]<='z')
               ch='A'+c[i]-'a';
            else
               ch=c[i];
            a=1;
           }
      }
      printf("(%c,%d)",ch,a);
     
} 