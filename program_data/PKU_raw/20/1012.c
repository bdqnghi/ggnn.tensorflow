int main()
{ 
  int s1,s2,i,j,t,max;
  char str[20],substr[5],a[20];
  while(scanf("%s%s",str,substr)!=EOF)
     {
      s1=strlen(str);s2=strlen(substr);
      max=0;
      for(i=0;i<s1;i++)
        if(max<str[i]) 
         {
          max=str[i];
          t=i;
          }
       j=0;
       for(i=t+1;i<s1;i++)
         {
          a[j]=str[i];
          j++;
          }
	   j=0;
	   for(i=t+1;i<t+s2+1;i++)
	   {
		   str[i]=substr[j];
           j++;
	   }
       j=0;
       for(i=t+s2+1;i<s1+s2;i++)
          {str[i]=a[j];
           j++;
          }
       for(i=0;i<s1+s2-1;i++)
         printf("%c",str[i]);
	   printf("%c\n",str[s1+s2-1]);
      }
return 0;
}